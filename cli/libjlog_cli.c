/*
libjlog - (C) Copyright 2024 - 2025 Ben Daws. <bendawsdev AT gmail DOT com>
*/

#include "libjlog_cli_config.h"
#include "../libjlog.h"

void main(int argc, char* argv) {
    libjlog_init(printing_fn, configured_system_name);
    libjlog_printf("libjlog cli test", ("You provided %i args. Hello world!", argc), 1);

    return 0;
}