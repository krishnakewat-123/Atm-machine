#include <iostream>
using namespace std;
class ATM
{

    public:
    double balance=0.0;
    // Function to menu
    void Menu()
    {
        cout << "***ATM Menu***:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
    }

    // Function to check balance
    void checkBalance()
    {
        cout << "Your balance is:- $" << balance << endl;
    }

    // Function to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful..... " << endl;
        }
        else
        {
            cout << "Invalid deposit amount.......please enter valid amount." << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) 
    {   if(balance==0)
        {   if(amount<=0)
            {
                cout<<"!!  Insuffiecent balance or Invalid withdrawal amount.......please enter valid amount.\n";
            }
            else
            {
                cout<<"!!  Insufficient balance.........\n";
            }
        }
        else if (balance>0 && balance >= amount && amount>0) 
        {
            balance -= amount;
            cout << "Withdrawal successful...."<< endl;
        } 
        else 
        {
            cout << "\n!! Invalid withdrawal amount.......please enter valid amount." << endl;
        }
    }
};

int main()
{    int pin=1234,n;
    cout<<"please enter your Atm-pin:-";
    cin>>n;
    ATM obj;   //object creation of ATM class
    int choice;
    double amount;
    if(pin==n)
    {


        do
        {
            obj.Menu();   // menu function call
            cout << "please Enter your choice:- ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    obj.checkBalance();  // checkBalance function call
                    break;
                case 2:
                    cout << "Enter deposit amount:- $";
                    cin >> amount;
                    obj.deposit(amount);  // deposit function call
                    break;
                case 3:
                    cout << "Enter withdrawal amount:- $";
                    cin >> amount;
                    obj.withdraw(amount);  // withdraw function call
                    break;
                case 4:
                    cout << "\nExiting ATM......................Thank you for using our services!" << endl;
                    break;
                default:
                    cout << " !!  Invalid choice. Please try again..." << endl;
            }

            cout << endl;

        } while (choice != 4);
    }
    else
    {
        cout<<"!! Invalid please enter the valid ATM-Pin..........................."<<endl;
    }


    return 0;
} 