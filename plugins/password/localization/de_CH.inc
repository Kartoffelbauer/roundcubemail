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

$labels['changepasswd']  = 'Passwort ändern';
$labels['curpasswd']  = 'Aktuelles Passwort';
$labels['newpasswd']  = 'Neues Passwort';
$labels['confpasswd']  = 'Passwort Wiederholung';
$messages['nopassword'] = 'Bitte geben Sie ein neues Passwort ein';
$messages['nocurpassword'] = 'Bitte geben Sie Ihr aktuelles Passwort an';
$messages['passwordincorrect'] = 'Das aktuelle Passwort ist nicht korrekt';
$messages['passwordinconsistency'] = 'Das neue Passwort und dessen Wiederholung stimmen nicht überein';
$messages['crypterror'] = 'Neues Passwort nicht gespeichert: Verschlüsselungsfunktion fehlt';
$messages['connecterror'] = 'Neues Passwort nicht gespeichert: Verbindungsfehler';
$messages['internalerror'] = 'Neues Passwort nicht gespeichert';
$messages['passwordshort'] = 'Passwort muss mindestens $length Zeichen lang sein.';
$messages['passwordweak'] = 'Passwort muss mindestens eine Zahl und ein Sonderzeichen enthalten.';
$messages['passwordtooweak'] = 'Das Passwort ist zu schwach.';
$messages['passwordnoseq'] = 'Das Passwort sollte keine Sequenz wie 123456 oder QWERTZ sein.';
$messages['passwordnocommon'] = 'Passwort sollte kein allgemeines Wort oder Name sein.';
$messages['passwordforbidden'] = 'Passwort enthält unzulässige Zeichen.';
$messages['firstloginchange'] = 'Dies ist Ihre erste Anmeldung. Bitte ändern Sie Ihr Passwort.';
$messages['disablednotice'] = 'Das System befindet sich derzeit im Wartungszustand und eine Passwortänderung ist im Moment nicht möglich. Der normale Betrieb sollte bald wieder hergestellt sein. Wir bitten um Entschuldigung für die Unannehmlichkeiten.';
$messages['passwinhistory'] = 'Dieses Passwort wurde bereits einmal verwendet.';
$messages['samepasswd'] = 'Das neue Passwort muss sich von dem Alten unterscheiden.';
$messages['passwdexpirewarning'] = 'Achtung! Ihr Passwort läuft am $expirationdatetime ab. Ändern Sie es rechtzeitig.';
$messages['passwdexpired'] = 'Ihr Passwort ist abgelaufen, bitte ändern Sie es jetzt!';
$messages['passwdconstraintviolation'] = 'Passwortrichtlinien nicht erfüllt. Das Passwort ist wahrscheinlich zu schwach.';
$messages['pwned_mustnotbedisclosed'] = 'Das Passwort darf nicht <a href="$href" target="_blank">allgemein bekannt sein</a>.';
$messages['pwned_isdisclosed'] = 'Dieses Passwort ist allgemein bekannt.';
$messages['pwned_fetcherror'] = 'Die Überprüfung der Passwortstärke ist fehlgeschlagen.';
$messages['gandi_strengthrules'] = 'Das Passwort muss zwischen $minlen und $maxlen Zeichen und mindestens $uppercase Großbuchstaben, $nums Zahl(en) und $specialchars Sonderzeichen enthalten.';
