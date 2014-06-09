/*
 * Library: lib_gpio.c
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 09.06.2014
 * Description: 
 * TODO
 */

#include <stdio.h>
#include <inttypes.h>
#include "lib_gpio.h"
#include "../Syscall/lib_syscall.h"


void lib_gpio_dir_mode_set(unsigned int baseAdd,unsigned int pinNumber,unsigned int pinDirection){
	SyscallArgData data;
	data.swiNumber = SYSCALL_GPIO_DIR_SET;
	data.arg1 = baseAdd;
	data.arg2 = pinNumber;
	data.arg3 = pinDirection;
	Syscall(&data);
}

void lib_gpio_pin_write(unsigned int baseAdd, unsigned int pinNumber,unsigned int pinValue){
	SyscallArgData data;
	data.swiNumber = SYSCALL_GPIO_PIN_WRITE;
	data.arg1 = baseAdd;
	data.arg2 = pinNumber;
	data.arg3 = pinValue;
	Syscall(&data);
}

unsigned int lib_gpio_pin_read(unsigned int baseAdd, unsigned int pinNumber){
	SyscallArgData data;
	data.swiNumber = SYSCALL_GPIO_PIN_READ;
	data.arg1 = baseAdd;
	data.arg2 = pinNumber;
	Syscall(&data);
}
