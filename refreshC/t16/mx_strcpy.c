
char *mx_strcpy(char *dst, const char *src){
    char *res = dst;
    while( *src != '\0') {
        *dst = *src;
        src++;
        dst ++;
    }
    return res;
}
