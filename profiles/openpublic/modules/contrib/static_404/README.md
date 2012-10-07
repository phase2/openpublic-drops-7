# Static 404

## What does this do?

`static_404` helps to generate a static page that imitates a Drupal node.
Currently, it isn't particularly good at mitigating or interrupting Drupal's
bootstrapping process --- instead, its main value is in providing an easy way to
generate a static page that resembles a node.

## How do I use this?

1. Install and enable the module.
2. Create a page in Drupal that will dictate the static page to be serve. Let's
   say its path is `/404page`. 
3. Go to Configuration -> Site information and fill the `Default 404 (not found)
   page` with path of the page you just create, e.g. `404page`.
4. Save Site information.
5. When the page reloads, click the `Generate static 404 page` button.

## Automating generation with Drush

Regeneration of the static 404 page can be automated using cron with a Drush
command. The drush command `sudo drush static_404_generate -l [site url]` will
generate the static 404.

## Multiple 404 pages

If you want to generate multiple static 404 pages based on different regions of
your site, you can do so by setting the `static_404_prefix` global variable,
e.g. using PURL and Spaces.
 
## Relevant global variables

  - `static_404`: the path to the static 404 page generated
  - `static_404_prefix`: if set, applied a prefix to `static_404`
          
## Hooks defined

None.

