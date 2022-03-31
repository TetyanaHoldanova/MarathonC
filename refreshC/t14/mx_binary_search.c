
int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int first = 0;
    int last = size - 1;
    int middle = (first + last) / 2;

    while (first <= last) {
        *count = *count + 1;
        if (mx_strcmp(arr[middle], s) < 0)
            first = middle + 1;
        else if (mx_strcmp(arr[middle], s) == 0)
            return middle;
        else
            last = middle - 1;
        middle = (last + first) / 2;
    }
    *count = 0;
    return -1;
}
