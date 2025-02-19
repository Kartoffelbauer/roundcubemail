<?php

/*
 +-----------------------------------------------------------------------+
 | Localization file of the Roundcube Webmail Password plugin            |
 |                                                                       |
 | Copyright (C) The Roundcube Dev Team                                  |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/plugin-password/
*/

$labels['curpasswd']  = 'Current Password:';
$labels['newpasswd']  = 'New Password:';
$labels['confpasswd']  = 'Confirm New Password:';
$messages['nopassword'] = 'Please input new password.';
$messages['nocurpassword'] = 'Please input current password.';
$messages['passwordincorrect'] = 'Current password incorrect.';
$messages['passwordinconsistency'] = 'Passwords do not match, please try again.';
$messages['crypterror'] = 'Could not save new password. Encryption function missing.';
$messages['connecterror'] = 'Could not save new password. Connection error.';
$messages['internalerror'] = 'Could not save new password.';
$messages['passwordshort'] = 'Password must be at least $length characters long.';
$messages['passwordweak'] = 'Password must include at least one number and one punctuation character.';
$messages['passwordforbidden'] = 'Password contains forbidden characters.';
$messages['gandi_strengthrules'] = 'Password must contain between $minlen and $maxlen characters and contain at least $uppercase upper-case letter(s), $nums number(s), and $specialchars special character(s).';
