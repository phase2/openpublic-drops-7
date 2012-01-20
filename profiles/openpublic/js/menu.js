function calc_width(children, parentWidth, $){
  var totalWidth = 0;
  var lastIndex = 0;
  var previous = null;
  var scroll = false;
  
  for(var i in children){
    if(typeof(children[i].clientWidth) != 'undefined'){
      totalWidth += children[i].offsetWidth;
      
      var link = $('a', children[i])[0]; 
      
      $(link).css('width', $(link).width() + 1);
      
      if(totalWidth > parentWidth && previous){
        if(!lastIndex) lastIndex = previous;
        $(children[i]).animate({'width' : 'toggle'}, 0);
        
        if( $('a', children[i]).hasClass('active') ){
          scroll = true;
        }
      }

      previous = i;
    }
  }
  
  return {'index' : lastIndex, 'width': totalWidth, 'scroll' : scroll};
}

function showChildren(width, left, children, $, store, totalWidth, i, aT){
  if(!i) var i = 0;
  if(typeof(aT) == 'undefined') var aT = 250; //just a way to quickly change the animation speed
  
  if(!totalWidth) {
    var totalWidth = -Math.abs(left);
  }

  if(i > children.length){ //basecase of recursion 
    store.opleft = left;
    
    //jquery isn't actually calling the function when the animation is done ... so we need to wait
    setTimeout(function(){
      if(left == 0){
        $('.scrollBackButton').hide();
      } else {
        $('.scrollBackButton').show();
      }
      //for some reason there is a null at the end of the array ... i blame jquery
      if($(children[children.length-1]).css('display') != 'none'){
        $('.scrollButton').hide();
      } else {
        $('.scrollButton').show();
      }  
    }, 10);
    return;
  }
  
  var child = children[i++];

  
  var w = $(child).width();
  
  if( (totalWidth + w) >= width){ //trailing ones that need to be hidden
    totalWidth = width; //make sure no more sneak in
    $(child).hide();
    showChildren(width, left, children, $, store, totalWidth, i);
  } else {
    if(totalWidth < 0 && totalWidth + w > 0) { totalWidth = 0; }
    totalWidth += w;
    if(totalWidth > 0 || $(child).css('display') != 'none'){
      $(child).animate({'width' : 'toggle'}, aT, 'linear', showChildren(width, left, children, $, store, totalWidth, i));
    } else {
      $(child).hide();
      showChildren(width, left, children, $, store, totalWidth, i);
    }
  }
}

function getFullWidth(obj){
  var children = obj.children;
  var overallWidth = 0;
  
  for(var i=0; i<children.length; i++){
    overallWidth += children[i].clientWidth + 10;
  }
  
  return overallWidth;
}

(function($){
  $(document).ready(function(){
    /* Handle the main (top) menu */
    var menu = $('#navigation ul.menu');
    
   
    
    if(menu.size()){
      var realmenu = menu[0];
      realmenu.opleft = 0;
      window.rm = realmenu; 
       
      $(realmenu).addClass('main-menu');
      //$(realmenu).wrap('<div class="hider"></div>');
      var hiderWidth = $('#navigation ul.menu').innerWidth();
      var params = calc_width(realmenu.children, hiderWidth, $);
      var index = params.index;
      if(index > 0){
        //add a scroll button
        $(realmenu).parent().append('<div class="scrollButton"><a href="javascript:void(0)" title="More Links">&nbsp;&nbsp;&nbsp;&nbsp;<br/>&nbsp;&nbsp;&nbsp;&nbsp;</a></>');
        $(realmenu).parent().prepend('<div class="scrollBackButton"><a href="javascript:void(0)" title="More Links">&nbsp;&nbsp;&nbsp;&nbsp;<br/>&nbsp;&nbsp;&nbsp;&nbsp;</a></div>');
        $('.scrollBackButton').hide();
        
        $('.scrollButton').click(function(e){

          showChildren(hiderWidth, hiderWidth + realmenu.opleft,  $(realmenu).children(), $, realmenu);
          $('.scrollBackButton').show();
        });
        
        $('.scrollBackButton').click(function(e){
         showChildren(hiderWidth, realmenu.opleft - hiderWidth, $(realmenu).children(), $, realmenu);
          $('.scrollButton').show();
        });
        
        //scroll to active tab if necessary
        if(params.scroll){
          $('.scrollButton').click();
        }
      }
    }
    
    //Handle the footer menu
    var footer = $('#footer-nav ul.menu')[0];
    var container = $('#footer-nav')[0];
    if(footer){
        var width = getFullWidth(footer);
        $(footer).css('width', width);

        if(width > $(container).width()){
          $('<div class="footerScrollButton"><a href="javascript:void(0)" title="More Links">&nbsp;&nbsp;&nbsp;&nbsp;<br/>&nbsp;&nbsp;&nbsp;&nbsp;</a></div>').insertAfter(container);
          $('<div class="footerScrollBackButton"><a href="javascript:void(0)" title="More Links">&nbsp;&nbsp;&nbsp;&nbsp;<br/>&nbsp;&nbsp;&nbsp;&nbsp;</a></div>').insertBefore(container);
          
          $('.footerScrollBackButton').hide();
          
          $('.footerScrollBackButton').click(function(){
            $(footer).animate({'left' : '0'}, 200);
            $(this).hide();
            $('.footerScrollButton').show();
          });
          
          $('.footerScrollButton').click(function(){
            $(footer).animate({'left' : $(container).width() - width + 5}, 200);
            $(this).hide();
            $('.footerScrollBackButton').show();
          });
        }
    }  

  });
})(jQuery); //shoots self in head for doing this

