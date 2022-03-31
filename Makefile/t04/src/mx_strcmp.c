#include "header.h"

int mx_strcmp(const char*s1, const char*s2) {
    int i =0;
    while(s1[i] == s2[i] && s1[i] != '\0') {
        s1++;
        s2++;
        i++;
    }
    return (unsigned char) *s2 - (unsigned char) *s1;
}
