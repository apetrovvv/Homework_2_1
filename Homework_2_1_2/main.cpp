#include <iostream>

using namespace std;

struct bankAccount
{
    int numAccount;
    string nameHolder;
    double balanceAccount;
};

void chngBalanceAccount(bankAccount &bankAccount_name, double newBalance){
    bankAccount_name.balanceAccount = newBalance;
}

void viewBankAccount(bankAccount &bankAccount_name){
    cout << "Ваш счёт: " << bankAccount_name.nameHolder << ", " 
    << bankAccount_name.numAccount << ", " << bankAccount_name.balanceAccount << endl;
}

int main(){
    int number;
    cout << "Введите номер счёта: ";
    cin >> number;
    string name;
    cout << "Введите имя владельца: ";
    cin >> name;
    double balance;
    cout << "Введите баланс: ";
    cin >> balance;
    bankAccount bankAccount1 = {number, name, balance};
    //viewBankAccount(bankAccount1);
    double newbalance;
    cout << "Введите новый баланс: ";
    cin >> newbalance;
    chngBalanceAccount(bankAccount1, newbalance);
    viewBankAccount(bankAccount1);
}