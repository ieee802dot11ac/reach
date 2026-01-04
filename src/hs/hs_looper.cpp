#include "hs.h"

c_hs_looper g_hs_looper;

void hs_looper_setup(const char *cc) { g_hs_looper.set_loop_expression(cc); }
