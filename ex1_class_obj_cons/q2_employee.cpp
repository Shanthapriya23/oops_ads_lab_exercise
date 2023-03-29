#include <iostream>
using namespace std;

class employee
{
    string fname;
    string lname;
    int monthly_salary;
   
    public:
    employee(string fn,string ln)
    {
        fname=fn;
        lname=ln;
    }

    void set_sal(int msal)
    {
        if(msal>0)
            monthly_salary=msal;
        else
            cout<<"salary should not be negative";
    }
    int yearly_salary()
    {
        int ys=12*monthly_salary;
        return ys;
    }
   
    int incr_sal()
    {
        int inc_sal=monthly_salary*0.1;
        monthly_salary+=inc_sal;
        return monthly_salary;
    }
   
    int get_sal()
    {
        return monthly_salary;
    }
};
int main()
{
    employee e1("shantha","priya");
    e1.set_sal(5000);
    cout<<"\n original salary:"<<e1.get_sal();
    cout<<"\n yearly salary:"<<e1.yearly_salary();
    e1.incr_sal();
   
    cout<<"\n incremented salary:"<<e1.get_sal();
    return 0;
}

	

