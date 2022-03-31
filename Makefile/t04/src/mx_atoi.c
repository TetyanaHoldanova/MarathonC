#include"header.h"

int mx_atoi(const char *str) {
    unsigned int sign = 1, res = 0, i = 0;
    while (mx_isspace(str[i]) == true)
    {
        i++;
    }
    if (str[i] == '-')
    {sign = -1; i++;}
    else if (str [i] == '+')
    {sign = 1; i++;}
    for (; str[i] != '\0'; ++i) {
        if(mx_isdigit(str[i]) == true)
            res = res * 10 + str[i] - '0';
        else if (mx_isdigit(str[i]) == false)
            return 0;
    }
    return sign * res;
}
