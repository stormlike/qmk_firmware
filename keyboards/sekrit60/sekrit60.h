#ifndef _60XT_H
#define _60XT_H

#include "quantum.h"
#include "led.h"

inline void _sekrit60_caps_led_on(void)      { DDRB |=  (1<<0); PORTB &= ~(1<<0); }
inline void _sekrit60_esc_led_on(void)    	{ DDRB |=  (1<<7); PORTB &= ~(1<<7); }

inline void _sekrit60_caps_led_off(void)     { DDRB &= ~(1<<0); PORTB &= ~(1<<0); }
inline void _sekrit60_esc_led_off(void)   	{ DDRB &= ~(1<<7); PORTB &= ~(1<<7); }

#define LAYOUT( \
    K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F,\
    K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, \
    K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, \
    K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D,      K3F, \
    K42,      K44,                K45,                     K49,      K4B \
) { \
    { K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
    { K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, KC_NO,  K3F }, \
    { K42, KC_NO, K44, KC_NO, KC_NO, KC_NO, KC_NO, K45, KC_NO, KC_NO, KC_NO, KC_NO, K49, K4B }  \
}


#endif
