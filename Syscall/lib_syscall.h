/*
 * Library: lib_syscall.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 04.06.2014
 * Description: 
 * TODO
 */

#include <inttypes.h>

#ifndef LIB_SYSCALL_H_
#define LIB_SYSCALL_H_

#define SYSCALL_PRINTF 0
#define SYSCALL_LED_ON_0 1
#define SYSCALL_LED_ON_1 2
#define SYSCALL_LED_ON_2 3
#define SYSCALL_LED_ON_3 4
#define SYSCALL_LED_OFF_0 5
#define SYSCALL_LED_OFF_1 6
#define SYSCALL_LED_OFF_2 7
#define SYSCALL_LED_OFF_3 8
#define SYSCALL_GPIO_DIR_SET 9
#define SYSCALL_GPIO_PIN_WRITE 10



#define SYSCALL_PRINTF_TEST 100

typedef struct SyscallArg
{
    uint32_t swiNumber;
    uint32_t arg1;
    uint32_t arg2;
    uint32_t arg3;
    uint32_t arg4;
    uint32_t arg5;
} SyscallArgData;

#pragma SWI_ALIAS(Syscall, 1)
extern void Syscall(SyscallArgData* data);

#endif /* LIB_SYSCALL_H_ */
