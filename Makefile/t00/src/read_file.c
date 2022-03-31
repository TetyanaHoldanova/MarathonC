#include "header.h"

int main(int argc, char *argv[]){
    if(argc != 2 ){
        write(2, "usage: ./read_file [file_path]\n", 31);
        return -1;
    }

    int fd;
    ssize_t res;
    char c;

    fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        write(2, "error\n", 6);
        return -1;
    }
    while((res = read(fd, &c, 1)) > 0 )
        write(1, &c, 1);
    write(1, "\n", 1);
    close (fd);
    return 0;
}
