#define MENU_ID_MAIN                             999

// defines for the top level menu FILE
#define MENU_FILE_ID_NEW                        1000
#define MENU_FILE_ID_OPEN                       1050
#define MENU_FILE_ID_OPEN_RECENT                1100
#define MENU_FILE_ID_CLOSE                      1150
#define MENU_FILE_ID_CLOSE_ALL                  1200
#define MENU_FILE_ID_SAVE                       1250
#define MENU_FILE_ID_SAVE_AS                    1300
#define MENU_FILE_ID_SAVE_ALL                   1350
#define MENU_FILE_ID_BATCH_CONVERT              1400
#define MENU_FILE_ID_IMPORT                     1450
#define MENU_FILE_ID_EXPORT                     1500
#define MENU_FILE_ID_EXIT                       1550

// defines for the top level menu EDIT
#define MENU_EDIT_ID_UNDO                       2000
#define MENU_EDIT_ID_REDO                       2050
#define MENU_EDIT_ID_CUT                        2100
#define MENU_EDIT_ID_COPY                       2150
#define MENU_EDIT_ID_PASTE                      2200
#define MENU_EDIT_ID_CLEAR                      2250
#define MENU_EDIT_ID_SHP_SIZE                   2300
#define MENU_EDIT_ID_CANVAS_SIZE                2350
#define MENU_EDIT_ID_SHP_ROT_180                2400
#define MENU_EDIT_ID_SHP_ROT_90CW               2420
#define MENU_EDIT_ID_SHP_ROT_90CCW              2440
#define MENU_EDIT_ID_SHP_ROT_ARB                2460
#define MENU_EDIT_ID_TRANSFORM                  2480

// defines for the top level menu SHP
#define MENU_SHP_ID_TYPE                        3000
#define MENU_SHP_ID_AUTOSELECT_TYPE             3020
#define MENU_SHP_ID_INSERT_FRAME                3050
#define MENU_SHP_ID_DELETE_FRAME                3100
#define MENU_SHP_ID_SPLIT_FRAMES                3150

#define MENU_SHP_ID_PALETTE_LOAD                4000
#define MENU_SHP_ID_PALETTE_CHANGE              4050
#define MENU_SHP_ID_PALETTE_UPDATE              4350

#define MENU_SHP_ID_SEQUENCE                    4550
#define MENU_SHP_ID_SHADOWS_AUTO                4600
#define MENU_SHP_ID_SHADOWS_CONVERT             4650
#define MENU_SHP_ID_SHADOWS_FIX                 4660
#define MENU_SHP_ID_GENERATE_CAMEO              4700

// defines for the top level menu FILTER
#define MENU_FILTER_ID_SETTINGS                 5000
#define MENU_FILTER_ID_COLOURSCHEME             5010

#define MENU_FILTER_ID_SMOOTH_CONSERVATIVE      5020
#define MENU_FILTER_ID_SMOOTH_POLYGON_MEAN      5040

#define MENU_FILTER_ID_SMOOTH_MEAN_MIN          5060
#define MENU_FILTER_ID_SMOOTH_MEAN_3X3          5080
#define MENU_FILTER_ID_SMOOTH_MEAN_5X5          5100
#define MENU_FILTER_ID_SMOOTH_MEAN_7X7          5120
#define MENU_FILTER_ID_SMOOTH_MEAN_SQRD_3X3     5140
#define MENU_FILTER_ID_SMOOTH_MEAN_SQRD_5X5     5160
#define MENU_FILTER_ID_SMOOTH_MEAN_SQRD_7X7     5180

#define MENU_FILTER_ID_SMOOTH_MEDIAN_MIN        5200
#define MENU_FILTER_ID_SMOOTH_MEDIAN_3X3        5220
#define MENU_FILTER_ID_SMOOTH_MEDIAN_5X5        5240
#define MENU_FILTER_ID_SMOOTH_MEDIAN_7X7        5260

#define MENU_FILTER_ID_SHARPEN_UNSHARP_MASK     5280
#define MENU_FILTER_ID_SHARPEN_WEAK             5300
#define MENU_FILTER_ID_SHARPEN_STRONG           5320

#define MENU_FILTER_ID_ARITHMETICS_EXP          5340
#define MENU_FILTER_ID_ARITHMETICS_LOG          5360
#define MENU_FILTER_ID_ARITHMETICS_LOG_LIGHT    5380
#define MENU_FILTER_ID_ARITHMETICS_LOG_DARK     5400

#define MENU_FILTER_ID_TEXTURIZE_BASIC          5420
#define MENU_FILTER_ID_TEXTURIZE_ICED           5440
#define MENU_FILTER_ID_TEXTURIZE_WHITE          5460
#define MENU_FILTER_ID_TEXTURIZE_PETRO          5480
#define MENU_FILTER_ID_TEXTURIZE_STONIFY        5500
#define MENU_FILTER_ID_TEXTURIZE_ROCK           5520

#define MENU_FILTER_ID_3D_BUTTONIZE_WEAK        5540
#define MENU_FILTER_ID_3D_BUTTONIZE_STRONG      5560
#define MENU_FILTER_3D_BUTTONIZE_VERYSTRONG     5580

#define MENU_FILTER_ID_OTHER_MESS               5600
#define MENU_FILTER_ID_OTHER_SQUARE_DEPTH       5620
#define MENU_FILTER_ID_OTHER_XDEPTH             5640
#define MENU_FILTER_ID_OTHER_UBER               5660
#define MENU_FILTER_ID_OTHER_UNFOCUS            5680
#define MENU_FILTER_ID_OTHER_UNDERLINE          5700

// defines for the top level menu VIEW
#define MENU_VIEW_ID_ZOOM_IN                    6000
#define MENU_VIEW_ID_ZOOM_OUT                   6100
#define MENU_VIEW_ID_PREVIEW                    6200
#define MENU_VIEW_ID_SHOW_CENTER                6300
#define MENU_VIEW_ID_SHOW_GRID                  6400

// defines for the top level menu OPTIONS
#define MENU_OPTIONS_ID_PREFERENCES             7000

// defines for the top level menu HELP
#define MENU_HELP_ID_HELP                       8000
#define MENU_HELP_ID_REPORT_BUG                 8050
#define MENU_HELP_ID_ABOUT                      8100

// defines for main toolbar buttons
#define TOOLBAR_ID_NEW                          9000
#define TOOLBAR_ID_OPEN                         9100
#define TOOLBAR_ID_SAVE                         9200

#define TOOLBAR_ID_CROSSHAIR                    9300
#define TOOLBAR_ID_GRID                         9400
#define TOOLBAR_ID_PREVIOUS_FRAME               9500
#define TOOLBAR_ID_NEXT_FRAME                   9600
#define TOOLBAR_ID_ZOOM_IN                      9700
#define TOOLBAR_ID_ZOOM_OUT                     9800

// defines for dialog boxes
#define IDD_ABOUT                              10000
#define IDD_BATCH                              10001
#define IDD_CANVASRESIZE                       10002
#define IDD_CHANGEPALETTE                      10003
#define IDD_COLOURSCHEME                       10004
#define IDD_EDITSEQUENCE                       10005
#define IDD_EXPORT                             10006
#define IDD_FILTERSETTINGS                     10007
#define IDD_GENERATECAMEO                      10008
#define IDD_IMPORT                             10009
#define IDD_NEW                                10010
#define IDD_PREFERENCES                        10011
#define IDD_PREVIEW                            10012
#define IDD_REPORTBUG                          10013
#define IDD_ROTATEARB                          10014
#define IDD_SHPRESIZE                          10015
#define IDD_SHPTYPE                            10016
#define IDD_TRANSFORM                          10017
#define IDD_UPDATEPALETTE                      10018

//defines for about dialog box components
#define ID_ABOUTDLG_TITLE                      10100
#define ID_ABOUTDLG_VERSION                    10101
#define ID_ABOUTDLG_AUTHOR                     10102

// defines for resize canvas dialog box components
#define IDGRPBX_CSIZE                          10200
#define IDTEXT_CWIDTH                          10201
#define IDTEXT_CLENGTH                         10202

#define IDGRPBX_NSIZE                          10203
#define IDTEXT_NWIDTH                          10204
#define IDTEXT_NLENGTH                         10205
#define IDEDITTEXT_NWIDTH                      10206
#define IDEDITTEXT_NLENGTH                     10207

// defines for change palette dialog box components
#define IDGRPBX_CPAL                           10300
#define IDGRPBX_NPAL                           10301

// defines for export dialog box components
#define IDEXPORT                               10400
#define IDGRPBX_EXPORTAS                       10401
#define IDGRPBX_EXPORTFRAMES                   10402
#define IDGRPBX_EXPORTPATH                     10403

// defines for filter settings dialog box components
#define IDBTN_FILTER_DEFAULT                   10500
#define IDGRPBX_FILTER_FRAMERANGE              10501
#define IDGRPBX_FILTER_FRAMEREGION             10502
#define IDGRPBX_FILTER_BACKGROUND              10503
#define IDGRPBX_FILTER_COLOURSETTINGS          10504
#define IDGRPBX_FILTER_COLOURCONTROL           10505
