#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleTitle(TEXT("CyberConsole"));

    int choice;

    system("cls");

    cout << endl
         << " [1] Windows command line [ CMD ] "
         << endl << endl
         << " [2] Windows Powershell   [ PWS ] "
         << endl << endl;

    cout << " >> ";

    cin >> choice;
    Sleep(650);

    switch (choice)
    {
        case 1:
        Sleep(650);
        system("cls");
        SetConsoleTitle(TEXT("CyberConsole  [CMD]  "));
        system("cmd");
            break;

        case 2:
        Sleep(650);
        system("cls");
        SetConsoleTitle(TEXT("CyberConsole  [PWS]  "));
        system("powershell");
            break;

        default:
        system("cls");
            break;
    }
    main();
}