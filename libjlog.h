/*
libjlog - (C) Copyright 2024 - 2025 Ben Daws. <bendawsdev AT gmail DOT com>
*/

enum OUTPUT_TYPE {
    OUTPUT_INFO = 1,
    OUTPUT_WARN = 2,
    OUTPUT_ERROR = 3,
    OUTPUT_PANIC = 4,
};

void  libjlog_init(void printing_callback, char *system_name);

char *libjlog_output_tostr(enum OUTPUT_TYPE output_type);
void  libjlog_printf(char *PROCESS, enum OUTPUT_TYPE output_type, char *text);