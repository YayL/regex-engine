#pragma once
#include <stdlib.h>

typedef struct string {
    char * start;
    size_t length;
} String;

typedef struct regex_object {

    struct regex_object * next;
} ReObj;

typedef struct regex_match {
    String ** matches;
    size_t count;
} ReMatch;

extern ReObj * re(const char *);
extern ReMatch * re_match(char *, ReObj *);
extern ReMatch * re_match_s(char *, const char *);

extern char * string_to_a(String * match);
