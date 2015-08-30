#ifndef __UCOAP_H__
#define __UCOAP_H__

#ifdef __cplusplus
extern "C" {
#endif

#define COAP_RET_INVALID_PARAMETERS              -1
#define COAP_RET_UNRESOLVED_HOST                 -2
#define COAP_RET_SOCKET_INIT_FAILED              -3

/* Common API */

int coap_connect(char * p_str_addr, int port);
int coap_close(int s);
int coap_setsockopt(int s, );

/* Synchronous API */

int coap_send(int s, char * p_method, char * p_uri, char * p_data, int len);
int coap_recv(int s, );

/* Asynchronous API */

// coap_on_write
// coap_on_read
// coap_check_timeouts
// coap_is_valid_packet
// coap_process_packet

#ifdef __cplusplus
}
#endif

#endif
