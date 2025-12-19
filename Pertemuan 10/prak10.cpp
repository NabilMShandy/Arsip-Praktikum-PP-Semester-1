#include <ncurses/curses.h>
#include <windows.h>
using namespace std;

int main(){
    initscr();

    for(int i = 0; i < 3; i++){
        mvprintw(6, 30, "      Loading...");
        mvprintw(7, 30, "--------------------");
        mvprintw(8, 30, "|                  |");
        mvprintw(9, 30, "--------------------");
        mvprintw(10, 30, "     Please wait");

        for(int f = 1; f < 18; f++){
            mvprintw(8, 30 + f, ">");
            refresh();
            Sleep(400);
        }
    }

    getch();
    endwin();
    return 0;
}