/*** Copyright (C) 2019-2020 ZaidaTek and Andreas Riebesehl
**** This work is licensed under: Creative Commons Attribution-NoDerivatives 4.0 International Public License
**** For full license text, please visit: https://creativecommons.org/licenses/by-nd/4.0/legalcode
***/
#ifndef ZSCOPE_GUI_H_INCLUDED
#define ZSCOPE_GUI_H_INCLUDED

#include "ZScope.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
void ZSGUI_Init(void);
void ZSGUI_Size(void);
void ZSGUI_Menu(void);
void ZSGUI_Exit(void);
void ZSGUI_Event(void);
#ifdef __cplusplus
}
#endif // __cplusplus

#endif //ZSCOPE_GUI_H_INCLUDED
