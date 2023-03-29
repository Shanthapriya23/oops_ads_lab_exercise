#include<iostream>
using namespace std;

class person
{
    public:
    string name,id;
    int age,salary;
   
    void accept()
    {
        cout<<"enter the employee name and id:";
        cin>>name>>id;
        cout<<"enter the employee age and salary:";
        cin>>age>>salary;
    }
   
    void display()
    {
        cout<<"\nemp_name:"<<name;
        cout<<"\nemp_id:"<<id;
        cout<<"\nemp_age:"<<age;
        cout<<"\nemp_salary:"<<salary;
        cout<<"\n";
       
    }
    friend class high_salary;
   
};

person people[5];
int salary[5];

class high_salary
{
    public:
    void maximum_sal()
    {
        int max_sal=salary[0];
       
        person high_sal;
        for(int i=0; i < 5; i++)
        {
            if(salary[i]>max_sal)
            {
                max_sal=salary[i];
            }
        }
        cout<<"\nmax sal:"<<max_sal;
        for(int i=0; i < 5; i++)
        {
            if(people[i].salary==max_sal)
                high_sal=people[i];
        }
        cout<<"\nmax sal employee:"<<high_sal.name<<"\n";
       
    }
};
int main()
{
    for(int i=0; i < 5; i++)
    {
      people[i].accept();
    }
    for(int i=0; i < 5; i++)
    {
        cout<<"\nemployee details of employee"<<i+1;
        people[i].display();
    }
    for(int i=0; i < 5; i++)
    {
        salary[i]=people[i].salary;
    }
    high_salary fri;
    fri.maximum_sal();
    return 0;
}



