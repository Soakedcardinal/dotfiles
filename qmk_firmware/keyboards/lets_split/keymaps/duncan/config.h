
#pragma once

#define USE_SERIAL
//#define MASTER_LEFT
#define EE_HANDS

	        
// underglow
#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 10


//makes it possible to do rolling combos (zx) with keys that convert to other keys on hold, by enforcing the TAPPING_TERM for both keys.
//#define IGNORE_MOD_TAP_INTERRUPT
//#define IGNORE_MOD_TAP_INTERRUPT_PER_KEY


//makes tap and hold keys trigger the hold if another key is pressed before releasing, even if it hasn't hit the TAPPING_TERM
//#define PERMISSIVE_HOLD
#define PREVENT_STUCK_MODIFIERS


//The tapping term defines for how long in milliseconds you need to hold a key before the tap becomes a hold
#define TAPPING_TERM 200

