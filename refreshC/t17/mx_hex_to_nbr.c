
unsigned long mx_hex_to_nbr(const char *hex) {
    int c = 0;
    const char *hex1 = hex;
    while(*hex1) {
        c++;
        hex1++;
    }

    unsigned long base = 1;
    unsigned long n = 0;

    for (int i = c - 1; i >= 0; i--) {
        if(hex[i] >= '0' && hex[i] <= '9'){
            n += (hex[i] - 48) * base;
            base *= 16;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F'){
            n += (hex[i] - 55) * base;
            base *= 16;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') {
            n += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    return n;
}
