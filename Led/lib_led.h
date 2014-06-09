/*
 * Library: lib_led.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 09.06.2014
 * Description: 
 * TODO
 */

#ifndef LIB_LED_H_
#define LIB_LED_H_

/**
 * Turns led 0 on
 */
void lib_led_on_0();

/**
 * Turns led 1 on
 */
void lib_led_on_1();
/**
 * Turns led 2 on
 */
void lib_led_on_2();
/**
 * Turns led 3 on
 */
void lib_led_on_3();

/**
 * Turns led 0 off
 */
void lib_led_off_0();

/**
 * Turns led 1 off
 */
void lib_led_off_1();
/**
 * Turns led 2 off
 */
void lib_led_off_2();
/**
 * Turns led 3 off
 */
void lib_led_off_3();

/**
 * Init led 0
 */
void lib_led_init_0();

/**
 * Init led 1
 */
void lib_led_init_1();

/**
 * Init led 2
 */
void lib_led_init_2();

/**
 * Init led 3
 */
void lib_led_init_3();

/**
 * Init base registers for leds
 */
void lib_led_init_register();

/**
 * Inits register and all leds
 */
void lib_leds_init();

#endif /* LIB_LED_H_ */
