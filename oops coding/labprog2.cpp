/*Write a C++ program to implement a class called BankAccount that has private member
variables for account number and balance. Include member functions to deposit and
withdraw money from the account.*/

#include<iostream>
using namespace std;

class BankAccount{
    private:
    int accountnumber;
    double balance = 1000;

    public:
    int deposit(int a){
        balance +=a;
    }
    int withdraw(int b){
        balance -=b;
    }
    void dis(){
        cout<<balance<<endl;
    }
};
int main(){
    BankAccount b1;
    b1.deposit(100);
    b1.dis();
    b1.withdraw(500);
    b1.dis();
    return 0;
}