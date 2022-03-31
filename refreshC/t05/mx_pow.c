double mx_pow(double n, unsigned int pow) {
    if (pow == 0)
        return 1;

    double num = 1;

    for (unsigned int i = 0; i < pow; i++) {
        num *= n;
    }
    return num;
}
