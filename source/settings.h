#pragma once

#include <lvgl/lvgl.h>

#define SETTINGS_DIR "sdmc:/config/nx-hbc"

typedef enum {
    RemoteLoaderType_disabled,
    RemoteLoaderType_net,
} RemoteLoaderType;

typedef struct {
    bool use_gyro;
    bool show_limit_warn;
    RemoteLoaderType remote_type;
} settings_t;

lv_res_t settings_init();

settings_t *curr_settings();