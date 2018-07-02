#include <iostream>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
#include "Giveinfo.h"
#include "Encrypt.h"
#include "Decrypt.h"
#include "Main.h"
#include "CMD.H"


using namespace std;

void Console_Title()
{
    SetConsoleTitle("Kryptex 3.195");
    cout << "Kryptex Machine 3.195" << endl;
    cout << "By Antoine TAVOILLOT" << endl;
    Sleep(2000);
}
void Protocol_Information()
{
    int Id_User_Principal;
    int Password_Principal;
    cout << "Enter Your Id" << endl;
    cin >> Id_User_Principal;
    cout << "Enter Your Code" << endl;
    cin >> Password_Principal;

    if (Id_User_Principal == 9815 && Password_Principal == 6699856)
    {
        cout << "Your Id is correct ! You can access to Kryptex Machine !!" << endl;
        Sleep(3000);
    }
    else if (Id_User_Principal == 95169896 && Password_Principal == 6699856)
    {
        cout << "Ok You have the right to enter to CMD Center" << endl;
        Cmd_Command_Detect();
    }
    else
    {
        cout << "Id or Password is wrong ! Try Again for access Kryptex Machine !!" << endl;
        Sleep(2000);
        exit(0);
    }
}

void Choose_Activity()
{
boucle:
    int answer_choice;
    cout << "" << endl;
    cout << "Do You Want Crypt or Decrypt Data ??" << endl;
    cout << "Press :" << endl;
    cout << "0 For Crypt or 1 for Decrypt" << endl;
    cin >> answer_choice;
    while (answer_choice < 0 || answer_choice > 1)
    {
        goto boucle;
    }
    if (answer_choice == 0)
    {
        system("cls");
        cout << "Please Wait when Crypt App load..." << endl;
        Principal_Function();
    }
    else
    {
        cout << "Please Wait when Decrypt App load..." << endl;
        Principal_Function_Decrypt();
    }
}

int main()
{

    Console_Title();
    Protocol_Information();
    Information();
    Sleep(10000);
    Choose_Activity();
    Sleep(50000);



    return 0;
}








