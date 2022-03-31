#include "header.h"

bool mx_isspace(char c) {
    if (c == ' ' || c == '\t' || c == '\n' || c == '\f' || c == '\r' || c == '\v') return 1;
    else return 0;
}
