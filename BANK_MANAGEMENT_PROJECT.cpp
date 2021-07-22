#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;
class BOI
{
private:
    int adhaarcardno[10], mobileno[10], amt, wamt, bal = 0;
    char name[100], address[100];
    string us, pw;

public:
    void Create_Account();
    void DEPOSIT();
    void LOGIN();
    void WITHDRAWMONEY();
    void AC_DETAIL();
};

void BOI ::Create_Account()
{
    fflush(stdin);
    cout << "ENTER YOUR NAME :";
    cin.getline(name, 100);

    cout << "ENTER YOUR ADDRESS :";
    cin.getline(address, 100);

    cout
        << "ENTER YOUR ADHAAR NO : ";
    cin >> adhaarcardno[10];
    cout << "ENTER YOUR MOBILE NO : ";
    cin >> mobileno[10];
    cout << "\n CONGRATULATION YOU ZERO BALANCE A/C IS CREATED!" << endl
         << " WELCOME TO BOI FAMILY ";
}

void BOI ::DEPOSIT()
{

    cout << "ENTER THE AMOUNT YOU WANT TO DEPOSIT :";
    cin >> amt;
    cout << "A/C BALANCE IS :" << amt << endl;
}

void BOI ::WITHDRAWMONEY()
{

    cout << "ENTER THE AMOUNT YOU WANT TO WITHDRAW :";
    cin >> wamt;
    bal = amt - wamt;
    cout << "A/C BALANCE IS :" << bal << endl;
}

void BOI ::AC_DETAIL()
{

    cout << "NAME :" << name << endl;
    cout << "ADDRESS :" << address << endl;
    cout << "MOBILE NO :" << mobileno << endl;
    cout << "ADHAAR NO :" << adhaarcardno << endl;
    cout << "BALANCE :" << bal << endl;
}

void BOI ::LOGIN()
{

    cout << "ENTER USERNAME : ";
    cin >> us;

    cout << "ENTER PASSWORD : ";
    cin >> pw;
    string st, st2;
    ifstream username("username.txt");
    getline(username, st);
    ifstream password("password.txt");
    getline(password, st2);

    if (st == us && st2 == pw)
    {
        cout << "LOGGED IN SUCESSFULLY :" << endl;
    }
    else{
        cout<<"LOGIN FAILED PLEASE ENTER CORRECT USERNAME AND PASSWORD :";
    }
}
int main()
{
    char x;
    int opt;
    BOI B1;
    cout << ".............................WELCOME TO BANK OF INDIA............................. \n \n"
         << endl;
    do
    {
        cout << "\n 1. Create Account :" << endl;
        cout << " 2  LOGIN :" << endl;
        cout << " 3. DEPOSIT :" << endl;
        cout << " 4. WITHDRAW MONEY :" << endl;
        cout << " 5. DISPLAY ACCOUNT DETAILS :" << endl;
        cout << " 6. EXIT :" << endl;
        cout << "SELECT THE OPTIONS FROM ABOVE :";
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "CREATE A/C :" << endl;
            B1.Create_Account();
            break;
        case 2:
            cout << " LOGIN :" << endl;
            B1.LOGIN();
            break;

        case 3:
            cout << "DEPOSIT :" << endl;
            B1.DEPOSIT();

            break;

        case 4:
            cout << "WITHDRAW :" << endl;
            B1.WITHDRAWMONEY();
            break;

        case 5:
            cout << "A/C DETAILS :" << endl;
            B1.AC_DETAIL();
            break;

        case 6:
            cout << "EXIT :" << endl;
            if (opt == 5)
            {
                exit(1);
            }
        default:
            cout << " // THE OPTION IS INVALID //";
            break;
        }

        cout << "DO YOU WANT TO ENTER THE OPTIONS AGAIN  IF YES PRESS 'Y' IF NO PRESS 'N' :";
        x = getch();
        if (x == 'n' || x == 'N')
        {
            exit(0);
        }
    } while (x == 'Y' || x == 'y');

    return 0;
}