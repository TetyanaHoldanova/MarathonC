
int mx_sqrt(int x) {
    if (x == 0 || x == 1)
        return x;
    for (int i = 2; i < x; i ++)
        if (i * i == x)
            return i;
        return 0;
}
