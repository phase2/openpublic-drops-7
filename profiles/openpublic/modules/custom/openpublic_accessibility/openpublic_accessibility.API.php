<?php
/**
 * @file
 * Hooks provided by openpublic_accessibility.
 */

/**
 * This function can be used to alter skip_links before they rendered.
 */
function hook_openpublic_accessibility_skip_link_alter(&$links) {
  foreach ($links as $key => $link) {
    $links[$key]['#title'] .= ' (skip link)';
  }
}
