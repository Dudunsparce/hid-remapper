#ifndef _CONFIG_H_
#define _CONFIG_H_

#include <stdint.h>
#include <types.h>

void load_config(const uint8_t* persisted_config);
PersistConfigReturnCode persist_config();

void load_cached_device_info();
void persist_cached_device_info();
bool get_cached_device_info(cached_device_info_t* info);

uint16_t handle_get_report1(uint8_t report_id, uint8_t* buffer, uint16_t reqlen);
void handle_set_report1(uint8_t report_id, uint8_t const* buffer, uint16_t bufsize);

void reset_resolution_multiplier();

#endif
