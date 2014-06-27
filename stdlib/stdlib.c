/*
 * Library: stdlib.c
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 27.06.2014
 * Description: 
 * TODO
 */

#include "../Syscall/lib_syscall.h"

void lib_free(void* pointer) {
	SyscallArgData dataarg;
	dataarg.swiNumber = SYCALL_STDLIB_FREE;
	dataarg.arg1 = (uint32_t) pointer;

	Syscall(&dataarg);
}

void* lib_malloc(int length) {
	SyscallArgData dataarg;
	dataarg.swiNumber = SYCALL_STDLIB_MALLOC;
	dataarg.arg1 = length;

	Syscall(&dataarg);

	return (void*) dataarg.result;
}
