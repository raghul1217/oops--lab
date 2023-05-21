#include <iostream>
#include <string>
using namespace std;
class Account
{
protected:
    int number;
    string name;
    double balance;

public:
    // Constructor
    Account(int num, const string &nm, double bal)
    {
        number = num;
        name = nm;
        balance = bal;
    }
    // Method to read account details
    virtual void read()
    {
        cout << "Enter account number: ";
        cin >> number;
        cout << "Enter account holder's name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter account balance: ";
        cin >> balance;
    }
    // Method to display account details
    virtual void display()
    {
        cout << "Account number: " << number << endl;
        cout << "Account holder's name: " << name << endl;
        cout << "Account balance: " << balance << endl;
    }
};
class Transaction : public Account
{
private:
    string date;
    char type;
    double amount;

public:
    // Constructor
    Transaction(int num, const string &nm, double bal, const string &dt, char tp, double amt)
        : Account(num, nm, bal)
    {
        date = dt;
        type = tp;
        amount = amt;
    }
    // Method to read transaction details
    void read() override
    {
        Account::read();
        cout << "Enter transaction date: ";
        cin.ignore();
        getline(cin, date);
        cout << "Enter transaction type (C for Credit, D for Debit): ";
        cin >> type;
        cout << "Enter transaction amount: ";
        cin >> amount;
    }
    // Method to display transaction details
    void display() override
    {
        Account::display();
        cout << "Transaction date: " << date << endl;
        cout << "Transaction type: " << type << endl;
        cout << "Transaction amount: " << amount << endl;
    }
};
class Loan : public Account
{
private:
    string date;
    double interest;

public:
    // Constructor
    Loan(int num, const string &nm, double bal, const string &dt, double intr)
        : Account(num, nm, bal)
    {
        date = dt;
        interest = intr;
    }
    // Method to read loan details
    void read() override
    {
        Account::read();
        cout << "Enter loan date: ";
        cin.ignore();
        getline(cin, date);
        cout << "Enter loan interest: ";
        cin >> interest;
    }
    // Method to display loan details
    void display() override
    {
        Account::display();
        cout << "Loan date: " << date << endl;
        cout << "Loan interest: " << interest << endl;
    }
};
int main()
{
    Transaction transaction(123, "John Doe", 5000.0, "2023-05-20", 'C', 1000.0);
    Loan loan(456, "Alice Smith", 10000.0, "2023-05-20", 5.0);
    cout << "Transaction details:" << endl;
    transaction.display();
    cout << "\nLoan details:" << endl;
    loan.display();
    return 0;
}
