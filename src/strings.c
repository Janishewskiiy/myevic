#include <stdint.h>

#define __string__ const uint16_t __attribute__ ((section (".strings")))

__string__ String_ON 		[] = { 0xAA, 0xA9, 0 }; // "ON"
__string__ String_No 		[] = { 0xA9, 0x90, 0 }; // "No"
__string__ String_On 		[] = { 0xAA, 0x8F, 0 }; // "On"
__string__ String_Key 		[] = { 0xA6, 0x86, 0x9A, 0 }; // "Key"
__string__ String_OFF 		[] = { 0xAA, 0xA1, 0xA1, 0 }; // "OFF"
__string__ String_Low 		[] = { 0xA7, 0x90, 0x98, 0 }; // "Low"
__string__ String_Off 		[] = { 0xAA, 0x87, 0x87, 0 }; // "Off"
__string__ String_Lock 		[] = { 0xA7, 0x90, 0x84, 0x8C, 0 }; // "Lock"
__string__ String_UnLock 	[] = { 0xB0, 0x8F, 0xA7, 0x90, 0x84, 0x8C, 0 }; // "UnLock"
__string__ String_Protec 	[] = { 0xAB, 0x93, 0x90, 0x95, 0x86, 0x84, 0x95, 0x8A, 0x90, 0x8F, 0	}; // "Protection"
__string__ String_Version 	[] = { 0xB1, 0x86, 0x93, 0x94, 0x8A, 0x90, 0x8F, 0 }; // "Version"
__string__ String_Device 	[] = { 0x9F, 0x86, 0x97, 0x8A, 0x84, 0x86, 0 }; // "Device"
__string__ String_TooHot 	[] = { 0xAF, 0x90, 0x90, 0xBC, 0xA3, 0x90, 0x95, 0 }; // "Too Hot"
__string__ String_Stealth 	[] = { 0xAE, 0x95, 0x86, 0x82, 0x8D, 0x95, 0x89, 0 }; // "Stealth"
__string__ String_TiON 		[] = { 0xAF, 0x8A, 0xBC, 0xAA, 0xA9, 0 }; // "Ti ON"
__string__ String_TiOFF 	[] = { 0xAF, 0x8A, 0xBC, 0xAA, 0xA1, 0xA1, 0 }; // "Ti OFF"
__string__ String_Temp 		[] = { 0xAF, 0x86, 0x8E, 0x91, 0 }; // "Temp"
__string__ String_Battery 	[] = { 0x9D, 0x82, 0x95, 0x95, 0x86, 0x93, 0x9A, 0 }; // "Battery"
__string__ String_Atomizer	[] = { 0x9C, 0x95, 0x90, 0x8E, 0x8A, 0x9B, 0x86, 0x93, 0 }; // "Atomizer"
__string__ String_Found 	[] = { 0xA1, 0x90, 0x96, 0x8F, 0x85, 0 }; // "Found"
__string__ String_Short 	[] = { 0xAE, 0x89, 0x90, 0x93, 0x95, 0 }; // "Short"
__string__ String_Over10s 	[] = { 0xAA, 0x97, 0x86, 0x93, 0xBC, 0xC, 0xB, 0xBD, 0x94, 0 }; // "Over 10s"
__string__ String_NewCoil 	[] = { 0xA9, 0x86, 0x98, 0xBD, 0x9E, 0x90, 0x8A, 0x8D, 0 }; // "New Coil"
__string__ String_SameCoil	[] = { 0xAE, 0x82, 0x8E, 0x86, 0xBD, 0x9E, 0x90, 0x8A, 0x8D, 0 }; // "Same Coil"
__string__ String_Right 	[] = { 0xAD, 0x8A, 0x88, 0x89, 0x95, 0	}; // "Right"
__string__ String_Left 		[] = { 0xA7, 0x86, 0x87, 0x95, 0 }; // "Left"
__string__ String_LOGO 		[] = { 0xA7, 0xAA, 0xA2, 0xAA, 0 }; // "LOGO"
__string__ String_Game 		[] = { 0xA2, 0x82, 0x8E, 0x86, 0 }; // "Game"
__string__ String_Easy 		[] = { 0xA0, 0x82, 0x94, 0x9A, 0 }; // "Easy"
__string__ String_Normal 	[] = { 0xA9, 0x90, 0x93, 0x8E, 0x82, 0x8D, 0 }; // "Normal"
__string__ String_Hard 		[] = { 0xA3, 0x82, 0x93, 0x85, 0 }; // "Hard"
__string__ String_Exit 		[] = { 0xA0, 0x99, 0x8A, 0x95, 0 }; // "Exit"
__string__ String_NI 		[] = { 0xA9, 0xA4, 0	}; // "NI"
__string__ String_TI 		[] = { 0xAF, 0xA4, 0	}; // "TI"
__string__ String_SS 		[] = { 0xAE, 0xAE, 0	}; // "SS"
__string__ String_BF_s 		[] = { 0x69, 0x6D, 0	}; // "BF" (small)
__string__ String_TCR 		[] = { 0xAF, 0x9E, 0xAD, 0 }; // "TCR"
__string__ String_PWR_s 	[] = { 0x77, 0x7E, 0x79, 0 }; // "PWR" (small)
__string__ String_AMP_s 	[] = { 0x68, 0x74, 0x77, 0 }; // "AMP" (small)
__string__ String_MAX_s 	[] = { 0x74, 0x68, 0x7F, 0 }; // "MAX" (small)
__string__ String_MIN_s 	[] = { 0x74, 0x70, 0x75, 0 }; // "MIN" (small)
__string__ String_Weak 		[] = { 0xB2, 0x86, 0x82, 0x8C, 0 }; // "Weak"
__string__ String_TEMP 		[] = { 0xAF, 0xA0, 0xA8, 0xAB, 0 }; // "TEMP"
__string__ String_TCRSet 	[] = { 0xAF, 0x9E, 0xAD, 0xBC, 0xAE, 0x86, 0x95, 0 }; // "TCR Set"
__string__ String_POWER 	[] = { 0xAB, 0xAA, 0xB2, 0xA0, 0xAD, 0 }; // "POWER"
__string__ String_BYPASS 	[] = { 0x9D, 0xB4, 0xAB, 0x9C, 0xAE, 0xAE, 0 }; // "BYPASS"
__string__ String_VOLT_s 	[] = { 0x7D, 0x76, 0x73, 0x7B, 0 }; // "VOLT" (small)
__string__ String_COIL_s 	[] = { 0x6A, 0x76, 0x70, 0x73, 0 }; // "COIL" (small)
__string__ String_TIME_s 	[] = { 0x7B, 0x70, 0x74, 0x6C, 0 }; // "TIME" (small)
__string__ String_PUFF_s 	[] = { 0x77, 0x7C, 0x6D, 0x6D, 0 }; // "PUFF" (small)
__string__ String_BATT_s	[] = { 0x69, 0x68, 0x7B, 0x7B, 0 };
__string__ String_VOUT_s	[] = { 0x7D, 0x76, 0x7C, 0x7B, 0 };
__string__ String_TEMP_s	[] = { 0x7B, 0x6C, 0x74, 0x77, 0 };
__string__ String_RES_s		[] = { 0x79, 0x6C, 0x7A, 0 };
__string__ String_START 	[] = { 0xAE, 0xAF, 0x9C, 0xAD, 0xAF, 0 }; // "START"
__string__ String_Contrast	[] = { 0x9E, 0x90, 0x8F, 0x95, 0x93, 0x82, 0x94, 0x95, 0 };
__string__ String_Fireto	[] = { 0xA1, 0x8A, 0x93, 0x86, 0xBC, 0x95, 0x90, 0 };
__string__ String_Edit		[] = { 0xA0, 0x85, 0x8A, 0x95, 0 };
__string__ String_ClkSpeed	[] = { 0x9E, 0x8D, 0x8C, 0xBD, 0xAE, 0x91, 0x86, 0x86, 0x85, 0 };
__string__ String_Menus		[] = { 0xA8, 0x86, 0x8F, 0x96, 0x94, 0 };
__string__ String_Modes		[] = { 0xA8, 0x90, 0x85, 0x86, 0x94, 0 };
__string__ String_TEMP_NI_s	[] = { 0x7B, 0x6C, 0x74, 0x77, 0xBD, 0x75, 0x70, 0x00 };
__string__ String_TEMP_TI_s	[] = { 0x7B, 0x6C, 0x74, 0x77, 0xBD, 0x7B, 0x70, 0x00 };
__string__ String_TEMP_SS_s	[] = { 0x7B, 0x6C, 0x74, 0x77, 0xBD, 0x7A, 0x7A, 0x00 };
__string__ String_TCR_s		[] = { 0x7B, 0x6A, 0x79, 0x00 };
__string__ String_POWER_s	[] = { 0x77, 0x76, 0x7E, 0x6C, 0x79, 0x00 };
__string__ String_BYPASS_s	[] = { 0x69, 0x80, 0x77, 0x68, 0x7A, 0x7A, 0x00 };
__string__ String_START_s	[] = { 0x7A, 0x7B, 0x68, 0x79, 0x7B, 0x00 };
__string__ String_Coils		[] = { 0x9E, 0x90, 0x8A, 0x8D, 0x94, 0 };
__string__ String_Zero_All	[] = { 0xB5, 0x86, 0x93, 0x90, 0xBC, 0x9C, 0x8D, 0x8D, 0 };
__string__ String_Miscs		[] = { 0xA8, 0x8A, 0x94, 0x84, 0x94, 0 };
__string__ String_DateTime	[] = { 0x9F, 0x82, 0x95, 0x86, 0xBD, 0x102, 0xBD, 0xAF, 0x8A, 0x8E, 0x86, 0 };
__string__ String_Cancel	[] = { 0x9E, 0x82, 0x8F, 0x84, 0x86, 0x8D, 0 };
__string__ String_Save		[] = { 0xAE, 0x82, 0x97, 0x86, 0 };
__string__ String_Clock		[] = { 0x9E, 0x8D, 0x90, 0x84, 0x8C, 0 };
__string__ String_Analog_Clk[] = { 0x9C, 0x8F, 0x82, 0x8D, 0x90, 0x88, 0xBD, 0x9E, 0x8D, 0x8C, 0 };
__string__ String_Digit_Clk	[] = { 0x9F, 0x8A, 0x88, 0x8A, 0x95, 0x82, 0x8D, 0xBD, 0x9E, 0x8D, 0x8C, 0 };
__string__ String_3D		[] = { 0x0E, 0x9F, 0 };
__string__ String_Cube		[] = { 0x9E, 0x96, 0x83, 0x86, 0 };
__string__ String_Qix		[] = { 0xAC, 0x8A, 0x99, 0 };
__string__ String_None		[] = { 0xA9, 0x90, 0x8F, 0x86, 0 };
__string__ String_ClkAdjust	[] = { 0x9E, 0x8D, 0x8C, 0xBD, 0x9C, 0x85, 0x8B, 0x96, 0x94, 0x95, 0 };
__string__ String_Screen	[] = { 0xAE, 0x84, 0x93, 0x86, 0x86, 0x8F, 0 };
__string__ String_Min		[] = { 0xA8, 0x8A, 0x8F, 0 };
__string__ String_Expert	[] = { 0xA0, 0x99, 0x91, 0x86, 0x93, 0x95, 0 };
__string__ String_USB		[] = { 0xB0, 0xAE, 0x9D, 0 };
__string__ String_HID		[] = { 0xA3, 0xA4, 0x9F, 0 };
__string__ String_COM		[] = { 0x9E, 0xAA, 0xA8, 0 };
__string__ String_DSK		[] = { 0x9F, 0xAE, 0xA6, 0 };
__string__ String_DBG		[] = { 0x9F, 0x9D, 0xA2, 0 };
__string__ String_Saver		[] = { 0xAE, 0x82, 0x97, 0x86, 0x93, 0 };
__string__ String_Preheat 	[] = { 0xAB, 0x93, 0x86, 0x89, 0x86, 0x82, 0x95, 0	};
__string__ String_Time		[] = { 0xAF, 0x8A, 0x8E, 0x86, 0 };
__string__ String_Pwr		[] = { 0xAB, 0x98, 0x93, 0 };
__string__ String_Manage	[] = { 0xA8, 0x82, 0x8F, 0x82, 0x88, 0x86, 0 };
__string__ String_X32		[] = { 0xB3, 0x0E, 0x0D,0 };
__string__ String_Unit		[] = { 0xB0, 0x8F, 0x8A, 0x95,0 };
__string__ String_Main		[] = { 0xA8, 0x82, 0x8A, 0x8F,0 };
__string__ String_Interface	[] = { 0xA4, 0x8F, 0x95, 0x86, 0x93, 0x87, 0x82, 0x84, 0x86 ,0 };
__string__ String_BattPC	[] = { 0x9D, 0x82, 0x95, 0x95, 0xC2 ,0 };
__string__ String_1Watt		[] = { 0x0C, 0xB2, 0x82, 0x95, 0x95 ,0 };

