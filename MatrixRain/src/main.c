#include "matrix.h"

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "ja_JP.UTF-8");
    WINDOW * win = initscr();
    curs_set(0);
    matrix_rain(win, argc, argv);
    delwin(win);
    endwin();
    return 0;
}
