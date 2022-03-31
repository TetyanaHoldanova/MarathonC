#include <stdlib.h>

char *mx_strnew(const int size) {
    char *str;
    str = (char*)malloc(size+1);
    if(str == NULL)
        return NULL;
    else {
        str[size] = '\0';
        return str;
    }
}
