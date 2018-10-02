// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: skavunen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/11/04 19:18:06 by skavunen          #+#    #+#             //
//   Updated: 2017/11/04 19:18:14 by skavunen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "mainGame.hpp"

WINDOW* wnd;

void            game_over( void )
{
    int in_char;
    int flag;

    flag = 0;
    struct winsize size;
    ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);
    clear();

    addStrWind(size.ws_row / 2, size.ws_col / 2 - 10, "g a m e  o v e r");

    addStrWind(size.ws_row / 2 + 2, size.ws_col / 2 - 10, "retry? y / n");

    
    refresh();
 

    while (!flag)
    {
        in_char = wgetch(wnd);
        switch(in_char) {
        case 'y':
            flag = 1;
            break; 
        case 'n':
            close();
        default:
            break;
        }
    }
    if (flag == 1)
        run();
}

void            close() {

        endwin();
        exit(0);
 
}

void            addStrWind(int y, int x, std::string str)
{

    for (size_t i = 0; i < str.size(); i++)
    {
        mvaddch(y, x + i, str[i]);
    }
}

void            display_points( Player & me )
{
    std::string point = std::to_string(me.getPoints());
    std::string ret = "P o i n t s: ";

    ret += point;

    struct winsize size;
    ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);

    addStrWind(size.ws_row - 2, size.ws_col / 2 - 10, ret);
}

void            run()
{
    Player  me;
    EnemyEvent enem;

    int in_char;
 
    srand(time(NULL));      


    while (1)
    {
        if (!(enem.killPlayer(me.getY(), me.getX())))
            break;
        in_char = wgetch(wnd);
        switch(in_char) {
            case KEY_UP:
                me.moveY(me.getY() - 2);
                break;
            case KEY_DOWN:
                me.moveY(me.getY() + 2);
                break;
            case ' ':
                me.attack();
                break;
            case 'q':
                close();
            default:
                break;
        }
        clear();
        
        enem.init();
        enem.striked( me );
        enem.dispAll();
        enem.moveAll();
        me.displayRock();
        me.moveRock();
        display_points(me);
        addStrWind(me.getY(), me.getX(), me.display());
        
        usleep(50000 - (me.getPoints() * 100));
        refresh();
    }
    game_over();
}
    
        

int             init()
{
    wnd = initscr();
    cbreak();
    noecho();
    clear();
    refresh();
    keypad(wnd, true);
    nodelay(wnd, true);
    curs_set(0);
    if(!has_colors()) {
        endwin();
        printf("ERROR: Terminal does not support color.\n");
        exit(1);
    }
    start_color();
    attron(A_BOLD);
    box(wnd, 0, 0);
    attroff(A_BOLD);
    init_pair(1, COLOR_BLACK, COLOR_WHITE);
    init_pair(2, COLOR_GREEN, COLOR_WHITE);
    init_pair(3, COLOR_RED, COLOR_WHITE);
    wbkgd(wnd, COLOR_PAIR(1));
    return 0;
}

int             main(void)
{
    int init_status = init();
    
        
    if(init_status == 0)
        run();
    
    close();

 
        
}