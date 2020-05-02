/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Spanish
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#define DISPLAY_CHARSET_ISO10646_1

namespace Language_es {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t    CHARSIZE                            = 2;
  PROGMEM Language_Str LANGUAGE                            = _UxGT("Andalûh (EPA)");

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" lîtta");
  PROGMEM Language_Str MSG_YES                             = _UxGT("ÇI");
  PROGMEM Language_Str MSG_NO                              = _UxGT("NO");
  PROGMEM Language_Str MSG_BACK                            = _UxGT("Atrâh");
  PROGMEM Language_Str MSG_MEDIA_ABORTING                  = _UxGT("Cançelando...");
  PROGMEM Language_Str MSG_MEDIA_INSERTED                  = _UxGT("SD/USB inçertao");
  PROGMEM Language_Str MSG_MEDIA_REMOVED                   = _UxGT("SD/USB retirao");
  PROGMEM Language_Str MSG_MEDIA_RELEASED                  = _UxGT("SD/USB lançao");
  PROGMEM Language_Str MSG_MEDIA_WAITING                   = _UxGT("Êpperando ar SD/USB");
  PROGMEM Language_Str MSG_MEDIA_READ_ERROR                = _UxGT("Errôh lêttura SD/USB");
  PROGMEM Language_Str MSG_MEDIA_USB_REMOVED               = _UxGT("Dîpp. USB retirao");
  PROGMEM Language_Str MSG_MEDIA_USB_FAILED                = _UxGT("Iniçio USB fayío");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    = _UxGT("Endstops"); // Max length 8 characters
  PROGMEM Language_Str MSG_LCD_SOFT_ENDSTOPS               = _UxGT("Soft Endstops");
  PROGMEM Language_Str MSG_MAIN                            = _UxGT("Menú prinçipâh");
  PROGMEM Language_Str MSG_ADVANCED_SETTINGS               = _UxGT("Ahûttê abançáô");
  PROGMEM Language_Str MSG_CONFIGURATION                   = _UxGT("Configuraçión");
  PROGMEM Language_Str MSG_AUTOSTART                       = _UxGT("Iniçio automático");
  PROGMEM Language_Str MSG_DISABLE_STEPPERS                = _UxGT("Apagâh motorê");
  PROGMEM Language_Str MSG_DEBUG_MENU                      = _UxGT("Menú depuraçión");
  PROGMEM Language_Str MSG_PROGRESS_BAR_TEST               = _UxGT("Prob. barra progreço");
  PROGMEM Language_Str MSG_AUTO_HOME                       = _UxGT("Yebâh al orihen");
  PROGMEM Language_Str MSG_AUTO_HOME_X                     = _UxGT("Orihen X");
  PROGMEM Language_Str MSG_AUTO_HOME_Y                     = _UxGT("Orihen Y");
  PROGMEM Language_Str MSG_AUTO_HOME_Z                     = _UxGT("Orihen Z");
  PROGMEM Language_Str MSG_AUTO_Z_ALIGN                    = _UxGT("Auto alineao Z");
  PROGMEM Language_Str MSG_LEVEL_BED_HOMING                = _UxGT("Orihen XYZ");
  PROGMEM Language_Str MSG_LEVEL_BED_WAITING               = _UxGT("Purçâh pa començâh");
  PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            = _UxGT("Çigiente punto");
  PROGMEM Language_Str MSG_LEVEL_BED_DONE                  = _UxGT("¡Nibelaçión lîtta!");
  PROGMEM Language_Str MSG_Z_FADE_HEIGHT                   = _UxGT("Compençaçión Artura");
  PROGMEM Language_Str MSG_SET_HOME_OFFSETS                = _UxGT("Ahûttâh dêffaçê");
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            = _UxGT("Dêffaçe aplicá");
  PROGMEM Language_Str MSG_SET_ORIGIN                      = _UxGT("Êttableçêh orihen");
  PROGMEM Language_Str MSG_PREHEAT_1                       = _UxGT("Precalentâh ") PREHEAT_1_LABEL;
  PROGMEM Language_Str MSG_PREHEAT_1_H                     = _UxGT("Precalentâh ") PREHEAT_1_LABEL " ~";
  PROGMEM Language_Str MSG_PREHEAT_1_END                   = _UxGT("Precalentâh ") PREHEAT_1_LABEL _UxGT(" Fin");
  PROGMEM Language_Str MSG_PREHEAT_1_END_E                 = _UxGT("Precalentâh ") PREHEAT_1_LABEL _UxGT(" Fin ~");
  PROGMEM Language_Str MSG_PREHEAT_1_ALL                   = _UxGT("Precalentâh ") PREHEAT_1_LABEL _UxGT(" Tó");
  PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY               = _UxGT("Precalentâh ") PREHEAT_1_LABEL _UxGT(" Cama");
  PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS              = _UxGT("Precalentâh ") PREHEAT_1_LABEL _UxGT(" Ahûtte");
  PROGMEM Language_Str MSG_PREHEAT_2                       = _UxGT("Precalentâh ") PREHEAT_2_LABEL;
  PROGMEM Language_Str MSG_PREHEAT_2_H                     = _UxGT("Precalentâh ") PREHEAT_2_LABEL " ~";
  PROGMEM Language_Str MSG_PREHEAT_2_END                   = _UxGT("Precalentâh ") PREHEAT_2_LABEL _UxGT(" Fin");
  PROGMEM Language_Str MSG_PREHEAT_2_END_E                 = _UxGT("Precalentâh ") PREHEAT_2_LABEL _UxGT(" Fin ~");
  PROGMEM Language_Str MSG_PREHEAT_2_ALL                   = _UxGT("Precalentâh ") PREHEAT_2_LABEL _UxGT(" Tó");
  PROGMEM Language_Str MSG_PREHEAT_2_BEDONLY               = _UxGT("Precalentâh ") PREHEAT_2_LABEL _UxGT(" Cama");
  PROGMEM Language_Str MSG_PREHEAT_2_SETTINGS              = _UxGT("Precalentâh ") PREHEAT_2_LABEL _UxGT(" Ahûtte");
  PROGMEM Language_Str MSG_PREHEAT_CUSTOM                  = _UxGT("Precalen. Perçonali.");
  PROGMEM Language_Str MSG_COOLDOWN                        = _UxGT("Enfriâh");
  PROGMEM Language_Str MSG_LASER_MENU                      = _UxGT("Contrôh Láçê");
  PROGMEM Language_Str MSG_LASER_OFF                       = _UxGT("Láçê Apagao");
  PROGMEM Language_Str MSG_LASER_ON                        = _UxGT("Láçê Ençendío");
  PROGMEM Language_Str MSG_LASER_POWER                     = _UxGT("Potençia Láçê");
  PROGMEM Language_Str MSG_SPINDLE_MENU                    = _UxGT("Contrôh Mandrino");
  PROGMEM Language_Str MSG_SPINDLE_OFF                     = _UxGT("Mandrino Apagao");
  PROGMEM Language_Str MSG_SPINDLE_ON                      = _UxGT("Mandrino Ençendío");
  PROGMEM Language_Str MSG_SPINDLE_POWER                   = _UxGT("Potençia Mandrino");
  PROGMEM Language_Str MSG_SPINDLE_REVERSE                 = _UxGT("Imbertîh hiro");
  PROGMEM Language_Str MSG_SWITCH_PS_ON                    = _UxGT("Ençendêh Fuente");
  PROGMEM Language_Str MSG_SWITCH_PS_OFF                   = _UxGT("Apagâh Fuente");
  PROGMEM Language_Str MSG_EXTRUDE                         = _UxGT("Êttruîh");
  PROGMEM Language_Str MSG_RETRACT                         = _UxGT("Retraêh");
  PROGMEM Language_Str MSG_MOVE_AXIS                       = _UxGT("Mobêh ehê");
  PROGMEM Language_Str MSG_BED_LEVELING                    = _UxGT("Nibelando Cama");
  PROGMEM Language_Str MSG_LEVEL_BED                       = _UxGT("Nibelâh Cama");
  PROGMEM Language_Str MSG_LEVEL_CORNERS                   = _UxGT("Nibelâh Êqquinâ");
  PROGMEM Language_Str MSG_NEXT_CORNER                     = _UxGT("Çigente Êqquina");
  PROGMEM Language_Str MSG_MESH_EDITOR                     = _UxGT("Editôh Mayao");
  PROGMEM Language_Str MSG_EDIT_MESH                       = _UxGT("Editâh Mayao");
  PROGMEM Language_Str MSG_EDITING_STOPPED                 = _UxGT("Ed. Mayao pará");
  PROGMEM Language_Str MSG_PROBING_MESH                    = _UxGT("Çondeâh Punto");
  PROGMEM Language_Str MSG_MESH_X                          = _UxGT("Índice X");
  PROGMEM Language_Str MSG_MESH_Y                          = _UxGT("Índiçe Y");
  PROGMEM Language_Str MSG_MESH_EDIT_Z                     = _UxGT("Balôh Z");
  PROGMEM Language_Str MSG_USER_MENU                       = _UxGT("Comandô Perçonaliç.");
  PROGMEM Language_Str MSG_M48_TEST                        = _UxGT("M48 Probâh Çonda");
  PROGMEM Language_Str MSG_M48_POINT                       = _UxGT("M48 Punto");
  PROGMEM Language_Str MSG_M48_DEVIATION                   = _UxGT("Dêbbiaçión");
  PROGMEM Language_Str MSG_IDEX_MENU                       = _UxGT("Modo IDEX");
  PROGMEM Language_Str MSG_OFFSETS_MENU                    = _UxGT("Dêffaçe Boquiyâ");
  PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              = _UxGT("Auto-Aparcao");
  PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             = _UxGT("Duplicâh");
  PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         = _UxGT("Copia Reflehá");
  PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             = _UxGT("Contrôh Totâh");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_X                 = _UxGT("2ª Boquiya X");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Y                 = _UxGT("2ª Boquiya Y");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Z                 = _UxGT("2ª Boquiya Z");
  PROGMEM Language_Str MSG_UBL_DOING_G29                   = _UxGT("Açêh G29");
  PROGMEM Language_Str MSG_UBL_TOOLS                       = _UxGT("Erramientâ UBL");
  PROGMEM Language_Str MSG_UBL_LEVEL_BED                   = _UxGT("Nibêh.Cama.Uni.(UBL)");
  PROGMEM Language_Str MSG_LCD_TILTING_MESH                = _UxGT("Punto de inclinaçión");
  PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 = _UxGT("Creâh Mayao man.");
  PROGMEM Language_Str MSG_UBL_BC_INSERT                   = _UxGT("Colocâh cuña y Medîh");
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  = _UxGT("Medîh");
  PROGMEM Language_Str MSG_UBL_BC_REMOVE                   = _UxGT("Retirâh y Medîh Cama");
  PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              = _UxGT("Mobêh ar Çigente");
  PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               = _UxGT("Âttibâh UBL");
  PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             = _UxGT("Deçâttibâh UBL");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_BED                = _UxGT("Temp. Cama");
  PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM             = _UxGT("Bed Temp");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND             = _UxGT ("Hotend Temp");
  PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM          = _UxGT("Hotend Temp");
  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   = _UxGT("Editâh Mayao");
  PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            = _UxGT("Edit. Mayao perço.");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              = _UxGT("Ahûtte fino Mayao");
  PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH           = _UxGT("Term. ediçi. Mayao");
  PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH           = _UxGT("Creâh Mayao Perço.");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             = _UxGT("Creâh Mayao");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M1               = _UxGT("Creâh Mayao (") PREHEAT_1_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M2               = _UxGT("Creâh Mayao (") PREHEAT_2_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH             = _UxGT("Creâh Mayao Frío");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          = _UxGT("Ahûttâh art. Mayao");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          = _UxGT("Cantidá de artura");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          = _UxGT("Balidâh Mayao");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M1            = _UxGT("Balidâh Mayao (") PREHEAT_1_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M2            = _UxGT("Balidâh Mayao (") PREHEAT_2_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH        = _UxGT("Bali. Mayao perço.");
  PROGMEM Language_Str MSG_G26_HEATING_BED                 = _UxGT("G26 Calentando Cama");
  PROGMEM Language_Str MSG_G26_HEATING_NOZZLE              = _UxGT("G26 Calent. Boquiya");
  PROGMEM Language_Str MSG_G26_MANUAL_PRIME                = _UxGT("Imprimao manuâh...");
  PROGMEM Language_Str MSG_G26_FIXED_LENGTH                = _UxGT("Impri. longit. fiha");
  PROGMEM Language_Str MSG_G26_PRIME_DONE                  = _UxGT("Imprimaçión Lîtta");
  PROGMEM Language_Str MSG_G26_CANCELED                    = _UxGT("G26 Cançelao");
  PROGMEM Language_Str MSG_G26_LEAVING                     = _UxGT("Dehando G26");
  PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               = _UxGT("Contin. Mayao cama");
  PROGMEM Language_Str MSG_UBL_MESH_LEVELING               = _UxGT("Nibelando Mayao");
  PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING        = _UxGT("Nibelando 3Puntô");
  PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          = _UxGT("Nibêh. Mayao cuad.");
  PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  = _UxGT("Nibêh de Mayao");
  PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 = _UxGT("Puntô Lateralê");
  PROGMEM Language_Str MSG_UBL_MAP_TYPE                    = _UxGT("Tipo de mapa ");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  = _UxGT("Çalida Mapa mayao");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             = _UxGT("Çalida pa el host");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              = _UxGT("Çalida pa CSV");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP           = _UxGT("Off Printer Backup");
  PROGMEM Language_Str MSG_UBL_INFO_UBL                    = _UxGT("Çalida Info. UBL");
  PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               = _UxGT("Cantidá de reyeno");
  PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               = _UxGT("Reyeno manuâh");
  PROGMEM Language_Str MSG_UBL_SMART_FILLIN                = _UxGT("Reyeno intelihente");
  PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 = _UxGT("Mayao de reyeno");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              = _UxGT("Imbalidâh tó");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          = _UxGT("Imbalidâh prôççimô");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               = _UxGT("Ahûttâh Fino Tó");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           = _UxGT("Ahûttâh Fino prôççi.");
  PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           = _UxGT("Armaçen de Mayao");
  PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                = _UxGT("Guecô de memoria");
  PROGMEM Language_Str MSG_UBL_LOAD_MESH                   = _UxGT("Cargâh Mayao cama");
  PROGMEM Language_Str MSG_UBL_SAVE_MESH                   = _UxGT("Guardâh Mayao cama");
  PROGMEM Language_Str MSG_MESH_LOADED                     = _UxGT("M117 Mayao %i Cargao");
  PROGMEM Language_Str MSG_MESH_SAVED                      = _UxGT("M117 Mayao %i Guardao");
  PROGMEM Language_Str MSG_UBL_NO_STORAGE                  = _UxGT("Çin guardâh");
  PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  = _UxGT("Errôh: Guardâh UBL");
  PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               = _UxGT("Errôh: Rêttaurâh UBL");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET                    = _UxGT("Dêffaçe de Z: ");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            = _UxGT("Dêffaçe de Z Parao");
  PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           = _UxGT("UBL Paço a Paço");
  PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           = _UxGT("1.Creâh Mayao Frío");
  PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              = _UxGT("2.Reyeno intelihente");
  PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        = _UxGT("3.Validâh Mayao");
  PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             = _UxGT("4.Ahûttâh Fino Tó");
  PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        = _UxGT("5.Validâh Mayao");
  PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             = _UxGT("6.Ahûttâh Fino Tó");
  PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 = _UxGT("7.Guardâh Mayao cama");

  PROGMEM Language_Str MSG_LED_CONTROL                     = _UxGT("Contrôh LED");
  PROGMEM Language_Str MSG_LEDS                            = _UxGT("Luçê");
  PROGMEM Language_Str MSG_LED_PRESETS                     = _UxGT("Lûh predefinida");
  PROGMEM Language_Str MSG_SET_LEDS_RED                    = _UxGT("Roho");
  PROGMEM Language_Str MSG_SET_LEDS_ORANGE                 = _UxGT("Naranha");
  PROGMEM Language_Str MSG_SET_LEDS_YELLOW                 = _UxGT("Amariyo");
  PROGMEM Language_Str MSG_SET_LEDS_GREEN                  = _UxGT("Berde");
  PROGMEM Language_Str MSG_SET_LEDS_BLUE                   = _UxGT("Açûh");
  PROGMEM Language_Str MSG_SET_LEDS_INDIGO                 = _UxGT("Índigo");
  PROGMEM Language_Str MSG_SET_LEDS_VIOLET                 = _UxGT("Bioleta");
  PROGMEM Language_Str MSG_SET_LEDS_WHITE                  = _UxGT("Blanco");
  PROGMEM Language_Str MSG_SET_LEDS_DEFAULT                = _UxGT("Por defêtto");
  PROGMEM Language_Str MSG_CUSTOM_LEDS                     = _UxGT("Luçê perçonaliçâh");
  PROGMEM Language_Str MSG_INTENSITY_R                     = _UxGT("Intençidá Roho");
  PROGMEM Language_Str MSG_INTENSITY_G                     = _UxGT("Intençidá Berde");
  PROGMEM Language_Str MSG_INTENSITY_B                     = _UxGT("Intençidá Açûh");
  PROGMEM Language_Str MSG_INTENSITY_W                     = _UxGT("Intençidá Blanco");
  PROGMEM Language_Str MSG_LED_BRIGHTNESS                  = _UxGT("Briyo");

  PROGMEM Language_Str MSG_MOVING                          = _UxGT("Mobiendo...");
  PROGMEM Language_Str MSG_FREE_XY                         = _UxGT("Libre XY");
  PROGMEM Language_Str MSG_MOVE_X                          = _UxGT("Mover X");
  PROGMEM Language_Str MSG_MOVE_Y                          = _UxGT("Mobêh Y");
  PROGMEM Language_Str MSG_MOVE_Z                          = _UxGT("Mobêh Z");
  PROGMEM Language_Str MSG_MOVE_E                          = _UxGT("Êttruçôh");
  PROGMEM Language_Str MSG_MOVE_EN                         = _UxGT("Êttruçôh *");
  PROGMEM Language_Str MSG_HOTEND_TOO_COLD                 = _UxGT("Hotend mu frio");
  PROGMEM Language_Str MSG_MOVE_Z_DIST                     = _UxGT("Mobêh %smm");
  PROGMEM Language_Str MSG_MOVE_01MM                       = _UxGT("Mobêh 0.1mm");
  PROGMEM Language_Str MSG_MOVE_1MM                        = _UxGT("Mobêh 1mm");
  PROGMEM Language_Str MSG_MOVE_10MM                       = _UxGT("Mobêh 10mm");
  PROGMEM Language_Str MSG_SPEED                           = _UxGT("Beloçidá");
  PROGMEM Language_Str MSG_BED_Z                           = _UxGT("Cama Z");
  PROGMEM Language_Str MSG_NOZZLE                          = _UxGT("Boquiya");
  PROGMEM Language_Str MSG_NOZZLE_N                        = _UxGT("Boquiya ~");
  PROGMEM Language_Str MSG_BED                             = _UxGT("Cama");
  PROGMEM Language_Str MSG_CHAMBER                         = _UxGT("Reçinto");
  PROGMEM Language_Str MSG_FAN_SPEED                       = _UxGT("Bentiladôh");
  PROGMEM Language_Str MSG_FAN_SPEED_N                     = _UxGT("Bentiladôh ~");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED                 = _UxGT("Bel. Êtt. bentiladôh");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED_N               = _UxGT("Bel. Êtt. bentiladôh ~");
  PROGMEM Language_Str MSG_FLOW                            = _UxGT("Fluho");
  PROGMEM Language_Str MSG_FLOW_N                          = _UxGT("Fluho ~");
  PROGMEM Language_Str MSG_CONTROL                         = _UxGT("Contrôh");
  PROGMEM Language_Str MSG_MIN                             = " " LCD_STR_THERMOMETER _UxGT(" Min");
  PROGMEM Language_Str MSG_MAX                             = " " LCD_STR_THERMOMETER _UxGT(" Max");
  PROGMEM Language_Str MSG_FACTOR                          = " " LCD_STR_THERMOMETER _UxGT(" Fact");
  PROGMEM Language_Str MSG_AUTOTEMP                        = _UxGT("Temperatura Auto.");
  PROGMEM Language_Str MSG_LCD_ON                          = _UxGT("Ençendêh");
  PROGMEM Language_Str MSG_LCD_OFF                         = _UxGT("Apagâh");
  PROGMEM Language_Str MSG_SELECT                          = _UxGT("Çelêççionâh");
  PROGMEM Language_Str MSG_SELECT_E                        = _UxGT("Çelêççionâh *");
  PROGMEM Language_Str MSG_ACC                             = _UxGT("Açeleraçión");
  PROGMEM Language_Str MSG_VELOCITY                        = _UxGT("Beloçidá");
  PROGMEM Language_Str MSG_VTRAV_MIN                       = _UxGT("Bel. biahe min");
  PROGMEM Language_Str MSG_ACCELERATION                    = _UxGT("Aççel");
  PROGMEM Language_Str MSG_AMAX_A                          = _UxGT("Açêh. mâh") LCD_STR_A;
  PROGMEM Language_Str MSG_AMAX_B                          = _UxGT("Açêh. mâh") LCD_STR_B;
  PROGMEM Language_Str MSG_AMAX_C                          = _UxGT("Açêh. mâh") LCD_STR_C;
  PROGMEM Language_Str MSG_AMAX_E                          = _UxGT("Açêh. mâh") LCD_STR_E;
  PROGMEM Language_Str MSG_AMAX_EN                         = _UxGT("Açêh. mâh *");
  PROGMEM Language_Str MSG_A_RETRACT                       = _UxGT("Açêh. retrâh.");
  PROGMEM Language_Str MSG_A_TRAVEL                        = _UxGT("Açêh. Biahe");
  PROGMEM Language_Str MSG_STEPS_PER_MM                    = _UxGT("Paçô/mm");
  PROGMEM Language_Str MSG_A_STEPS                         = LCD_STR_A _UxGT(" paçô/mm");
  PROGMEM Language_Str MSG_B_STEPS                         = LCD_STR_B _UxGT(" paçô/mm");
  PROGMEM Language_Str MSG_C_STEPS                         = LCD_STR_C _UxGT(" paçô/mm");
  PROGMEM Language_Str MSG_E_STEPS                         = _UxGT("E paçô/mm");
  PROGMEM Language_Str MSG_EN_STEPS                        = _UxGT("* paçô/mm");
  PROGMEM Language_Str MSG_TEMPERATURE                     = _UxGT("Temperatura");
  PROGMEM Language_Str MSG_MOTION                          = _UxGT("Mobimiento");
  PROGMEM Language_Str MSG_FILAMENT                        = _UxGT("Filamento");
  PROGMEM Language_Str MSG_VOLUMETRIC_ENABLED              = _UxGT("E en mm³");
  PROGMEM Language_Str MSG_FILAMENT_DIAM                   = _UxGT("Fil. Dia.");
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E                 = _UxGT("Fil. Dia. *");
  PROGMEM Language_Str MSG_FILAMENT_UNLOAD                 = _UxGT("Dêccarga mm");
  PROGMEM Language_Str MSG_FILAMENT_LOAD                   = _UxGT("Carga mm");
  PROGMEM Language_Str MSG_ADVANCE_K                       = _UxGT("Abançe K");
  PROGMEM Language_Str MSG_ADVANCE_K_E                     = _UxGT("Abançe K *");
  PROGMEM Language_Str MSG_CONTRAST                        = _UxGT("Contrâtte LCD");
  PROGMEM Language_Str MSG_STORE_EEPROM                    = _UxGT("Guardâh EEPROM");
  PROGMEM Language_Str MSG_LOAD_EEPROM                     = _UxGT("Cargâh EEPROM");
  PROGMEM Language_Str MSG_RESTORE_DEFAULTS                = _UxGT("Rêtt. fábrica");
  PROGMEM Language_Str MSG_INIT_EEPROM                     = _UxGT("Iniçialiçâh EEPROM");
  PROGMEM Language_Str MSG_MEDIA_UPDATE                    = _UxGT("Âttualiçâh SD/USB");
  PROGMEM Language_Str MSG_RESET_PRINTER                   = _UxGT("Reçeteâh Impreçora");
  PROGMEM Language_Str MSG_REFRESH                         = LCD_STR_REFRESH  _UxGT("Recargâh");
  PROGMEM Language_Str MSG_INFO_SCREEN                     = _UxGT("Pantaya de Inf.");
  PROGMEM Language_Str MSG_PREPARE                         = _UxGT("Preparâh");
  PROGMEM Language_Str MSG_TUNE                            = _UxGT("Ahûttâh");
  PROGMEM Language_Str MSG_START_PRINT                     = _UxGT("Iniçiâh impreçión");
  PROGMEM Language_Str MSG_BUTTON_NEXT                     = _UxGT("Çiginte");
  PROGMEM Language_Str MSG_BUTTON_INIT                     = _UxGT("Iniçiâh");
  PROGMEM Language_Str MSG_BUTTON_STOP                     = _UxGT("Parâh");
  PROGMEM Language_Str MSG_BUTTON_PRINT                    = _UxGT("Imprimîh");
  PROGMEM Language_Str MSG_BUTTON_RESET                    = _UxGT("Reiniçiâh");
  PROGMEM Language_Str MSG_BUTTON_CANCEL                   = _UxGT("Cançelâh");
  PROGMEM Language_Str MSG_BUTTON_DONE                     = _UxGT("Lîtto");
  PROGMEM Language_Str MSG_PAUSE_PRINT                     = _UxGT("Pauçâh impreçión");
  PROGMEM Language_Str MSG_RESUME_PRINT                    = _UxGT("Reanudâh impreçión");
  PROGMEM Language_Str MSG_STOP_PRINT                      = _UxGT("Detenêh impreçión");
  PROGMEM Language_Str MSG_OUTAGE_RECOVERY                 = _UxGT("Recupêh. por interr.");
  PROGMEM Language_Str MSG_MEDIA_MENU                      = _UxGT("Imprim. dêdde SD/USB");
  PROGMEM Language_Str MSG_NO_MEDIA                        = _UxGT("SD/USB no preçente");
  PROGMEM Language_Str MSG_DWELL                           = _UxGT("Repoço...");
  PROGMEM Language_Str MSG_USERWAIT                        = _UxGT("Purçâh pa Reanudâh");
  PROGMEM Language_Str MSG_PRINT_PAUSED                    = _UxGT("Impreçión Pauçá");
  PROGMEM Language_Str MSG_PRINTING                        = _UxGT("Imprimiendo...");
  PROGMEM Language_Str MSG_PRINT_ABORTED                   = _UxGT("Impreçión cançelá");
  PROGMEM Language_Str MSG_NO_MOVE                         = _UxGT("Çin mobimiento");
  PROGMEM Language_Str MSG_KILLED                          = _UxGT("MUERTA");
  PROGMEM Language_Str MSG_STOPPED                         = _UxGT("DETENIDA");
  PROGMEM Language_Str MSG_CONTROL_RETRACT                 = _UxGT("Retraêh mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP            = _UxGT("Interc. Retraêh mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACTF                = _UxGT("Retraer  V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_ZHOP            = _UxGT("Lebantâh mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER         = _UxGT("DesRet mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP    = _UxGT("Interc. DesRet mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVERF        = _UxGT("DesRet V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAPF   = _UxGT("S UnRet V");
  PROGMEM Language_Str MSG_AUTORETRACT                     = _UxGT("Retrâççión Auto.");
  PROGMEM Language_Str MSG_FILAMENT_SWAP_LENGTH            = _UxGT("Inter. lonhitûh");
  PROGMEM Language_Str MSG_FILAMENT_PURGE_LENGTH           = _UxGT("Purgâh lonhitûh");
  PROGMEM Language_Str MSG_TOOL_CHANGE                     = _UxGT("Cambiâh Erramienta");
  PROGMEM Language_Str MSG_TOOL_CHANGE_ZLIFT               = _UxGT("Aumentâh Z");
  PROGMEM Language_Str MSG_SINGLENOZZLE_PRIME_SPD          = _UxGT("Prime Speed");
  PROGMEM Language_Str MSG_SINGLENOZZLE_RETRACT_SPD        = _UxGT("Bel. de retrâççión");
  PROGMEM Language_Str MSG_NOZZLE_STANDBY                  = _UxGT("Colocâh boquiya");
  PROGMEM Language_Str MSG_FILAMENTCHANGE                  = _UxGT("Cambiâh filamento");
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E                = _UxGT("Cambiâh filamento *");
  PROGMEM Language_Str MSG_FILAMENTLOAD                    = _UxGT("Cargâh filamento");
  PROGMEM Language_Str MSG_FILAMENTLOAD_E                  = _UxGT("Cargâh filamento *");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD                  = _UxGT("Dêccargâh filamento");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E                = _UxGT("Dêccargâh fil. *");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_ALL              = _UxGT("Dêccargâh tó");
  PROGMEM Language_Str MSG_ATTACH_MEDIA                    = _UxGT("Iniçiâh SD/USB");
  PROGMEM Language_Str MSG_CHANGE_MEDIA                    = _UxGT("Cambiâh SD/USB");
  PROGMEM Language_Str MSG_RELEASE_MEDIA                   = _UxGT("Lançâh SD/USB");
  PROGMEM Language_Str MSG_ZPROBE_OUT                      = _UxGT("Çonda Z fuera cama");
  PROGMEM Language_Str MSG_SKEW_FACTOR                     = _UxGT("Factor de dêbbiaçión");
  PROGMEM Language_Str MSG_BLTOUCH                         = _UxGT("BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_SELFTEST                = _UxGT("Cmd: Auto-Prueba");
  PROGMEM Language_Str MSG_BLTOUCH_RESET                   = _UxGT("Cmd: Reiniçiâh");
  PROGMEM Language_Str MSG_BLTOUCH_STOW                    = _UxGT("Cmd: Çubîh pîttón");
  PROGMEM Language_Str MSG_BLTOUCH_DEPLOY                  = _UxGT("Cmd: Bahâh pîttón");
  PROGMEM Language_Str MSG_BLTOUCH_SW_MODE                 = _UxGT("Cmd: Modo Software");
  PROGMEM Language_Str MSG_BLTOUCH_5V_MODE                 = _UxGT("Cmd: Modo 5V");
  PROGMEM Language_Str MSG_BLTOUCH_OD_MODE                 = _UxGT("Cmd: Modo OD");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE              = _UxGT("Cmd: Modo armaçenâh");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_5V           = _UxGT("Ponêh BLTouch a 5V");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_OD           = _UxGT("Ponêh BLTouch a OD");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_ECHO               = _UxGT("Informe de drenahe");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_CHANGE             = _UxGT("PELIGRO: ¡Una mala configuraçión puede produçîh dañô! ¿Proçedêh iguarmente?");
  PROGMEM Language_Str MSG_TOUCHMI_PROBE                   = _UxGT("TouchMI");
  PROGMEM Language_Str MSG_TOUCHMI_INIT                    = _UxGT("Iniçiâh TouchMI");
  PROGMEM Language_Str MSG_TOUCHMI_ZTEST                   = _UxGT("Test de dêffaçe Z");
  PROGMEM Language_Str MSG_TOUCHMI_SAVE                    = _UxGT("Guardâh");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY_TOUCHMI           = _UxGT("Çubîh TouchMI");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY                   = _UxGT("Çubîh Çonda Z");
  PROGMEM Language_Str MSG_MANUAL_STOW                     = _UxGT("Bahâh Çonda Z");
  PROGMEM Language_Str MSG_HOME_FIRST                      = _UxGT("Orihen %s%s%s Primero");
  PROGMEM Language_Str MSG_ZPROBE_ZOFFSET                  = _UxGT("Dêffaçe Z");
  PROGMEM Language_Str MSG_BABYSTEP_X                      = _UxGT("Micropaço X");
  PROGMEM Language_Str MSG_BABYSTEP_Y                      = _UxGT("Micropaço Y");
  PROGMEM Language_Str MSG_BABYSTEP_Z                      = _UxGT("Micropaço Z");
  PROGMEM Language_Str MSG_BABYSTEP_TOTAL                  = _UxGT("Totâh");
  PROGMEM Language_Str MSG_ENDSTOP_ABORT                   = _UxGT("Cançelao - Endstop");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD              = _UxGT("Calent. fayío");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD_BED          = _UxGT("Calent. cama fayío");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD_CHAMBER      = _UxGT("Calent. Cám. fayío");
  PROGMEM Language_Str MSG_ERR_REDUNDANT_TEMP              = _UxGT("Err: TEMP. REDUN.");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY                 = _UxGT("FUGA TÉRMICA");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_BED             = _UxGT("FUGA TÉRMICA CAMA");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_CHAMBER         = _UxGT("FUGA TÉRMICA CAMARA");
  PROGMEM Language_Str MSG_ERR_MAXTEMP                     = _UxGT("Err:TEMP. MÁX");
  PROGMEM Language_Str MSG_ERR_MINTEMP                     = _UxGT("Err:TEMP. MIN");
  PROGMEM Language_Str MSG_ERR_MAXTEMP_BED                 = _UxGT("Err:TEMP. MÁX CAMA");
  PROGMEM Language_Str MSG_ERR_MINTEMP_BED                 = _UxGT("Err:TEMP. MIN CAMA");
  PROGMEM Language_Str MSG_ERR_MAXTEMP_CHAMBER             = _UxGT("Err:TEMP. MÁX CÁMARA");
  PROGMEM Language_Str MSG_ERR_MINTEMP_CHAMBER             = _UxGT("Err:TEMP. MIN CÁMARA");
  PROGMEM Language_Str MSG_ERR_Z_HOMING                    = _UxGT("Orihen XY Primero");
  PROGMEM Language_Str MSG_HALTED                          = _UxGT("IMPREÇORA DETENIDA");
  PROGMEM Language_Str MSG_PLEASE_RESET                    = _UxGT("Por fabôh, reiniçie");
  PROGMEM Language_Str MSG_SHORT_DAY                       = _UxGT("d"); // One character only
  PROGMEM Language_Str MSG_SHORT_HOUR                      = _UxGT("h"); // One character only
  PROGMEM Language_Str MSG_SHORT_MINUTE                    = _UxGT("m"); // One character only
  PROGMEM Language_Str MSG_HEATING                         = _UxGT("Calentando...");
  PROGMEM Language_Str MSG_COOLING                         = _UxGT("Enfriando...");
  PROGMEM Language_Str MSG_BED_HEATING                     = _UxGT("Calentando Cama...");
  PROGMEM Language_Str MSG_BED_COOLING                     = _UxGT("Enfriando Cama...");
  PROGMEM Language_Str MSG_CHAMBER_HEATING                 = _UxGT("Calentando Cámara...");
  PROGMEM Language_Str MSG_CHAMBER_COOLING                 = _UxGT("Enfriando Cámara...");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE                 = _UxGT("Calibraçión Delta");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_X               = _UxGT("Calibrar X");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Y               = _UxGT("Calibrâh Y");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Z               = _UxGT("Calibrâh Z");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_CENTER          = _UxGT("Calibrâh Çentro");
  PROGMEM Language_Str MSG_DELTA_SETTINGS                  = _UxGT("Configuraçión Delta");
  PROGMEM Language_Str MSG_DELTA_AUTO_CALIBRATE            = _UxGT("Auto Calibraçión");
  PROGMEM Language_Str MSG_DELTA_HEIGHT_CALIBRATE          = _UxGT("Êtt. Artura Delta");
  PROGMEM Language_Str MSG_DELTA_Z_OFFSET_CALIBRATE        = _UxGT("Ahûttâh Çonda Z");
  PROGMEM Language_Str MSG_DELTA_DIAG_ROD                  = _UxGT("Barra Diagonâh");
  PROGMEM Language_Str MSG_DELTA_HEIGHT                    = _UxGT("Artura");
  PROGMEM Language_Str MSG_DELTA_RADIUS                    = _UxGT("Radio");
  PROGMEM Language_Str MSG_INFO_MENU                       = _UxGT("Açerca de Impreçora");
  PROGMEM Language_Str MSG_INFO_PRINTER_MENU               = _UxGT("Info. Impreçora");
  PROGMEM Language_Str MSG_3POINT_LEVELING                 = _UxGT("Nibelando 3puntô");
  PROGMEM Language_Str MSG_LINEAR_LEVELING                 = _UxGT("Nibelando Lineâh");
  PROGMEM Language_Str MSG_BILINEAR_LEVELING               = _UxGT("Nibelando Bilineâh");
  PROGMEM Language_Str MSG_UBL_LEVELING                    = _UxGT("Nibelando UBL");
  PROGMEM Language_Str MSG_MESH_LEVELING                   = _UxGT("Nibelando en Mayao");
  PROGMEM Language_Str MSG_INFO_STATS_MENU                 = _UxGT("Êttadítticâ Imp.");
  PROGMEM Language_Str MSG_INFO_BOARD_MENU                 = _UxGT("Info. Controladôh");
  PROGMEM Language_Str MSG_INFO_THERMISTOR_MENU            = _UxGT("Termîttorê");
  PROGMEM Language_Str MSG_INFO_EXTRUDERS                  = _UxGT("Êttruçorê");
  PROGMEM Language_Str MSG_INFO_BAUDRATE                   = _UxGT("Baudiô");
  PROGMEM Language_Str MSG_INFO_PROTOCOL                   = _UxGT("Protocolo");
  PROGMEM Language_Str MSG_CASE_LIGHT                      = _UxGT("Lûh cabina");
  PROGMEM Language_Str MSG_CASE_LIGHT_BRIGHTNESS           = _UxGT("Briyo cabina");

  PROGMEM Language_Str MSG_EXPECTED_PRINTER                = _UxGT("Impreçora incorrêtta");

  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Cont. de impreçión");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Completâh");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Tiempo totâh de imp.");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("Impreçión mâh larga");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Totâh Êttruío");
  #else
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Impreçionê");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Completâh");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Totâh");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("Mâh larga");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Êttruío");
  #endif
  PROGMEM Language_Str MSG_INFO_MIN_TEMP                   = _UxGT("Temp. Mínima");
  PROGMEM Language_Str MSG_INFO_MAX_TEMP                   = _UxGT("Temp. Máççima");
  PROGMEM Language_Str MSG_INFO_PSU                        = _UxGT("Fuente alimentaçión");
  PROGMEM Language_Str MSG_DRIVE_STRENGTH                  = _UxGT("Fuerça de empuhe");
  PROGMEM Language_Str MSG_DAC_PERCENT_X                   = _UxGT("X Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Y                   = _UxGT("Y Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Z                   = _UxGT("Z Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_E                   = _UxGT("E Driver %");
  PROGMEM Language_Str MSG_ERROR_TMC                       = _UxGT("ERRÔH CONEX. TMC");
  PROGMEM Language_Str MSG_DAC_EEPROM_WRITE                = _UxGT("Êccribe DAC EEPROM");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER          = _UxGT("CAMBIÂH FILAMENTO");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_PAUSE    = _UxGT("IMPREÇIÓN PAUÇÁ");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_LOAD     = _UxGT("CARGÂH FILAMENTO");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_UNLOAD   = _UxGT("DÊCCARGÂH FILAMENTO");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_HEADER   = _UxGT("ÔCC. REINIÇIO:");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_PURGE    = _UxGT("Purgâh mâh");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_RESUME   = _UxGT("Continuâh imp.");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_NOZZLE          = _UxGT("  Boquiya: ");
  PROGMEM Language_Str MSG_RUNOUT_SENSOR                   = _UxGT("Çençôh de çêççión");
  PROGMEM Language_Str MSG_RUNOUT_DISTANCE_MM              = _UxGT("Dîtt de çêcc. mm");
  PROGMEM Language_Str MSG_LCD_HOMING_FAILED               = _UxGT("Îh a orihen Fayao");
  PROGMEM Language_Str MSG_LCD_PROBING_FAILED              = _UxGT("Çondeo Fayao");
  PROGMEM Language_Str MSG_M600_TOO_COLD                   = _UxGT("M600: Mu Frio");

  PROGMEM Language_Str MSG_MMU2_CHOOSE_FILAMENT_HEADER     = _UxGT("ELIHE FILAMENTO");
  PROGMEM Language_Str MSG_MMU2_MENU                       = _UxGT("MMU");
  PROGMEM Language_Str MSG_MMU2_WRONG_FIRMWARE             = _UxGT("¡Âttu. MMU Firmware!");
  PROGMEM Language_Str MSG_MMU2_NOT_RESPONDING             = _UxGT("MMU Neçeçita Cuidao");
  PROGMEM Language_Str MSG_MMU2_RESUME                     = _UxGT("Continuâh imp.");
  PROGMEM Language_Str MSG_MMU2_RESUMING                   = _UxGT("Reçumiendo...");
  PROGMEM Language_Str MSG_MMU2_LOAD_FILAMENT              = _UxGT("Cargâh Filamento");
  PROGMEM Language_Str MSG_MMU2_LOAD_ALL                   = _UxGT("Cargâh Tó");
  PROGMEM Language_Str MSG_MMU2_LOAD_TO_NOZZLE             = _UxGT("Cargâh âtta boqui.");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT             = _UxGT("Êppurçâh Filamento");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT_N           = _UxGT("Êppurçâh Filamento ~");
  PROGMEM Language_Str MSG_MMU2_UNLOAD_FILAMENT            = _UxGT("Dêccargâh Filamento");
  PROGMEM Language_Str MSG_MMU2_LOADING_FILAMENT           = _UxGT("Cargando Fil. %i...");
  PROGMEM Language_Str MSG_MMU2_EJECTING_FILAMENT          = _UxGT("Êppurçando Fil. ...");
  PROGMEM Language_Str MSG_MMU2_UNLOADING_FILAMENT         = _UxGT("Dêccargando Fil....");
  PROGMEM Language_Str MSG_MMU2_ALL                        = _UxGT("Tó");
  PROGMEM Language_Str MSG_MMU2_FILAMENT_N                 = _UxGT("Filamento ~");
  PROGMEM Language_Str MSG_MMU2_RESET                      = _UxGT("Reiniçiâh MMU");
  PROGMEM Language_Str MSG_MMU2_RESETTING                  = _UxGT("Reiniçiando MMU...");
  PROGMEM Language_Str MSG_MMU2_EJECT_RECOVER              = _UxGT("Retirâh, y purçâh");

  PROGMEM Language_Str MSG_MIX                             = _UxGT("Mêccla");
  PROGMEM Language_Str MSG_MIX_COMPONENT_N                 = _UxGT("Componente =");
  PROGMEM Language_Str MSG_MIXER                           = _UxGT("Miêccladôh");
  PROGMEM Language_Str MSG_GRADIENT                        = _UxGT("Degradao");
  PROGMEM Language_Str MSG_FULL_GRADIENT                   = _UxGT("Degradao Totâh");
  PROGMEM Language_Str MSG_TOGGLE_MIX                      = _UxGT("Mêccla Cômmutá");
  PROGMEM Language_Str MSG_CYCLE_MIX                       = _UxGT("Mêccla Çíclica");
  PROGMEM Language_Str MSG_GRADIENT_MIX                    = _UxGT("Mêccla de Degradao");
  PROGMEM Language_Str MSG_REVERSE_GRADIENT                = _UxGT("Degradao imberço");
  PROGMEM Language_Str MSG_ACTIVE_VTOOL                    = _UxGT("Âttibâh Err.V");
  PROGMEM Language_Str MSG_START_VTOOL                     = _UxGT("Iniçio Err.V");
  PROGMEM Language_Str MSG_END_VTOOL                       = _UxGT("   Fin Err.V");
  PROGMEM Language_Str MSG_GRADIENT_ALIAS                  = _UxGT("Aliâ Err.V");
  PROGMEM Language_Str MSG_RESET_VTOOLS                    = _UxGT("Reiniçiâh Err.V");
  PROGMEM Language_Str MSG_COMMIT_VTOOL                    = _UxGT("Cometêh mêcc. Err.V");
  PROGMEM Language_Str MSG_VTOOLS_RESET                    = _UxGT("Err.V reiniçiáô");
  PROGMEM Language_Str MSG_START_Z                         = _UxGT("Iniçio Z:");
  PROGMEM Language_Str MSG_END_Z                           = _UxGT("   Fin Z:");

  PROGMEM Language_Str MSG_GAMES                           = _UxGT("Games");
  PROGMEM Language_Str MSG_BRICKOUT                        = _UxGT("Brickout");
  PROGMEM Language_Str MSG_INVADERS                        = _UxGT("Invaders");
  PROGMEM Language_Str MSG_SNAKE                           = _UxGT("Sn4k3");
  PROGMEM Language_Str MSG_MAZE                            = _UxGT("Maze");

  #if LCD_HEIGHT >= 4
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_2_LINE("Purçâh er botón pa", "reanudâh impreçión"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_INIT              = _UxGT(MSG_1_LINE("Aparcando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_3_LINE("Êpperando pa", "iniçiâh er cambio", "de filamento"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_3_LINE("Inçerte er filamento", "y purçe er botón", "pa continuâh..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_2_LINE("Purçe er botón pa", "calentâh la boquiya"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_2_LINE("Calentando boquiya", "Êppere por fabôh..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_2_LINE("Êppere pa", "liberâh er filamento"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_2_LINE("Êppere pa", "purgâh er filamento"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_2_LINE("Purçe pa finaliçâh", "la purga de filamen."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_2_LINE("Êpperando impreçora", "pa reanudâh..."));
  #else
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_1_LINE("Purçe pa continuâh"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_INIT              = _UxGT(MSG_1_LINE("Aparcando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_1_LINE("Por Fabôh êppere..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_1_LINE("Inçerte y Purçe"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_1_LINE("Purçe pa Calentâh"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_1_LINE("Calentando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_1_LINE("Liberando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_1_LINE("Cargando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_1_LINE("Purgando..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_1_LINE("Purçe pa finaliçâh"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_1_LINE("Reanudando..."));
  #endif

  PROGMEM Language_Str MSG_TMC_DRIVERS                     = _UxGT("Controladorê TMC");
  PROGMEM Language_Str MSG_TMC_CURRENT                     = _UxGT("Amperahe Controladôh");
  PROGMEM Language_Str MSG_TMC_HYBRID_THRS                 = _UxGT("Límite Íbrido");
  PROGMEM Language_Str MSG_TMC_HOMING_THRS                 = _UxGT("Orihen çin çençorê");
  PROGMEM Language_Str MSG_TMC_STEPPING_MODE               = _UxGT("Modo de paçô");
  PROGMEM Language_Str MSG_TMC_STEALTH_ENABLED             = _UxGT("StealthChop Abilit.");

  PROGMEM Language_Str MSG_SERVICE_RESET                   = _UxGT("Reiniçiâh");
  PROGMEM Language_Str MSG_SERVICE_IN                      = _UxGT(" dentro:");

  PROGMEM Language_Str MSG_BACKLASH_CORRECTION             = _UxGT("Corrêttion");
  PROGMEM Language_Str MSG_BACKLASH_SMOOTHING              = _UxGT("Çuabiçao");
}
