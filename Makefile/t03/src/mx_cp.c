#include"header.h"

int main(int argc, char* argv[]) {
    if(argc != 3) {
        write(2, "usage: ./mx_cp [source_file] [destination_file]\n", 48);
        return -1;
    }

    char c;
    int fd_src;
    int fd_dst;

    fd_src = open(argv[1], O_RDONLY);
    if(fd_src < 0){
        write(2, "mx_cp: ", 7);
        write(2, argv[1], mx_strlen(argv[1]));
        write(2, ": No such file or directory\n", 28);
        return -1;
    }

    fd_dst = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IRUSR | S_IWUSR);
    while(read(fd_src, &c, 1))
        write(fd_dst, &c, 1);
    close(fd_dst);
    close(fd_src);
    return 0;
}
