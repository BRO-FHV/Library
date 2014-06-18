/*
 * Library: lib_eth.c
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 14.06.2014
 * Description: 
 * TODO
 */

#include <inttypes.h>
#include  <basic.h>
#include "../Syscall/lib_syscall.h"
#include <eth/dr_eth_udp.h>

void SwiUdpInit(uint32_t port) {
	SyscallArgData data;
	data.swiNumber = SYSCALL_UDP_INIT;
	data.arg1 = port;
	Syscall(&data);
}
upd_package_t* SwiUdpGetData(uint32_t port) {
	SyscallArgData data;
	data.swiNumber = SYSCALL_UDP_GETDATA;
	data.arg1 = port;
	Syscall(&data);

	return (upd_package_t*) data.result;
}
void SwiUdpSendData(uint8_t receiver[], uint32_t port, uint8_t* data,
		uint32_t datalen) {

	SyscallArgData dataarg;
	dataarg.swiNumber = SYSCALL_UDP_SENDDATA;
	dataarg.arg1 = port;
	dataarg.arg2 = (uint32_t)receiver;
	dataarg.arg3 = (uint32_t)data;
	dataarg.arg4 = datalen;
	Syscall(&dataarg);
}
tBoolean SwiUdpHasData(uint32_t port) {

	SyscallArgData data;
		data.swiNumber = SYSCALL_UDP_HASDATA;
		data.arg1 = port;
		Syscall(&data);

		return (tBoolean) data.result;

}

