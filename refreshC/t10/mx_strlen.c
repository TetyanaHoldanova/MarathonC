int mx_strlen(const char *s){
    int k = 0;

    while (*s) {
        k++;
        s++;
    }
    return k;
}
