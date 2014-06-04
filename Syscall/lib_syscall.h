/*
 * Library: lib_syscall.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 04.06.2014
 * Description: 
 * TODO
 */

#ifndef LIB_SYSCALL_H_
#define LIB_SYSCALL_H_

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
