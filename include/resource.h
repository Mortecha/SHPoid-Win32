#define MENU_ID_MAIN                               1

// defines for the top level menu FILE
#define MENU_FILE_ID_NEW                         100
#define MENU_FILE_ID_OPEN                        101
#define MENU_FILE_ID_OPEN_RECENT                 102
#define MENU_FILE_ID_CLOSE                       103
#define MENU_FILE_ID_CLOSE_ALL                   104
#define MENU_FILE_ID_SAVE                        105
#define MENU_FILE_ID_SAVE_AS                     106
#define MENU_FILE_ID_SAVE_ALL                    107
#define MENU_FILE_ID_BATCH_CONVERT               108
#define MENU_FILE_ID_IMPORT                      109
#define MENU_FILE_ID_EXPORT                      110
#define MENU_FILE_ID_EXIT                        111

// defines for the top level menu EDIT
#define MENU_EDIT_ID_UNDO                        200
#define MENU_EDIT_ID_REDO                        201
#define MENU_EDIT_ID_CUT                         202
#define MENU_EDIT_ID_COPY                        203
#define MENU_EDIT_ID_PASTE                       204
#define MENU_EDIT_ID_CLEAR                       205
#define MENU_EDIT_ID_SHP_SIZE                    206
#define MENU_EDIT_ID_CANVAS_SIZE                 207
#define MENU_EDIT_ID_SHP_ROT_180                 208
#define MENU_EDIT_ID_SHP_ROT_90CW                209
#define MENU_EDIT_ID_SHP_ROT_90CCW               210
#define MENU_EDIT_ID_SHP_ROT_ARB                 211
#define MENU_EDIT_ID_TRANSFORM                   212

// defines for the top level menu SHP
#define MENU_SHP_ID_TYPE                         300
#define MENU_SHP_ID_AUTOSELECT_TYPE              302
#define MENU_SHP_ID_INSERT_FRAME                 305
#define MENU_SHP_ID_DELETE_FRAME                 310
#define MENU_SHP_ID_SPLIT_FRAMES                 315

#define MENU_SHP_ID_PALETTE_LOAD                 400
#define MENU_SHP_ID_PALETTE_CHANGE               405
#define MENU_SHP_ID_PALETTE_UPDATE               435

#define MENU_SHP_ID_SEQUENCE                     455
#define MENU_SHP_ID_SHADOWS_AUTO                 460
#define MENU_SHP_ID_SHADOWS_CONVERT              465
#define MENU_SHP_ID_SHADOWS_FIX                  466
#define MENU_SHP_ID_GENERATE_CAMEO               470

// defines for the top level menu FILTER
#define MENU_FILTER_ID_SETTINGS                  500
#define MENU_FILTER_ID_COLOURSCHEME              501

#define MENU_FILTER_ID_SMOOTH_CONSERVATIVE       502
#define MENU_FILTER_ID_SMOOTH_POLYGON_MEAN       504

#define MENU_FILTER_ID_SMOOTH_MEAN_MIN           506
#define MENU_FILTER_ID_SMOOTH_MEAN_3X3           508
#define MENU_FILTER_ID_SMOOTH_MEAN_5X5           510
#define MENU_FILTER_ID_SMOOTH_MEAN_7X7           512
#define MENU_FILTER_ID_SMOOTH_MEAN_SQRD_3X3      514
#define MENU_FILTER_ID_SMOOTH_MEAN_SQRD_5X5      516
#define MENU_FILTER_ID_SMOOTH_MEAN_SQRD_7X7      518

#define MENU_FILTER_ID_SMOOTH_MEDIAN_MIN         520
#define MENU_FILTER_ID_SMOOTH_MEDIAN_3X3         522
#define MENU_FILTER_ID_SMOOTH_MEDIAN_5X5         524
#define MENU_FILTER_ID_SMOOTH_MEDIAN_7X7         526

#define MENU_FILTER_ID_SHARPEN_UNSHARP_MASK      528
#define MENU_FILTER_ID_SHARPEN_WEAK              530
#define MENU_FILTER_ID_SHARPEN_STRONG            532

#define MENU_FILTER_ID_ARITHMETICS_EXP           534
#define MENU_FILTER_ID_ARITHMETICS_LOG           536
#define MENU_FILTER_ID_ARITHMETICS_LOG_LIGHT     538
#define MENU_FILTER_ID_ARITHMETICS_LOG_DARK      540

#define MENU_FILTER_ID_TEXTURIZE_BASIC           542
#define MENU_FILTER_ID_TEXTURIZE_ICED            544
#define MENU_FILTER_ID_TEXTURIZE_WHITE           546
#define MENU_FILTER_ID_TEXTURIZE_PETRO           548
#define MENU_FILTER_ID_TEXTURIZE_STONIFY         550
#define MENU_FILTER_ID_TEXTURIZE_ROCK            552

#define MENU_FILTER_ID_3D_BUTTONIZE_WEAK         554
#define MENU_FILTER_ID_3D_BUTTONIZE_STRONG       556
#define MENU_FILTER_3D_BUTTONIZE_VERYSTRONG      558

#define MENU_FILTER_ID_OTHER_MESS                560
#define MENU_FILTER_ID_OTHER_SQUARE_DEPTH        562
#define MENU_FILTER_ID_OTHER_XDEPTH              564
#define MENU_FILTER_ID_OTHER_UBER                566
#define MENU_FILTER_ID_OTHER_UNFOCUS             568
#define MENU_FILTER_ID_OTHER_UNDERLINE           570

// defines for the top level menu VIEW
#define MENU_VIEW_ID_ZOOM_IN                     600
#define MENU_VIEW_ID_ZOOM_OUT                    610
#define MENU_VIEW_ID_PREVIEW                     620
#define MENU_VIEW_ID_SHOW_CENTER                 630
#define MENU_VIEW_ID_SHOW_GRID                   640

// defines for the top level menu OPTIONS
#define MENU_OPTIONS_ID_PREFERENCES              700

// defines for the top level menu HELP
#define MENU_HELP_ID_HELP                        800
#define MENU_HELP_ID_REPORT_BUG                  805
#define MENU_HELP_ID_ABOUT                       810

// defines for main toolbar buttons
#define TOOLBAR_ID_NEW                           900
#define TOOLBAR_ID_OPEN                          910
#define TOOLBAR_ID_SAVE                          920
#define TOOLBAR_ID_CROSSHAIR                     930
#define TOOLBAR_ID_GRID                          940
#define TOOLBAR_ID_PREVIOUS_FRAME                950
#define TOOLBAR_ID_NEXT_FRAME                    960
#define TOOLBAR_ID_ZOOM_IN                       970
#define TOOLBAR_ID_ZOOM_OUT                      980

// defines for dialog boxes
#define IDD_ABOUT                               1000
#define IDD_BATCH                               1001
#define IDD_CANVASRESIZE                        1002
#define IDD_CHANGEPALETTE                       1003
#define IDD_COLOURSCHEME                        1004
#define IDD_EDITSEQUENCE                        1005
#define IDD_EXPORT                              1006
#define IDD_FILTERSETTINGS                      1007
#define IDD_GENERATECAMEO                       1008
#define IDD_IMPORT                              1009
#define IDD_NEW                                 1010
#define IDD_PREFERENCES                         1011
#define IDD_PREVIEW                             1012
#define IDD_REPORTBUG                           1013
#define IDD_ROTATEARB                           1014
#define IDD_SHPRESIZE                           1015
#define IDD_SHPTYPE                             1016
#define IDD_TRANSFORM                           1017
#define IDD_UPDATEPALETTE                       1018

//defines for about dialog box components
#define IDD_ABOUT_TEXT_TITLE                    1100
#define IDD_ABOUT_TEXT_VERSION                  1101
#define IDD_ABOUT_TEXT_AUTHOR                   1102

// defines for resize canvas dialog box components
#define IDD_CANVASRESIZE_CROUPBOX_CUR           1200
#define IDD_CANVASRESIZE_TEXT_CUR_WIDTH         1201
#define IDD_CANVASRESIZE_TEXT_CUR_LENGTH        1202
#define IDD_CANVASRESIZE_TEXT_CUR_WIDTH_VAL     1203
#define IDD_CANVASRESIZE_TEXT_CUR_LENGTH_VAL    1204
#define IDD_CANVASRESIZE_CROUPBOX_NEW           1205
#define IDD_CANVASRESIZE_TEXT_NEW_WIDTH         1206
#define IDD_CANVASRESIZE_EDITTEXT_NEW_WIDTH     1207
#define IDD_CANVASRESIZE_TEXT_NEW_WIDTH_UNIT    1208
#define IDD_CANVASRESIZE_TEXT_NEW_LENGTH        1209
#define IDD_CANVASRESIZE_EDITTEXT_NEW_LENGTH    1210
#define IDD_CANVASRESIZE_TEXT_NEW_LENGTH_UNIT   1211

// defines for change palette dialog box components
#define IDD_CHANGEPALETTE_GROUPBOX_CUR          1300
#define IDD_CHANGEPALETTE_TEXT_CUR_GAME         1301
#define IDD_CHANGEPALETTE_TEXT_CUR_PALETTE      1302
#define IDD_CHANGEPALETTE_TEXT_CUR_GAME_VAL     1303
#define IDD_CHANGEPALETTE_TEXT_CUR_PALETTE_VAL  1304
#define IDD_CHANGEPALETTE_GROUPBOX_NEW          1305
#define IDD_CHANGEPALETTE_TEXT_NEW_GAME         1306
#define IDD_CHANGEPALETTE_TEXT_NEW_PALETTE      1307
#define IDD_CHANGEPALETTE_COMBOBOX_GAME         1308
#define IDD_CHANGEPALETTE_COMBOBOX_PALETTE      1309

// defines for export dialog box components
#define IDD_EXPORT_BUTTON_EXPORT                1400
#define IDD_EXPORT_GROUPBOX_EXPORTAS            1401
#define IDD_EXPORT_RADIOBUTTON_IMAGES           1402
#define IDD_EXPORT_RADIOBUTTON_SPRITESHEET      1403
#define IDD_EXPORT_CHECKBOX_FRAMERANGE          1404
#define IDD_EXPORT_GROUPBOX_EXPORTFRAMES        1405
#define IDD_EXPORT_TEXT_TOFRAME                 1406
#define IDD_EXPORT_EDITTEXT_TOFRAME             1407
#define IDD_EXPORT_TEXT_FROMFRAME               1408
#define IDD_EXPORT_EDITTEXT_FROMFRAME           1409
#define IDD_EXPORT_GROUPBOX_EXPORTPATH          1410
#define IDD_EXPORT_EDITTEXT_EXPORTPATH          1411
#define IDD_EXPORT_PUSHBUTTON_BROWSE            1412

// defines for filter settings dialog box components
#define IDD_FILTERSETTINGS_BUTTON_DEFAULT       1500
#define IDD_FILTERSETTINGS_GROUPBOX_RANGE       1501
#define IDD_FILTERSETTINGS_TEXT_CURRENT         1502
#define IDD_FILTERSETTINGS_GROUPBOX_REGION      1505
#define IDD_FILTERSETTINGS_GROUPBOX_BG          1510
#define IDD_FILTERSETTINGS_GROUPBOX_COL         1515
#define IDD_FILTERSETTINGS_GROUPBOX_CON         1520


#define IDD_SHPRESIZE_CROUPBOX_CUR              2300
#define IDD_SHPRESIZE_TEXT_CUR_WIDTH            2301
#define IDD_SHPRESIZE_TEXT_CUR_LENGTH           2302
#define IDD_SHPRESIZE_TEXT_CUR_WIDTH_VAL        2303
#define IDD_SHPRESIZE_TEXT_CUR_LENGTH_VAL       2304
#define IDD_SHPRESIZE_CROUPBOX_NEW              2305
#define IDD_SHPRESIZE_TEXT_NEW_WIDTH            2306
#define IDD_SHPRESIZE_EDITTEXT_NEW_WIDTH        2307
#define IDD_SHPRESIZE_TEXT_NEW_WIDTH_UNIT       2308
#define IDD_SHPRESIZE_TEXT_NEW_LENGTH           2309
#define IDD_SHPRESIZE_EDITTEXT_NEW_LENGTH       2310
#define IDD_SHPRESIZE_TEXT_NEW_LENGTH_UNIT      2311

#define ID_TOOLBAR_BUTTONS                      2400

