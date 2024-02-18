/**
 * @file menu_defines.h
 * @author Daniel Adamkovic (dadamkovic@protonmail.ch)
 * @brief 
 * @version 0.1
 * @date 18-11-2023
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef _MENU_DEFINES_H_
#define _MENU_DEFINES_H_

#include "typedef.h"

#define MENU_MAX_MENU_ITEMS 30
#define MENU_MAX_TEXT_LEN 15
#define MENU_MAX_SCREENS 5





typedef enum MENU_ResultTypeDef{
    MENU_OK,
    MENU_FAIL
}MENU_ResultTypeDef;


typedef uint16_t MENU_ScreenIdTypeDef;
typedef uint16_t MENU_MenuIdTypeDef;


typedef struct MENU_ItemTypeDef{
    char text[15];
}MENU_ItemTypeDef;


typedef struct MENU_ScreenTypeDef{
    uint16_t MENU_ScreenIdTypeDef;
    uint16_t MENU_MenuIdTypeDef[MENU_MAX_MENU_ITEMS];
}


typedef MENU_ResultTypeDef(*MENU_WriteTypeDef)(*char buff, uint16_t len);
typedef MENU_ResultTypeDef(*MENU_ReadTypeDef)(*char buff, *uint16_t len);
typedef MENU_ResultTypeDef(*MENU_SetupTypeDef)(void);

/**
 * @brief Supplied by user, defines how write, read and menu items are initialized
 * 
 */
typedef struct MENU_ConfigTypeDef{
    MENU_WriteTypeDef menuWrite;    //called when werite is requested
    MENU_ReadTypeDef menuRead;      //called when read is requsted
    MENU_SetupTypeDef menuSetup;    //called once on menu initialization
}MENU_ConfigTypeDef;




#endif