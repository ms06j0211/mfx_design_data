/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x8A, 0xDB, 0x0D, 0x9F, 0x7E, 0xB6, 0x7F, 0x1A}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

#define USB_SUSPEND_WAKEUP_DELAY 5000

#ifdef RGB_MATRIX_ENABLE
#define RGBLIGHT_LAYERS // レイヤーとの連動機能の有効化
#define WS2812_PIO_USE_PIO1 // RP2040用に追加
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#endif