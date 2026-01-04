#pragma once

#include "types.h"

typedef struct hs_function_definition {
    u8 pad[0x14 - 0x0];
    char *unk_0x14;
} hs_function_definition;

extern const long hs_function_table_count;
extern const hs_function_definition **hs_function_table;

void hs_get_function_parameters_string(short idx, char *buf, long len);

class c_hs_looper {
public:
    void set_loop_expression(char const *);

private:
    long create_suspended_loop_thread(void);
};
