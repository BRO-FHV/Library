/*
 * Library: lib_eth.c
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 14.06.2014
 * Description: 
 * TODO
 */

#include <inttypes.h>
#include "../lib_basic.h"
#include "lib_eth.h"
#include "../Syscall/lib_syscall.h"

void lib_udp_init(uint32_t port) {
	SyscallArgData data;
	data.swiNumber = SYSCALL_UDP_INIT;
	data.arg1 = port;
	Syscall(&data);
}

lib_udp_package_t* lib_udp_get_data(uint32_t port) {
	SyscallArgData data;
	data.swiNumber = SYSCALL_UDP_GETDATA;
	data.arg1 = port;
	Syscall(&data);

	return (lib_udp_package_t*) data.result;
}
void lib_udp_send_data(uint8_t receiver[], uint32_t port, uint8_t* data, uint32_t datalen) {
	SyscallArgData dataarg;
	dataarg.swiNumber = SYSCALL_UDP_SENDDATA;
	dataarg.arg1 = port;
	dataarg.arg2 = (uint32_t) receiver;
	dataarg.arg3 = (uint32_t) data;
	dataarg.arg4 = datalen;
	Syscall(&dataarg);
}

lib_boolean lib_udp_has_data(uint32_t port) {

	SyscallArgData data;
	data.swiNumber = SYSCALL_UDP_HASDATA;
	data.arg1 = port;
	Syscall(&data);

	return (lib_boolean) data.result;

}

