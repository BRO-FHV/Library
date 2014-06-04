/*
 * Library: lib_console.c
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: June 04, 2014
 * Description:
 */

#include <stdio.h>
#include <inttypes.h>
#include "lib_console.h"
#include "../Syscall/lib_syscall.h"

void lib_print(const char* format, ...) {
	char parsed[API_PRINTF_MAXLENGTH];
	va_list args;
	va_start(args, format);
	vsprintf(parsed, format, args);
	va_end(args);

	SyscallArgData data;
	data.swiNumber = SYSCALL_STDIO_PRINTF;
	data.arg1 = (uint32_t) & parsed;

	Syscall(&data);
}

void lib_print_test(void)
{
	SyscallArgData data;
	data.swiNumber = 'lib_print_test: Testmessage!';

	Syscall(&data);
}
