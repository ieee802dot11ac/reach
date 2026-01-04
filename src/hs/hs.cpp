#include "baselib/cseries_string.h"
#include "hs.h"
#include <stdio.h>

void hs_tokens_enumerate_add_string(const char *) {}

void hs_doc() {
    FILE *docfile = fopen("hs_doc.txt", "w");
    if (docfile != nullptr) {
        for (int i = 0; i < hs_function_table_count; i++) {
            char buf[0x800];
            hs_get_function_parameters_string(i, buf, sizeof buf);
            fprintf(docfile, "%s\r\n", buf);
            csstrnzcpy(buf, hs_function_table[i]->unk_0x14, sizeof buf);
            fprintf(docfile, "%s\r\n\r\n", buf);
        }
        fclose(docfile);
    }
}
