/* color-demo.c */

#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

int is_bold(int fg);
void init_colorpairs(void);
short curs_color(int fg);
int colornum(int fg, int bg);
void setcolor(int fg, int bg);
void unsetcolor(int fg, int bg);

int main(void)
{
    int fg, bg;

    /* initialize curses */

    initscr();
    keypad(stdscr, TRUE);
    cbreak();
    noecho();

    /* initialize colors */

    if (has_colors() == FALSE) {
        endwin();
        puts("Your terminal does not support color");
        exit(1);
    }

    start_color();
    init_colorpairs();

    /* draw test pattern */

    if ((LINES < 24) || (COLS < 80)) {
        endwin();
        puts("Your terminal needs to be at least 80x24");
        exit(2);
    }

    mvaddstr(0, 35, "COLOR DEMO");
    mvaddstr(2, 0, "low intensity text colors (0-7)");
    mvaddstr(12, 0, "high intensity text colors (8-15)");

    for (bg = 0; bg <= 7; bg++) {
        for (fg = 0; fg <= 7; fg++) {
            setcolor(fg, bg);
            mvaddstr(fg + 3, bg * 10, "...test...");
            unsetcolor(fg, bg);
        }

        for (fg = 8; fg <= 15; fg++) {
            setcolor(fg, bg);
            mvaddstr(fg + 5, bg * 10, "...test...");
            unsetcolor(fg, bg);
        }
    }

    mvaddstr(LINES - 1, 0, "press any key to quit");

    refresh();

    getch();
    endwin();

    exit(0);
}


