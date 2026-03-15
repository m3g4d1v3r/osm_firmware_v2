#include <inttypes.h>
#include <stdbool.h>

#ifndef comms_name
#define comms_name          rp2040_comms
#endif // comms_name


bool osm_rp2040_comms_send(char* data, uint16_t len);
void osm_rp2040_comms_init(void);
bool osm_rp2040_comms_send_ready(void);
bool osm_rp2040_comms_send_allowed(void);
void osm_rp2040_comms_reset(void);
bool osm_rp2040_comms_get_connected(void);
void osm_rp2040_comms_process(char* message);
void osm_rp2040_comms_loop_iteration(void);
void osm_rp2040_comms_power_down(void);
bool osm_rp2040_comms_get_unix_time(int64_t * ts);
bool osm_rp2040_comms_send_str(char* str);
bool osm_rp2040_comms_persist_config_cmp(void* d0, void* d1);
bool osm_rp2040_comms_get_id(char* str, uint8_t len);
