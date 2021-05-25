/**************************************************************************/ 
/*                                                                        */ 
/*            Copyright (c) 1996-2019 by Express Logic Inc.               */ 
/*                                                                        */ 
/*  This software is copyrighted by and is the sole property of Express   */ 
/*  Logic, Inc.  All rights, title, ownership, or other interests         */ 
/*  in the software remain the property of Express Logic, Inc.  This      */ 
/*  software may only be used in accordance with the corresponding        */ 
/*  license agreement.  Any unauthorized use, duplication, transmission,  */ 
/*  distribution, or disclosure of this software is expressly forbidden.  */ 
/*                                                                        */
/*  This Copyright notice may not be removed or modified without prior    */ 
/*  written consent of Express Logic, Inc.                                */ 
/*                                                                        */ 
/*  Express Logic, Inc. reserves the right to modify this software        */ 
/*  without notice.                                                       */ 
/*                                                                        */ 
/*  Express Logic, Inc.                     info@expresslogic.com         */
/*  11423 West Bernardo Court               http://www.expresslogic.com   */
/*  San Diego, CA  92127                                                  */
/*                                                                        */
/**************************************************************************/


/**************************************************************************/
/**************************************************************************/
/**                                                                       */ 
/** USBX Component                                                        */ 
/**                                                                       */
/**   HID Keyboard Client                                                 */
/**                                                                       */
/**************************************************************************/
/**************************************************************************/


/**************************************************************************/ 
/*                                                                        */ 
/*  COMPONENT DEFINITION                                   RELEASE        */ 
/*                                                                        */ 
/*    ux_host_class_hid_keyboard.h                        PORTABLE C      */ 
/*                                                           5.9          */ 
/*  AUTHOR                                                                */ 
/*                                                                        */ 
/*    Thierry Giron, Express Logic Inc.                                   */ 
/*                                                                        */ 
/*  DESCRIPTION                                                           */ 
/*                                                                        */ 
/*    This file contains all the header and extern functions used by the  */
/*    USBX HID keyboard client.                                           */ 
/*                                                                        */ 
/*  RELEASE HISTORY                                                       */ 
/*                                                                        */ 
/*    DATE              NAME                      DESCRIPTION             */ 
/*                                                                        */ 
/*  07-01-2007     TCRG                     Initial Version 5.0           */ 
/*  07-04-2008     TCRG                     Modified comment(s),          */ 
/*                                            resulting in version 5.1    */ 
/*  11-11-2008     TCRG                     Modified comment(s),          */ 
/*                                            resulting in version 5.2    */ 
/*  07-10-2009     TCRG                     Modified comment(s), and      */ 
/*                                            added trace logic,          */ 
/*                                            resulting in version 5.3    */ 
/*  06-13-2010     TCRG                     Modified comment(s),          */ 
/*                                            resulting in version 5.4    */ 
/*  09-01-2011     TCRG                     Modified comment(s),          */ 
/*                                            resulting in version 5.5    */ 
/*  10-10-2012     TCRG                     Modified comment(s),          */ 
/*                                            resulting in version 5.6    */ 
/*  06-01-2014     TCRG                     Modified comment(s),          */ 
/*                                            resulting in version 5.7    */ 
/*  06-01-2017     TCRG                     Modified comment(s),          */ 
/*                                            resulting in version 5.8    */ 
/*  08-15-2019     TCRG                     Modified comment(s),          */
/*                                            added keyboard layout and   */
/*                                            layout structure macros,    */
/*                                            added IOCTL to set/change   */
/*                                            layout, added IOCTL to      */
/*                                            enable/disable keys decode, */
/*                                            added key state buffer in   */
/*                                            keyboard struct for changes */
/*                                            detection, added macros for */
/*                                            phantom keys, added macros  */
/*                                            for key up/released and     */
/*                                            function key indicator,     */
/*                                            fixed left arrow value in   */ 
/*                                            keyboard arrays,            */ 
/*                                            resulting in version 5.9    */
/*                                                                        */ 
/**************************************************************************/ 

#ifndef UX_HOST_CLASS_HID_KEYBOARD_H
#define UX_HOST_CLASS_HID_KEYBOARD_H


/* Define HID Keyboard Class constants.  */

#define UX_HOST_CLASS_HID_KEYBOARD_BUFFER_LENGTH            128
#define UX_HOST_CLASS_HID_KEYBOARD_USAGE_ARRAY_LENGTH       64


/* Define HID Keyboard Class LED keys.  */

#define UX_HID_LED_KEY_CAPS_LOCK                            0x39
#define UX_HID_LED_KEY_NUM_LOCK                             0x53
#define UX_HID_LED_KEY_SCROLL_LOCK                          0x47


/* Define HID Keyboard Class Modifier Keys.  */

#define UX_HID_MODIFIER_KEY_LEFT_CONTROL                    0xe0
#define UX_HID_MODIFIER_KEY_LEFT_SHIFT                      0xe1
#define UX_HID_MODIFIER_KEY_LEFT_ALT                        0xe2
#define UX_HID_MODIFIER_KEY_LEFT_GUI                        0xe3
#define UX_HID_MODIFIER_KEY_RIGHT_CONTROL                   0xe4
#define UX_HID_MODIFIER_KEY_RIGHT_SHIFT                     0xe5
#define UX_HID_MODIFIER_KEY_RIGHT_ALT                       0xe6
#define UX_HID_MODIFIER_KEY_RIGHT_GUI                       0xe7


/* Define HID Keyboard States.  */

#define UX_HID_KEYBOARD_STATE_NUM_LOCK                      0x0001
#define UX_HID_KEYBOARD_STATE_CAPS_LOCK                     0x0002
#define UX_HID_KEYBOARD_STATE_SCROLL_LOCK                   0x0004
#define UX_HID_KEYBOARD_STATE_MASK_LOCK                     0x0007

#define UX_HID_KEYBOARD_STATE_LEFT_SHIFT                    0x0100
#define UX_HID_KEYBOARD_STATE_RIGHT_SHIFT                   0x0200
#define UX_HID_KEYBOARD_STATE_SHIFT                         0x0300

#define UX_HID_KEYBOARD_STATE_LEFT_ALT                      0x0400
#define UX_HID_KEYBOARD_STATE_RIGHT_ALT                     0x0800
#define UX_HID_KEYBOARD_STATE_ALT                           0x0a00

#define UX_HID_KEYBOARD_STATE_LEFT_CTRL                     0x1000
#define UX_HID_KEYBOARD_STATE_RIGHT_CTRL                    0x2000
#define UX_HID_KEYBOARD_STATE_CTRL                          0x3000

#define UX_HID_KEYBOARD_STATE_LEFT_GUI                      0x4000
#define UX_HID_KEYBOARD_STATE_RIGHT_GUI                     0x8000
#define UX_HID_KEYBOARD_STATE_GUI                           0xa000

#define UX_HID_KEYBOARD_STATE_KEY_UP                        0x10000
#define UX_HID_KEYBOARD_STATE_FUNCTION                      0x20000

/* Define HID keyboard generic equivalences.  */

#define UX_HID_KEYBOARD_NO_KEY                              0   
#define UX_HID_KEYBOARD_PHANTOM_STATE                       0x01
#define UX_HID_KEYBOARD_KEY_LETTER_A                        0x04
#define UX_HID_KEYBOARD_KEY_LETTER_Z                        0x1D
#define UX_HID_KEYBOARD_KEYS_KEYPAD_LOWER_RANGE             0x54
#define UX_HID_KEYBOARD_KEYS_KEYPAD_UPPER_RANGE             0x67
#define UX_HID_KEYBOARD_KEYS_UPPER_RANGE                    115

/* Define HID keyboard ioctl Functions.  */

#define UX_HID_KEYBOARD_IOCTL_SET_LAYOUT                    0
#define UX_HID_KEYBOARD_IOCTL_DISABLE_KEYS_DECODE           1
#define UX_HID_KEYBOARD_IOCTL_ENABLE_KEYS_DECODE            2

/* Define HID keyboard layout array.  */

#define UX_HID_KEYBOARD_REGULAR_ARRAY_US                                    \
   0,0,0,0,                                                                 \
   'a','b','c','d','e','f','g','h','i','j','k','l','m','n',                 \
   'o','p','q','r','s','t','u','v','w','x','y','z',                         \
   '1','2','3','4','5','6','7','8','9','0',                                 \
   0x0d,0x1b,0x08,0x07,0x20,'-','=','[',']',                                \
   '\\','#',';',0x27,'`',',','.','/',0xf0,                                  \
   0xbb,0xbc,0xbd,0xbe,0xbf,0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,             \
   0x00,0xf1,0x00,0xd2,0xc7,0xc9,0xd3,0xcf,0xd1,0xcd,0xcb,0xd0,0xc8,0xf2,   \
   '/','*','-','+',                                                         \
   0x0d,'1','2','3','4','5','6','7','8','9','0','.','\\',0x00,0x00,'=',     \
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

#define UX_HID_KEYBOARD_SHIFT_ARRAY_US                                      \
   0,0,0,0,                                                                 \
   'A','B','C','D','E','F','G','H','I','J','K','L','M','N',                 \
   'O','P','Q','R','S','T','U','V','W','X','Y','Z',                         \
   '!','@','#','$','%','^','&','*','(',')',                                 \
   0x0d,0x1b,0x08,0x07,0x20,'_','+','{','}',                                \
   '|','~',':','"','~','<','>','?',0xf0,                                    \
   0xbb,0xbc,0xbd,0xbe,0xbf,0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,             \
   0x00,0xf1,0x00,0xd2,0xc7,0xc9,0xd3,0xcf,0xd1,0xcd,0xcb,0xd0,0xc8,0xf2,   \
   '/','*','-','+',                                                         \
   0x0d,'1','2','3','4','5','6','7','8','9','0','.','\\',0x00,0x00,'=',     \
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

#define UX_HID_KEYBOARD_NUMLOCK_ON_ARRAY                                    \
   '/','*','-','+',                                                         \
   0x0d,                                                                    \
   '1','2','3','4','5','6','7','8','9','0',                                 \
   '.','\\',0x00,0x00,'=',

#define UX_HID_KEYBOARD_NUMLOCK_OFF_ARRAY                                   \
   '/','*','-','+',                                                         \
   0x0d,                                                                    \
   0xcf,0xd0,0xd1,0xcb,'5',0xcd,0xc7,0xc8,0xc9,0xd2,                        \
   0xd3,'\\',0x00,0x00,'=',

/* Define HID Keyboard layout (key mapping) structure.  */

typedef struct UX_HOST_CLASS_HID_KEYBOARD_LAYOUT_STRUCT
{

    UCHAR           *ux_host_class_hid_keyboard_layout_regular_array;
    UCHAR           *ux_host_class_hid_keyboard_layout_shift_array;
    UCHAR           *ux_host_class_hid_keyboard_layout_numlock_on_array;
    UCHAR           *ux_host_class_hid_keyboard_layout_numlock_off_array;
    ULONG           ux_host_class_hid_keyboard_layout_keys_upper_range;
    ULONG           ux_host_class_hid_keyboard_layout_letters_lower_range;
    ULONG           ux_host_class_hid_keyboard_layout_letters_upper_range;
    ULONG           ux_host_class_hid_keyboard_layout_keypad_lower_range;
    ULONG           ux_host_class_hid_keyboard_layout_keypad_upper_range;
} UX_HOST_CLASS_HID_KEYBOARD_LAYOUT;

/* Define HID Keyboard Class structure.  */

typedef struct UX_HOST_CLASS_HID_KEYBOARD_STRUCT
{

    ULONG           ux_host_class_hid_keyboard_state;    
    UCHAR           *ux_host_class_hid_keyboard_key_state;
    ULONG           ux_host_class_hid_keyboard_key_count;
    UX_HOST_CLASS_HID   *ux_host_class_hid_keyboard_hid;
    USHORT          ux_host_class_hid_keyboard_id;    
    TX_THREAD       ux_host_class_hid_keyboard_thread;
    TX_SEMAPHORE    ux_host_class_hid_keyboard_semaphore;
    ULONG           ux_host_class_hid_keyboard_alternate_key_state;
    ULONG           ux_host_class_hid_keyboard_led_mask;
    VOID            *ux_host_class_hid_keyboard_thread_stack;
    ULONG           *ux_host_class_hid_keyboard_usage_array;
    ULONG           *ux_host_class_hid_keyboard_usage_array_head;
    ULONG           *ux_host_class_hid_keyboard_usage_array_tail;
    UX_HOST_CLASS_HID_KEYBOARD_LAYOUT *ux_host_class_hid_keyboard_layout;
    ULONG           ux_host_class_hid_keyboard_keys_decode_disable;
} UX_HOST_CLASS_HID_KEYBOARD;

/* Define HID Keyboard Class function prototypes.  */

VOID    _ux_host_class_hid_keyboard_callback(UX_HOST_CLASS_HID_REPORT_CALLBACK *callback);
UINT    _ux_host_class_hid_keyboard_activate(UX_HOST_CLASS_HID_CLIENT_COMMAND *command);
UINT    _ux_host_class_hid_keyboard_deactivate(UX_HOST_CLASS_HID_CLIENT_COMMAND *command);
UINT    _ux_host_class_hid_keyboard_entry(UX_HOST_CLASS_HID_CLIENT_COMMAND *command);
VOID    _ux_host_class_hid_keyboard_thread(ULONG thread_entry);
UINT    _ux_host_class_hid_keyboard_key_get(UX_HOST_CLASS_HID_KEYBOARD *keyboard_instance, 
                                            ULONG *keyboard_key, ULONG *keyboard_state);
UINT    _ux_host_class_hid_keyboard_ioctl(UX_HOST_CLASS_HID_KEYBOARD *keyboard_instance,
                                        ULONG ioctl_function, VOID *parameter);

/* Define HID Keyboard Class API prototypes.  */

#define ux_host_class_hid_keyboard_entry                   _ux_host_class_hid_keyboard_entry
#define ux_host_class_hid_keyboard_key_get                 _ux_host_class_hid_keyboard_key_get
#define ux_host_class_hid_keyboard_ioctl                   _ux_host_class_hid_keyboard_ioctl

#endif

