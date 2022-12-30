#include "../include/re.h"
#include <string.h>

ReObj * re(const char * expr) {
    return NULL;
}

ReMatch * re_match(char * input, ReObj * obj) {
    return NULL;
}

ReMatch * re_match_s(char * input, const char * expr) {

    return NULL;
}

char * string_to_a(String * string) {
    char * ret = malloc(sizeof(char) * (string->length + 1));
    memcpy(ret, string->start, string->length);
    ret[string->length] = 0;
    return ret;
}
