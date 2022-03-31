#include "matrix.h"

void mx_output_text(WINDOW *win, int colums, int rows)
{
    init_pair(4, COLOR_GREEN, COLOR_BLACK);
    wbkgd(win, COLOR_PAIR(4));

    if (colums > 16 && rows > 32)
    {
        int x = 8;
        int y = 8;

        usleep(15000);

        char text[4][74] = { "Wake up, Neo..", "The Matrix has you..", "Follow the white rabbit", "Knock, knock, Neo" };

        wclear(win);

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < mx_strlen(text[i]); j++)
            {
                mvwaddch(win, y, x + j, text[i][j]);
                refresh();
                usleep(150000);
            }
            if (i != 3)
            {
                wclear(win);
                usleep(50000);
            }
        }
    }
}
