#include "header.h"

void mx_printint(int n) {
    int i = 0;
    char s[10];
    if (n < 0) {
        mx_printchar('-');
        n = -n;
    }
    while (n > 0) {
        s[i] = n % 10;
        n = n / 10;
        i++;
    }
    if (n % 10 == 0 && i == 0)
        mx_printchar('0');
    else
        for (int m = i - 1; m >= 0; m--)
            mx_printchar(s[m] + '0');
}
