<?php
/**
 * @file
 * webform_fe.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function webform_fe_webform_defaults() {
$webforms = array();
  $webforms['meter_registration_warranty'] = array(
  'title' => 'Meter Registration Warranty',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '10dbc960-c731-46e1-b11a-220b007f21f7',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f90c396a-6ec2-458c-88e7-c3a92f8603d5',
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'next_serial' => 2,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'machine_name' => 'meter_registration_warranty',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      'title_webform___first_name' => array(
        'form_key' => 'serial_number',
        'name' => 'Serial number',
        'type' => 'number',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'type' => 'textfield',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'attributes' => array(),
          'analysis' => FALSE,
          'min' => '',
          'max' => '',
          'step' => '',
          'decimals' => '',
          'point' => '.',
          'separator' => ',',
          'integer' => 0,
          'excludezero' => 0,
        ),
        'required' => 1,
        'weight' => 0,
        'machine_name' => 'title_webform___first_name',
        'page_num' => 1,
      ),
      'title_webform___lastname' => array(
        'form_key' => 'name',
        'name' => 'First name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 1,
        'machine_name' => 'title_webform___lastname',
        'page_num' => 1,
      ),
      'meter_registration_warranty__started_tharepy_date' => array(
        'form_key' => 'started_tharepy_date',
        'name' => 'Started tharepy date',
        'type' => 'date',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'timezone' => 'user',
          'start_date' => '-2 years',
          'end_date' => '+2 years',
          'year_textfield' => 0,
          'datepicker' => 1,
          'description' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 2,
        'machine_name' => 'meter_registration_warranty__started_tharepy_date',
        'page_num' => 1,
      ),
      'meter_registration_warranty__date_meter_acquired' => array(
        'form_key' => 'date_meter_acquired',
        'name' => 'Date meter acquired',
        'type' => 'date',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'timezone' => 'user',
          'start_date' => '-2 years',
          'end_date' => '+2 years',
          'year_textfield' => 0,
          'datepicker' => 1,
          'description' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 3,
        'machine_name' => 'meter_registration_warranty__date_meter_acquired',
        'page_num' => 1,
      ),
      'meter_registration_warranty__last_name' => array(
        'form_key' => 'last_name',
        'name' => 'Last name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 4,
        'machine_name' => 'meter_registration_warranty__last_name',
        'page_num' => 1,
      ),
      'meter_registration_warranty__address' => array(
        'form_key' => 'address',
        'name' => 'Address',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 5,
        'machine_name' => 'meter_registration_warranty__address',
        'page_num' => 1,
      ),
      'meter_registration_warranty__city' => array(
        'form_key' => 'city',
        'name' => 'City',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 6,
        'machine_name' => 'meter_registration_warranty__city',
        'page_num' => 1,
      ),
      'meter_registration_warranty__email' => array(
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 7,
        'machine_name' => 'meter_registration_warranty__email',
        'page_num' => 1,
      ),
      'meter_registration_warranty__tell_us_more_about_yourself' => array(
        'form_key' => 'tell_us_more_about_yourself',
        'name' => 'Tell us more about yourself',
        'type' => 'markup',
        'value' => '',
        'extra' => array(
          'format' => 'filtered_html',
          'private' => 0,
        ),
        'required' => 0,
        'weight' => 8,
        'machine_name' => 'meter_registration_warranty__tell_us_more_about_yourself',
        'page_num' => 1,
      ),
      'meter_registration_warranty__gender' => array(
        'form_key' => 'gender',
        'name' => 'Gender',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'Female | Female
Male | Male',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 9,
        'machine_name' => 'meter_registration_warranty__gender',
        'page_num' => 1,
      ),
      'meter_registration_warranty__when_were_you_diagnosed_with_dia' => array(
        'form_key' => 'when_were_you_diagnosed_with_diabetes_mm_yyyy',
        'name' => 'When were you diagnosed with diabetes? (MM/YYYY)',
        'type' => 'date',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'timezone' => 'user',
          'start_date' => '-2 years',
          'end_date' => '+2 years',
          'year_textfield' => 0,
          'datepicker' => 1,
          'description' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 10,
        'machine_name' => 'meter_registration_warranty__when_were_you_diagnosed_with_dia',
        'page_num' => 1,
      ),
      'meter_registration_warranty__what_medication_do_you_take_for_' => array(
        'form_key' => 'what_medication_do_you_take_for_diabetes_check_all_that_apply',
        'name' => 'What medication do you take for diabetes? (Check all that apply.)',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'Insulin Pump | Insulin Pump
Insulin Injection | Insulin Injection
Insulin And Oral Medication | Insulin And Oral Medication
Oral Medication And Diet | Oral Medication And Diet
Oral Medication | Oral Medication
Diet | Diet
Other Diabetes Medication | Other Diabetes Medication
None | None',
          'multiple' => 1,
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 11,
        'machine_name' => 'meter_registration_warranty__what_medication_do_you_take_for_',
        'page_num' => 1,
      ),
      'meter_registration_warranty__how_often_do_you_test_your_blood' => array(
        'form_key' => 'how_often_do_you_test_your_blood_sugar',
        'name' => 'How often do you test your blood sugar?',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => '10 | more than 5 times/day
5 | 5 times/day
4 | 4 times/day
3 | 3 times/day
2 | 2 times/day
1 | 1 once a day',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 12,
        'machine_name' => 'meter_registration_warranty__how_often_do_you_test_your_blood',
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'webform_features_author' => 'admin',
  'webform_features_revision_author' => 'admin',
);
  $webforms['webform_'] = array(
  'title' => 'webform2',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '230eb450-4b44-447a-8136-b4a83ad226aa',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '61550028-59fd-4429-ab6c-d83e6202d5a5',
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'next_serial' => 1,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'machine_name' => 'webform_',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      'title_webform___first_name' => array(
        'form_key' => 'first_name',
        'name' => 'First name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 0,
        'machine_name' => 'title_webform___first_name',
        'page_num' => 1,
      ),
      'title_webform___lastname' => array(
        'form_key' => 'last_name',
        'name' => 'Last name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 1,
        'machine_name' => 'title_webform___lastname',
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'machine_name' => FALSE,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'webform_features_author' => 'admin',
  'webform_features_revision_author' => 'admin',
);
return $webforms;
}