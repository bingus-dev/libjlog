#include "libjlog.h"

void configured_callback;
char configured_system_name[64];

void libjlog_init(void printing_callback, char *system_name) {
    configured_callback = printing_callback;
    configured_system_name = system_name;
}

char *libjlog_output_tostr(enum OUTPUT_TYPE output_type) {
    switch (output_type) {
        case 1:
            return "info";
            break;
        case 2:
            return "warning";
            break;
        case 3:
            return "error";
            break;
        case 4:
            return "panic";
            break;
        default:
            return "error";
            break;
    }
}

void libjlog_printf(char *PROCESS, enum OUTPUT_TYPE output_type, char *text) {
    configured_callback(("[%s@%s / %s]: %s", PROCESS, configured_system_name, libjlog_output_tostr(output_type), text));
}