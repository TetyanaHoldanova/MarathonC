#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n) {
    if (n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }

    else if (n == 2147483647) {
        write(1, "2147483647", 10);
        return;
    }

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
