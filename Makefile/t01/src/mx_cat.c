#include "header.h"

int main(int argc, char *argv[]){
    int fd;
    ssize_t res;
    char c;

    if(argc == 1 ){
        while(read(0, &c, 1))
            write(1, &c, 1);
    }

    for(int i = 1; i < argc; i++){
        fd = open(argv[i], O_RDONLY);
        if(fd < 0) {
            write(2, "mx_cat: ", 8);
            write(2, argv[i], mx_strlen(argv[i]));
            write(2, ": No such file or directory\n", 28);
        }
        else {
            while ((res = read(fd, &c, 1)) > 0)
                write(1, &c, 1);
            write(1, "\n", 1);
        }
        close (fd);
    }
    return 0;
}
