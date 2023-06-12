// BattleShip.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include<random>
using namespace std;
int main()
{

    bool ship[10][10];
    int random;
    int guessCount = 5;
    int hits = 0;
    int point = 0;
 
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            random = rand() % 2;
            ship[i][j] = random;
        }
    }
    cout << "***** Welcome to battle ship game ****** \n\n";
    cout << "You have five guesses. Good Luck:)\n\n ";
    while (guessCount > 0)
    { 
        int row, column;
        cout << "Selecting coordinate \n ";

        cout << "choose a row number between 0 and 9   ";
        cin >> row;

        cout << "choose a column number between 0 and 9   ";
        cin >> column;

        if (ship[row][column])
        {
            hits++;
            point += 10;
            cout << "ooh hits\n\n";
            ship[row][column] = 0;
        }
        else
        {
            cout << "Miss Try again\n\n";
        }
        guessCount--;

    }

    if (point == 50)
    {
        cout << "Your hits: " << hits <<endl<< "Your point: " << point <<endl<< " amazing job ";
    }
    else if (point == 40)
    {
        cout << "Your hits: " << hits <<endl<< "Your point: " << point<<endl << " you are smart ";
    }
    else
    {
        cout << "Your hits: " << hits <<endl<< "Your point: " << point <<endl<< " Not bad play again ";
       
    }
    cout << endl << endl;
    
}

