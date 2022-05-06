#include <iostream> 
#include <conio.h>
#include <string>
#include <Windows.h>

using namespace std;

void metling(char battlefield[][10], int size_s)
{
    switch (size_s)
    {

    case 1:
    {
        int x = 0, y = 0;
        if (battlefield[x][y] != '&')
        {
            battlefield[x][y] = '&';
            system("cls");
            for (int i = 0; i < 10; i++)
            {
                for (int g = 0; g < 10; g++)
                {
                    cout << battlefield[i][g] << ' ';
                }
                cout << endl;
            }
        }
        int user = 0;
        do
        {
            user = _getch();

            switch (user)
            {
            case 80:
                if (x != 9)
                {
                    battlefield[x + 1][y] = '&';
                    battlefield[x][y] = 'Х';
                    x++;
                }
                break;
            case 72:
            {
                if (x != 0)
                {
                    battlefield[x - 1][y] = '&';
                    battlefield[x][y] = 'Х';
                    x--;
                }
                break;
            }
            case 75:
            {
                if (y != 0)
                {
                    battlefield[x][y - 1] = '&';
                    battlefield[x][y] = 'Х';
                    y--;

                }
                break;
            }
            case 77:
            {
                if (y != 9)
                {
                    battlefield[x][y + 1] = '&';
                    battlefield[x][y] = 'Х';
                    y++;
                }
                break;
            }
            }
            system("cls");
            for (size_t i = 0; i < 10; i++)
            {
                for (size_t g = 0; g < 10; g++)
                {
                    cout << battlefield[i][g] << ' ';
                }
                cout << endl;
            }
            cout << user;
        } while (user != 13);
    }
    break;
    case 2:
    {
        int x = 0, y = 0, x2 = 0, y2 = 1;
        bool horizontal = true;
        if (battlefield[x][y] == '&' && battlefield[x + 1][y] == '&', battlefield[x][y + 1])
        {
            battlefield[x][y] = '&';
            battlefield[x2][y2] = '&';
            system("cls");
            for (size_t i = 0; i < 10; i++)
            {
                for (size_t uy = 0; uy < 10; uy++)
                {
                    cout << battlefield[i][uy] << " ";
                }
                cout << endl;
            }
        }
        int user = 0;
        do
        {
            user = _getch();

            switch (user)
            {
            case 80:
                if (x != 9)
                {
                    battlefield[x][y] = 'Х';
                    battlefield[x2][y2] = 'Х';
                    battlefield[x + 1][y] = '&';
                    battlefield[x2 + 1][y2] = '&';
                    x++;

                    x2++;

                }
                break;
            case 72:
            {
                if (x != 0)
                {
                    if (horizontal == true)
                    {

                        battlefield[x][y] = 'Х';
                        battlefield[x2][y2] = 'Х';
                        battlefield[x - 1][y] = '&';
                        battlefield[x2 - 1][y2] = '&';
                        x--;

                        x2--;
                    }
                    else {
                        if (x != 1) {

                            battlefield[x - 1][y] = '&';
                            battlefield[x2 - 1][y2 - 1] = '&';
                            battlefield[x][y] = 'Х';
                            x--;

                            x2 = x - 1;
                        }
                    }
                }
                break;
            }
            case 75:
            {
                if (y != 0)
                {
                    if (horizontal == true)
                    {

                        battlefield[x][y] = 'Х';
                        battlefield[x2][y2] = 'Х';
                        battlefield[x][y - 1] = '&';
                        battlefield[x2][y2 - 1] = '&';
                        y--;

                        y2--;
                    }
                    else {

                        battlefield[x][y] = 'Х';
                        battlefield[x2][y2 - 1] = 'Х';
                        battlefield[x][y - 1] = '&';
                        battlefield[x2][y2 - 2] = '&';
                        y--;

                        y2--;
                    }

                    break;
                }
            }
            case 77:
            {
                if (y != 8)
                {
                    if (horizontal == true)
                    {

                        battlefield[x][y] = 'Х';
                        battlefield[x2][y2] = 'Х';
                        battlefield[x][y + 1] = '&';
                        battlefield[x2][y2 + 1] = '&';
                        y++;

                        y2++;
                    }
                    else {

                        battlefield[x][y] = 'Х';
                        battlefield[x2][y2 - 1] = 'Х';
                        battlefield[x][y + 1] = '&';
                        battlefield[x2][y2] = '&';
                        y++;

                        y2++;

                    }
                }
            }
            break;
            }

                if (user == 234, user == 114)
                {
                    if (horizontal == true)
                    {
                        if (x != 9)
                        {
                            battlefield[x2][y2] = 'Х';
                            battlefield[x + 1][y] = '&';
                            horizontal = false;
                            x2 = x + 1;
                        }
                    }
                    else if (horizontal == false)
                    {
                        if (y2 != 9)
                        {
                            horizontal = true;
                            battlefield[x2][y2] = 'Х';
                            battlefield[x][y + 1] = '&';
                            y2 = y + 1;
                        }
                    }
                }


            system("cls");
            for (size_t i = 0; i < 10; i++)
            {
                for (size_t g = 0; g < 10; g++)
                {
                    cout << battlefield[i][g] << ' ';
                }
                cout << endl;
            }
            cout << user;
        } while (user != 13);
    }
    break;
    }

}
int menu(int func)
{
    switch (func)
    {
    case 1:
    {
        int ship_x1 = 4, ship_x2 = 3, ship_x3 = 2, ship_x4 = 1;
        int ascii = 0;
        int menu = 4;
        cout << "\n¬ыберите корабль :\n\t\t-->x4 - " << ship_x3 << "\n\t\t   x3 - " << ship_x3 << "\n\t\t   x2 - " << ship_x2 << "\n\t\t   x1 - " << ship_x1 << endl;
        do
        {
            ascii = _getch();
            system("cls");
            if (ascii == 72)
            {
                switch (menu) {
                case 1:
                    cout << "\n¬ыберите корабль :\n\t\t   x4 - " << ship_x4 << "\n\t\t   x3 - " << ship_x3 << "\n\t\t-->x2 - " << ship_x2 << "\n\t\t   x1 - " << ship_x1 << endl;
                    menu = 2;
                    break;
                case 2:
                    cout << "\n¬ыберите корабль :\n\t\t   x4 - " << ship_x4 << "\n\t\t-->x3 - " << ship_x3 << "\n\t\t   x2 - " << ship_x2 << "\n\t\t   x1 - " << ship_x1 << endl;
                    menu = 3;
                    break;
                case 3:
                    cout << "\n¬ыберите корабль :\n\t\t-->x4 - " << ship_x4 << "\n\t\t   x3 - " << ship_x3 << "\n\t\t   x2 - " << ship_x2 << "\n\t\t   x1 - " << ship_x1 << endl;
                    menu = 4;
                    break;
                case 4:
                    cout << "\n¬ыберите корабль :\n\t\t   x4 - " << ship_x4 << "\n\t\t   x3 - " << ship_x3 << "\n\t\t   x2 - " << ship_x2 << "\n\t\t-->x1 - " << ship_x1 << endl;
                    menu = 1;
                    break;
                }
            }
            if (ascii == 80)
            {
                switch (menu) {
                case 3:
                    cout << "\n¬ыберите корабль :\n\t\t   x4 - " << ship_x4 << "\n\t\t   x3 - " << ship_x3 << "\n\t\t-->x2 - " << ship_x2 << "\n\t\t   x1 - " << ship_x1 << endl;
                    menu = 2;
                    break;
                case 4:
                    cout << "\n¬ыберите корабль :\n\t\t   x4 - " << ship_x4 << "\n\t\t-->x3 - " << ship_x3 << "\n\t\t   x2 - " << ship_x2 << "\n\t\t   x1 - " << ship_x1 << endl;
                    menu = 3;
                    break;
                case 1:
                    cout << "\n¬ыберите корабль :\n\t\t-->x4 - " << ship_x4 << "\n\t\t   x3 - " << ship_x3 << "\n\t\t   x2 - " << ship_x2 << "\n\t\t   x1 - " << ship_x1 << endl;
                    menu = 4;
                    break;
                case 2:
                    cout << "\n¬ыберите корабль :\n\t\t   x4 - " << ship_x4 << "\n\t\t   x3 - " << ship_x3 << "\n\t\t   x2 - " << ship_x2 << "\n\t\t-->x1 - " << ship_x1 << endl;
                    menu = 1;
                    break;
                }
            }
        } while (ascii != 13);
        return menu;
        break;
    }
    }
}


int main()
{
    const int size = 10;
    char battlefield[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int g = 0; g < size; g++)
        {
            battlefield[i][g] = 'Х';
            cout << battlefield[i][g] << ' ';
        }
        cout << endl;

    }

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    metling(battlefield, menu(1));




    return  0;
}