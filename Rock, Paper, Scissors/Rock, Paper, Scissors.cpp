// Convert this to Windows Forms

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    while (true) {

        srand(time(NULL));
        int computer = rand() % 3 + 1;
        int user = 0;

        cout << "====================\n";
        cout << "rock paper scissors!\n";
        cout << "====================\n";

        cout << "1) R\n";
        cout << "2) P\n";
        cout << "3) S\n";

        cout << "shoot! ";

        cin >> user;

        if (computer == user)
        {
            cout << "It's a tie!\n";
        }
        else if (computer == 1 && user == 2)
        {
            cout << "User wins!\n";
        }
        else if (computer == 1 && user == 3)
        {
            cout << "Computer wins!\n";
        }
        else if (computer == 2 && user == 3)
        {
            cout << "User wins!\n";
        }
        else if (computer == 2 && user == 1)
        {
            cout << "Computer wins!\n";
        }
        else if (computer == 3 && user == 1)
        {
            cout << "User wins!\n";
        }
        else if (computer == 3 && user == 2)
        {
            cout << "Computer wins\n";
        }
        int n;
        cout << "Do you want to play again?\n";
        cout << "Enter 1 to continue or 2 to exit...\n";
    start:
        cin >> n;
        switch (n)
        {
        case 1:
            system("cls");
            break;
        case 2:
            exit(EXIT_SUCCESS);
            break;
        default:
            cout << "Invalid input...Please try again...";
            goto start;
            break;
        }
    }

    system("pause");
    return 0;
}
