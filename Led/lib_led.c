/*
 * Library: lib_led.c
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 09.06.2014
 * Description: 
 * TODO
 */

#include <stdio.h>
#include "lib_led.h"
#include "../Syscall/lib_syscall.h"

void lib_led_on_0() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LED_ON_0;
	Syscall(&data);
}

void lib_led_on_1() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LED_ON_1;
	Syscall(&data);
}

void lib_led_on_2() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LED_ON_2;
	Syscall(&data);
}

void lib_led_on_3() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LED_ON_3;
	Syscall(&data);
}

void lib_led_off_0() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LED_OFF_0;
	Syscall(&data);
}

void lib_led_off_1() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LED_OFF_1;
	Syscall(&data);
}

void lib_led_off_2() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LED_OFF_2;
	Syscall(&data);
}

void lib_led_off_3() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LED_OFF_3;
	Syscall(&data);
}

void lib_led_init_0() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LED_INIT_LED_0;
	Syscall(&data);
}

void lib_led_init_1() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LED_INIT_LED_1;
	Syscall(&data);
}

void lib_led_init_2() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LED_INIT_LED_2;
	Syscall(&data);
}

void lib_led_init_3() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LED_INIT_LED_3;
	Syscall(&data);
}

void lib_led_init_register() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LED_INIT_REGISTER;
	Syscall(&data);
}

void lib_leds_init() {
	SyscallArgData data;
	data.swiNumber = SYSCALL_LEDS_INIT;
	Syscall(&data);
}
