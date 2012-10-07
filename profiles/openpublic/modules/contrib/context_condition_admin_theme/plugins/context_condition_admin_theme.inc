<?php
// $Id: 

/**
 * Expose themes as a context condition.
 */
class context_condition_admin_theme extends context_condition {
  /**
   * Override of condition_values().
   */
  function condition_values() {
    return array(
      'admin' => 'Use On Admin Theme',
      'non_admin' => 'Use on Non Admin Theme',
    );
  }


  /**
   * Override of execute().
   */
  function execute() {
    $value = user_access('view the administration theme') && path_is_admin(current_path()) ? 'admin' : 'non_admin';
    foreach ($this->get_contexts($value) as $context) {
      $this->condition_met($context);
    }    
  }
}
