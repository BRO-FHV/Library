/*
 * Library: lib_eth.h
 * Part of BRO Project, 2014 <<https://github.com/BRO-FHV>>
 *
 * Created on: 14.06.2014
 * Description: 
 * TODO
 */

#ifndef LIB_ETH_H_
#define LIB_ETH_H_

#include "../lib_basic.h"
#include <inttypes.h>

typedef struct {
	uint8_t* data;
	uint32_t len;
	uint8_t sender[4];
} lib_udp_package_t;

void lib_udp_init(uint32_t port);
lib_udp_package_t* lib_udp_get_data(uint32_t port);
void lib_udp_send_data(uint8_t receiver[],uint32_t port,uint8_t* data, uint32_t datalen);
lib_boolean lib_udp_has_data(uint32_t port);


#endif /* LIB_ETH_H_ */
