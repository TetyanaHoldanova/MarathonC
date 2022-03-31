char *mx_strcpy(char *dst, const char *src) {
    char *newstr = dst;
    while ((*dst++ = *src++) != '\0')
        ;
    return newstr;
}
