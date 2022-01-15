#ifndef _PIN_TFT28_V1_0_H_  // modify to actual filename !!!
#define _PIN_TFT28_V1_0_H_  // modify to actual filename !!!

// LCD resolution, font and icon size
#ifndef TFT_RESOLUTION
  #define TFT_RESOLUTION
  #ifdef PORTRAIT_MODE
    #include "./Resolution/TFT_240X320.h"
  #else
    #include "./Resolution/TFT_320X240.h"
  #endif
#endif

// Root folder for fonts and icons
#ifndef ROOT_DIR
  #define ROOT_DIR "TFT28"
#endif

// Hardware version config
#ifndef HARDWARE_VERSION
  #define HARDWARE_VERSION "TFT28_V1.0"
#endif

// LCD interface
// Supported LCD drivers: [ST7789, SSD1963, RM68042, NT35310, ILI9488, ILI9341, ILI9325, HX8558]
#ifndef TFTLCD_DRIVER
  #define TFTLCD_DRIVER       ILI9341
  #define TFTLCD_DRIVER_SPEED 0x03
#endif

#ifndef LCD_DATA_16BIT
  #define LCD_DATA_16BIT 1  // LCD data 16bit or 8bit
#endif

// SD Card CD Detect pin
#define SD_CD_PIN PB0

#include "pin_TFT35_V1_0.h"

#endif
