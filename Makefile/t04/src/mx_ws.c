#include "header.h"

void mx_error (const char *filename, const int ernum);
void mx_dataprint(int lines, int words, int size, char *name);

int main(int argc, char* argv[]) {
    int n;
    int lines, words, size;
    int t_lines, t_words, t_size;
    char ch, last;

    last = '\0';
    lines = 0;
    words = 0;
    size = 0;
    t_lines = 0;
    t_words = 0;
    t_size = 0;

    if (argc ==2){
        if(mx_strcmp(argv[1], ".")==0)
            write(2, "mx_wc: .: read: Is a directory\n", 31);
        return 0;
    }

    if (argc == 1) {
        while ((n = read(0, &ch, sizeof(char))) > 0) {

            size += n;
            if (ch == '\n') {
                lines++;
                if (last != '\n')
                    words++;
            }
            else if (mx_isspace(ch))
                words++;
            last = ch;
        }
        mx_dataprint(lines, words, size, NULL);
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        int fd = open(argv[i], O_RDONLY, 0);

        if (fd == -1)
            mx_error(argv[i], errno);

        lines = 0;
        words = 0;
        size = 0;

        while ((n = read(fd, &ch, sizeof(char))) > 0) {
            size += n;
            if (ch == '\n') {
                lines++;
                if (last != '\n')
                    words++;
            }
            else if (mx_isspace(ch))
                words++;
            last = ch;
        }
        mx_dataprint(lines, words, size, argv[i]);

        t_lines += lines;
        t_words += words;
        t_size += size;

        close(fd);
    }
    mx_dataprint(t_lines, t_words, t_size, "total");
    return 0;
}

void mx_error (const char *filename, const int ernum) {
    mx_printerr("mx_wc: ");
    mx_printerr(filename);
    mx_printerr(": open: ");
    mx_printerr(strerror(ernum));
    mx_printerr("\n");
    exit(errno);
}

void mx_dataprint(int lines, int words, int size, char *name) {
    mx_printchar('\t');
    mx_printint(lines);
    mx_printchar('\t');
    mx_printint(words);
    mx_printchar('\t');
    mx_printint(size);
    if (name){
        mx_printchar('\t');
        mx_printstr(name);
    }
    mx_printchar('\n');
}
