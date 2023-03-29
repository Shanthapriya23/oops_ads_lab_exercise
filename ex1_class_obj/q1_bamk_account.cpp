#include <iostream>
using namespace std;

class account
{
    string acc_holder;
    int acc_bal;
    string acc_no;
    public:
    account(int x)
    {
        if (x>0)
            acc_bal=x;
        else
            cout<<"account balance cannot be negative or zero";
    }
   
    void debit(int x)
    {
        acc_bal+=x;
    }
    void credit(int x)
    {
        acc_bal-=x;
    }
   
    void set_acc(string a,string b)
    {
        acc_holder=a;
        acc_no=b;
    }
    int get_bal()
    {
        return acc_bal;
    }
   
    void get_details()
    {
        cout<<"account holder:"<<acc_holder<<"\n";
        cout<<"account number:"<<acc_no<<"\n";
    }
};
int main()
{
    account acc1(300);
    acc1.set_acc("shantha","TNSBI12885");
    acc1.get_details();
    cout << "original balance="<<acc1.get_bal()<<"\n";
    acc1.credit(100);
    cout << "balance after crediting 100="<<acc1.get_bal()<<"\n";
    acc1.debit(50);
    cout << "balance debiting 50 ="<<acc1.get_bal()<<"\n";
    return 0;
}


