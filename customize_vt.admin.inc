<?php

function customize_vt_admin_settings() {
  
  $form['vt_publishing_opt'] = array(
     '#type' => 'textfield',
     '#title' => t('Publishing options weight'),
     '#default_value' => variable_get('vt_publishing_opt',-41),
  );

  $form['vt_menu_settings'] = array(
     '#type' => 'textfield',
     '#title' => t('Menu settings weight'),
     '#default_value' => variable_get('vt_menu_settings',-39)
  );

  $form['vt_revision'] = array(
     '#type' => 'textfield',
     '#title' => t('Revision information weight'),
     '#default_value' => variable_get('vt_revision',-38)
  );

  $form['vt_url_path'] = array(
     '#type' => 'textfield',
     '#title' => t('URL path settings weight'),
     '#default_value' => variable_get('vt_url_path',-37)
  );

  $form['vt_comment'] = array(
     '#type' => 'textfield',
     '#title' => t('Comment settings weight'),
     '#default_value' => variable_get('vt_comment',-36)
  );

  $form['vt_author_info'] = array(
     '#type' => 'textfield',
     '#title' => t('Authoring information weight'),
     '#default_value' => variable_get('vt_author_info',-35)
  );

  return system_settings_form($form, TRUE); 
}

function customize_vt_admin_settings_submit($form, $form_state) {
  
  if(isset($form_state['values']['vt_publishing_opt'])) {
    variable_set('vt_publishing_opt', $form_state['values']['vt_publishing_opt']);
  }

  if(isset($form_state['values']['vt_menu_settings'])) {
    variable_set('vt_menu_settings', $form_state['values']['vt_menu_settings']);
  }

  if(isset($form_state['values']['vt_revision'])) {
    variable_set('vt_revision', $form_state['values']['vt_revision']);
  }

  if(isset($form_state['values']['vt_url_path'])) {
    variable_set('vt_url_path', $form_state['values']['vt_url_path']);
  }

  if(isset($form_state['values']['vt_comment'])) {
    variable_set('vt_comment', $form_state['values']['vt_comment']);
  }

  if(isset($form_state['values']['vt_author_info'])) {
    variable_set('vt_author_info', $form_state['values']['vt_author_info']);
  }
}

?>
