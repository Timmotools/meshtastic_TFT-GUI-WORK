/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_RADIOCONFIG_PB_H_INCLUDED
#define PB_RADIOCONFIG_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _RegionCode {
    RegionCode_Unset = 0,
    RegionCode_US = 1,
    RegionCode_EU433 = 2,
    RegionCode_EU865 = 3,
    RegionCode_CN = 4,
    RegionCode_JP = 5,
    RegionCode_ANZ = 6,
    RegionCode_KR = 7,
    RegionCode_TW = 8,
    RegionCode_RU = 9
} RegionCode;

typedef enum _ChargeCurrent {
    ChargeCurrent_MAUnset = 0,
    ChargeCurrent_MA100 = 1,
    ChargeCurrent_MA190 = 2,
    ChargeCurrent_MA280 = 3,
    ChargeCurrent_MA360 = 4,
    ChargeCurrent_MA450 = 5,
    ChargeCurrent_MA550 = 6,
    ChargeCurrent_MA630 = 7,
    ChargeCurrent_MA700 = 8,
    ChargeCurrent_MA780 = 9,
    ChargeCurrent_MA880 = 10,
    ChargeCurrent_MA960 = 11,
    ChargeCurrent_MA1000 = 12,
    ChargeCurrent_MA1080 = 13,
    ChargeCurrent_MA1160 = 14,
    ChargeCurrent_MA1240 = 15,
    ChargeCurrent_MA1320 = 16
} ChargeCurrent;

typedef enum _GpsOperation {
    GpsOperation_GpsOpUnset = 0,
    GpsOperation_GpsOpStationary = 1,
    GpsOperation_GpsOpMobile = 2,
    GpsOperation_GpsOpTimeOnly = 3,
    GpsOperation_GpsOpDisabled = 4
} GpsOperation;

typedef enum _LocationSharing {
    LocationSharing_LocUnset = 0,
    LocationSharing_LocEnabled = 1,
    LocationSharing_LocDisabled = 2
} LocationSharing;

typedef enum _RadioConfig_UserPreferences_EnvironmentalMeasurementSensorType {
    RadioConfig_UserPreferences_EnvironmentalMeasurementSensorType_DHT11 = 0
} RadioConfig_UserPreferences_EnvironmentalMeasurementSensorType;

/* Struct definitions */
typedef struct _RadioConfig_UserPreferences {
    uint32_t position_broadcast_secs;
    uint32_t send_owner_interval;
    uint32_t wait_bluetooth_secs;
    uint32_t screen_on_secs;
    uint32_t phone_timeout_secs;
    uint32_t phone_sds_timeout_sec;
    uint32_t mesh_sds_timeout_secs;
    uint32_t sds_secs;
    uint32_t ls_secs;
    uint32_t min_wake_secs;
    char wifi_ssid[33];
    char wifi_password[64];
    bool wifi_ap_mode;
    RegionCode region;
    ChargeCurrent charge_current;
    LocationSharing location_share;
    GpsOperation gps_operation;
    uint32_t gps_update_interval;
    uint32_t gps_attempt_time;
    bool is_router;
    bool is_low_power;
    bool fixed_position;
    bool serial_disabled;
    bool factory_reset;
    bool debug_log_enabled;
    pb_size_t ignore_incoming_count;
    uint32_t ignore_incoming[3];
    bool serialplugin_enabled;
    bool serialplugin_echo;
    uint32_t serialplugin_rxd;
    uint32_t serialplugin_txd;
    uint32_t serialplugin_timeout;
    uint32_t serialplugin_mode;
    bool ext_notification_plugin_enabled;
    uint32_t ext_notification_plugin_output_ms;
    uint32_t ext_notification_plugin_output;
    bool ext_notification_plugin_active;
    bool ext_notification_plugin_alert_message;
    bool ext_notification_plugin_alert_bell;
    bool range_test_plugin_enabled;
    uint32_t range_test_plugin_sender;
    bool range_test_plugin_save;
    uint32_t store_forward_plugin_records;
    bool environmental_measurement_plugin_measurement_enabled;
    bool environmental_measurement_plugin_screen_enabled;
    uint32_t environmental_measurement_plugin_read_error_count_threshold;
    uint32_t environmental_measurement_plugin_update_interval;
    uint32_t environmental_measurement_plugin_recovery_interval;
    bool environmental_measurement_plugin_display_farenheit;
    RadioConfig_UserPreferences_EnvironmentalMeasurementSensorType environmental_measurement_plugin_sensor_type;
    uint32_t environmental_measurement_plugin_sensor_pin;
    bool store_forward_plugin_enabled;
} RadioConfig_UserPreferences;

typedef struct _RadioConfig {
    bool has_preferences;
    RadioConfig_UserPreferences preferences;
} RadioConfig;


/* Helper constants for enums */
#define _RegionCode_MIN RegionCode_Unset
#define _RegionCode_MAX RegionCode_RU
#define _RegionCode_ARRAYSIZE ((RegionCode)(RegionCode_RU+1))

#define _ChargeCurrent_MIN ChargeCurrent_MAUnset
#define _ChargeCurrent_MAX ChargeCurrent_MA1320
#define _ChargeCurrent_ARRAYSIZE ((ChargeCurrent)(ChargeCurrent_MA1320+1))

#define _GpsOperation_MIN GpsOperation_GpsOpUnset
#define _GpsOperation_MAX GpsOperation_GpsOpDisabled
#define _GpsOperation_ARRAYSIZE ((GpsOperation)(GpsOperation_GpsOpDisabled+1))

#define _LocationSharing_MIN LocationSharing_LocUnset
#define _LocationSharing_MAX LocationSharing_LocDisabled
#define _LocationSharing_ARRAYSIZE ((LocationSharing)(LocationSharing_LocDisabled+1))

#define _RadioConfig_UserPreferences_EnvironmentalMeasurementSensorType_MIN RadioConfig_UserPreferences_EnvironmentalMeasurementSensorType_DHT11
#define _RadioConfig_UserPreferences_EnvironmentalMeasurementSensorType_MAX RadioConfig_UserPreferences_EnvironmentalMeasurementSensorType_DHT11
#define _RadioConfig_UserPreferences_EnvironmentalMeasurementSensorType_ARRAYSIZE ((RadioConfig_UserPreferences_EnvironmentalMeasurementSensorType)(RadioConfig_UserPreferences_EnvironmentalMeasurementSensorType_DHT11+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define RadioConfig_init_default                 {false, RadioConfig_UserPreferences_init_default}
#define RadioConfig_UserPreferences_init_default {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "", "", 0, _RegionCode_MIN, _ChargeCurrent_MIN, _LocationSharing_MIN, _GpsOperation_MIN, 0, 0, 0, 0, 0, 0, 0, 0, 0, {0, 0, 0}, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, _RadioConfig_UserPreferences_EnvironmentalMeasurementSensorType_MIN, 0, 0}
#define RadioConfig_init_zero                    {false, RadioConfig_UserPreferences_init_zero}
#define RadioConfig_UserPreferences_init_zero    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "", "", 0, _RegionCode_MIN, _ChargeCurrent_MIN, _LocationSharing_MIN, _GpsOperation_MIN, 0, 0, 0, 0, 0, 0, 0, 0, 0, {0, 0, 0}, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, _RadioConfig_UserPreferences_EnvironmentalMeasurementSensorType_MIN, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define RadioConfig_UserPreferences_position_broadcast_secs_tag 1
#define RadioConfig_UserPreferences_send_owner_interval_tag 2
#define RadioConfig_UserPreferences_wait_bluetooth_secs_tag 4
#define RadioConfig_UserPreferences_screen_on_secs_tag 5
#define RadioConfig_UserPreferences_phone_timeout_secs_tag 6
#define RadioConfig_UserPreferences_phone_sds_timeout_sec_tag 7
#define RadioConfig_UserPreferences_mesh_sds_timeout_secs_tag 8
#define RadioConfig_UserPreferences_sds_secs_tag 9
#define RadioConfig_UserPreferences_ls_secs_tag  10
#define RadioConfig_UserPreferences_min_wake_secs_tag 11
#define RadioConfig_UserPreferences_wifi_ssid_tag 12
#define RadioConfig_UserPreferences_wifi_password_tag 13
#define RadioConfig_UserPreferences_wifi_ap_mode_tag 14
#define RadioConfig_UserPreferences_region_tag   15
#define RadioConfig_UserPreferences_charge_current_tag 16
#define RadioConfig_UserPreferences_location_share_tag 32
#define RadioConfig_UserPreferences_gps_operation_tag 33
#define RadioConfig_UserPreferences_gps_update_interval_tag 34
#define RadioConfig_UserPreferences_gps_attempt_time_tag 36
#define RadioConfig_UserPreferences_is_router_tag 37
#define RadioConfig_UserPreferences_is_low_power_tag 38
#define RadioConfig_UserPreferences_fixed_position_tag 39
#define RadioConfig_UserPreferences_serial_disabled_tag 40
#define RadioConfig_UserPreferences_factory_reset_tag 100
#define RadioConfig_UserPreferences_debug_log_enabled_tag 101
#define RadioConfig_UserPreferences_ignore_incoming_tag 103
#define RadioConfig_UserPreferences_serialplugin_enabled_tag 120
#define RadioConfig_UserPreferences_serialplugin_echo_tag 121
#define RadioConfig_UserPreferences_serialplugin_rxd_tag 122
#define RadioConfig_UserPreferences_serialplugin_txd_tag 123
#define RadioConfig_UserPreferences_serialplugin_timeout_tag 124
#define RadioConfig_UserPreferences_serialplugin_mode_tag 125
#define RadioConfig_UserPreferences_ext_notification_plugin_enabled_tag 126
#define RadioConfig_UserPreferences_ext_notification_plugin_output_ms_tag 127
#define RadioConfig_UserPreferences_ext_notification_plugin_output_tag 128
#define RadioConfig_UserPreferences_ext_notification_plugin_active_tag 129
#define RadioConfig_UserPreferences_ext_notification_plugin_alert_message_tag 130
#define RadioConfig_UserPreferences_ext_notification_plugin_alert_bell_tag 131
#define RadioConfig_UserPreferences_range_test_plugin_enabled_tag 132
#define RadioConfig_UserPreferences_range_test_plugin_sender_tag 133
#define RadioConfig_UserPreferences_range_test_plugin_save_tag 134
#define RadioConfig_UserPreferences_store_forward_plugin_records_tag 137
#define RadioConfig_UserPreferences_environmental_measurement_plugin_measurement_enabled_tag 140
#define RadioConfig_UserPreferences_environmental_measurement_plugin_screen_enabled_tag 141
#define RadioConfig_UserPreferences_environmental_measurement_plugin_read_error_count_threshold_tag 142
#define RadioConfig_UserPreferences_environmental_measurement_plugin_update_interval_tag 143
#define RadioConfig_UserPreferences_environmental_measurement_plugin_recovery_interval_tag 144
#define RadioConfig_UserPreferences_environmental_measurement_plugin_display_farenheit_tag 145
#define RadioConfig_UserPreferences_environmental_measurement_plugin_sensor_type_tag 146
#define RadioConfig_UserPreferences_environmental_measurement_plugin_sensor_pin_tag 147
#define RadioConfig_UserPreferences_store_forward_plugin_enabled_tag 148
#define RadioConfig_preferences_tag              1

/* Struct field encoding specification for nanopb */
#define RadioConfig_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  preferences,       1)
#define RadioConfig_CALLBACK NULL
#define RadioConfig_DEFAULT NULL
#define RadioConfig_preferences_MSGTYPE RadioConfig_UserPreferences

#define RadioConfig_UserPreferences_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   position_broadcast_secs,   1) \
X(a, STATIC,   SINGULAR, UINT32,   send_owner_interval,   2) \
X(a, STATIC,   SINGULAR, UINT32,   wait_bluetooth_secs,   4) \
X(a, STATIC,   SINGULAR, UINT32,   screen_on_secs,    5) \
X(a, STATIC,   SINGULAR, UINT32,   phone_timeout_secs,   6) \
X(a, STATIC,   SINGULAR, UINT32,   phone_sds_timeout_sec,   7) \
X(a, STATIC,   SINGULAR, UINT32,   mesh_sds_timeout_secs,   8) \
X(a, STATIC,   SINGULAR, UINT32,   sds_secs,          9) \
X(a, STATIC,   SINGULAR, UINT32,   ls_secs,          10) \
X(a, STATIC,   SINGULAR, UINT32,   min_wake_secs,    11) \
X(a, STATIC,   SINGULAR, STRING,   wifi_ssid,        12) \
X(a, STATIC,   SINGULAR, STRING,   wifi_password,    13) \
X(a, STATIC,   SINGULAR, BOOL,     wifi_ap_mode,     14) \
X(a, STATIC,   SINGULAR, UENUM,    region,           15) \
X(a, STATIC,   SINGULAR, UENUM,    charge_current,   16) \
X(a, STATIC,   SINGULAR, UENUM,    location_share,   32) \
X(a, STATIC,   SINGULAR, UENUM,    gps_operation,    33) \
X(a, STATIC,   SINGULAR, UINT32,   gps_update_interval,  34) \
X(a, STATIC,   SINGULAR, UINT32,   gps_attempt_time,  36) \
X(a, STATIC,   SINGULAR, BOOL,     is_router,        37) \
X(a, STATIC,   SINGULAR, BOOL,     is_low_power,     38) \
X(a, STATIC,   SINGULAR, BOOL,     fixed_position,   39) \
X(a, STATIC,   SINGULAR, BOOL,     serial_disabled,  40) \
X(a, STATIC,   SINGULAR, BOOL,     factory_reset,   100) \
X(a, STATIC,   SINGULAR, BOOL,     debug_log_enabled, 101) \
X(a, STATIC,   REPEATED, UINT32,   ignore_incoming, 103) \
X(a, STATIC,   SINGULAR, BOOL,     serialplugin_enabled, 120) \
X(a, STATIC,   SINGULAR, BOOL,     serialplugin_echo, 121) \
X(a, STATIC,   SINGULAR, UINT32,   serialplugin_rxd, 122) \
X(a, STATIC,   SINGULAR, UINT32,   serialplugin_txd, 123) \
X(a, STATIC,   SINGULAR, UINT32,   serialplugin_timeout, 124) \
X(a, STATIC,   SINGULAR, UINT32,   serialplugin_mode, 125) \
X(a, STATIC,   SINGULAR, BOOL,     ext_notification_plugin_enabled, 126) \
X(a, STATIC,   SINGULAR, UINT32,   ext_notification_plugin_output_ms, 127) \
X(a, STATIC,   SINGULAR, UINT32,   ext_notification_plugin_output, 128) \
X(a, STATIC,   SINGULAR, BOOL,     ext_notification_plugin_active, 129) \
X(a, STATIC,   SINGULAR, BOOL,     ext_notification_plugin_alert_message, 130) \
X(a, STATIC,   SINGULAR, BOOL,     ext_notification_plugin_alert_bell, 131) \
X(a, STATIC,   SINGULAR, BOOL,     range_test_plugin_enabled, 132) \
X(a, STATIC,   SINGULAR, UINT32,   range_test_plugin_sender, 133) \
X(a, STATIC,   SINGULAR, BOOL,     range_test_plugin_save, 134) \
X(a, STATIC,   SINGULAR, UINT32,   store_forward_plugin_records, 137) \
X(a, STATIC,   SINGULAR, BOOL,     environmental_measurement_plugin_measurement_enabled, 140) \
X(a, STATIC,   SINGULAR, BOOL,     environmental_measurement_plugin_screen_enabled, 141) \
X(a, STATIC,   SINGULAR, UINT32,   environmental_measurement_plugin_read_error_count_threshold, 142) \
X(a, STATIC,   SINGULAR, UINT32,   environmental_measurement_plugin_update_interval, 143) \
X(a, STATIC,   SINGULAR, UINT32,   environmental_measurement_plugin_recovery_interval, 144) \
X(a, STATIC,   SINGULAR, BOOL,     environmental_measurement_plugin_display_farenheit, 145) \
X(a, STATIC,   SINGULAR, UENUM,    environmental_measurement_plugin_sensor_type, 146) \
X(a, STATIC,   SINGULAR, UINT32,   environmental_measurement_plugin_sensor_pin, 147) \
X(a, STATIC,   SINGULAR, BOOL,     store_forward_plugin_enabled, 148)
#define RadioConfig_UserPreferences_CALLBACK NULL
#define RadioConfig_UserPreferences_DEFAULT NULL

extern const pb_msgdesc_t RadioConfig_msg;
extern const pb_msgdesc_t RadioConfig_UserPreferences_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define RadioConfig_fields &RadioConfig_msg
#define RadioConfig_UserPreferences_fields &RadioConfig_UserPreferences_msg

/* Maximum encoded size of messages (where known) */
#define RadioConfig_size                         351
#define RadioConfig_UserPreferences_size         348

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
