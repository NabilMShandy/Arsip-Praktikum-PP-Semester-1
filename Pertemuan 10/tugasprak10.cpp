#include <ncurses/curses.h>
using namespace std;

void print_menu(WINDOW *menu_win, int optionchoosen, const char *option[], int nooption);

int main(){
    initscr();
    clear();
    noecho();
    cbreak();
    curs_set(0);   
    int Xstart = 0, Ystart = 0;
    int width = 20, height = 6;

    WINDOW *menu_win = newwin(height, width, Ystart, Xstart);
    keypad(menu_win, TRUE);

    const char *opsi[] = {
        "OPTION 1",
        "OPTION 2",
        "OPTION 3",
        "EXIT"
    };

    int nooption = sizeof(opsi) / sizeof(opsi[0]);
    int optionchoosen = 0;
    int option = -1;

    while(1){
        print_menu(menu_win, optionchoosen, opsi, nooption);
        int tombol = wgetch(menu_win);
        switch(tombol){
            case KEY_UP:
            if(optionchoosen <= 0)
            optionchoosen = nooption - 1;
            else
                --optionchoosen;
                break;
            case KEY_DOWN:
                if (optionchoosen >= nooption - 1)
                    optionchoosen = 0;
                else
                    ++optionchoosen;
                break;
            case 10:
                option = optionchoosen;
                break;
            default:
                break;
        }
        if(option == 3)
        break;
    }
    clrtoeol();
    refresh();
    endwin();

    return 0;
}

void print_menu(WINDOW *menu_win, int optionchoosen, const char *option[], int nooption){
    box(menu_win, 0, 0);
    for(int i = 0; i < nooption; i++){
        if(i == optionchoosen){
            wattron(menu_win, A_REVERSE);
            mvwprintw(menu_win, i+1, 1, "%s", option[i]);
            wattroff(menu_win, A_REVERSE);
        }
        else{
            mvwprintw(menu_win, i+1, 1, "%s", option[i]);
        }
    }
    wrefresh(menu_win);
}