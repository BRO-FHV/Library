/*
 * Library: lib_gpio.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 09.06.2014
 * Description: 
 * TODO
 */

#ifndef LIB_GPIO_H_
#define LIB_GPIO_H_

/**
 * Set a gpio pin
 */
void lib_gpio_dir_mode_set(unsigned int baseAdd,unsigned int pinNumber,unsigned int pinDirection);

/**
 * Write on a gpio pin
 */
void lib_gpio_pin_write(unsigned int baseAdd, unsigned int pinNumber,unsigned int pinValue);

/**
 * Read from a gpio pin
 */
unsigned int lib_gpio_pin_read(unsigned int baseAdd, unsigned int pinNumber);

#endif /* LIB_GPIO_H_ */
