#include<iostream>
using namespace std;
 
class student
{
    string name;
    int age,mark;
    public:
    void accept()
    {
        cout<<"enter the student name:";
        cin>>name;
        cout<<"enter the student age and marks:";
        cin>>age>>mark;
    }
   
    void display()
    {
        cout<<"\nstu_name:"<<name;
        cout<<"\nstu_age:"<<age;
        cout<<"\nstu_marks:"<<mark;
        cout<<"\n";
       
    }
    friend class stu_max_mark;
};

student stud[5];

class stu_max_mark
{
    public:
    void maximum_3_marks()
    {
        for(int i=0; i < 5; i++)
        {
            for(int j=i+1;j<5;j++)
            {
             if(stud[i].mark<stud[j].mark)
                {
                 student temp=stud[i];
                 stud[i]=stud[j];
                 stud[j]=temp;
                }
            }
        }
       
        /*cout<<"\nstudents who got first 3 marks:";
        cout<<"\nfirst:"<<stud[0];
        cout<<"\nsecond:"<<stud[1];
        cout<<"\nthird:"<<stud[2];*/
       
    }
};



int main()
{
    for(int i=0; i < 5; i++)
    {
      stud[i].accept();
    }
    for(int i=0; i < 5; i++)
    {
        cout<<"\nstudent details of student"<<i+1;
        stud[i].display();
    }
   
    stu_max_mark fri;
    fri.maximum_3_marks();
    cout<<"details of top 3 scorers:";
    for(int i=0; i < 3; i++)
    {
        cout<<"\nstudent details of student"<<i+1;
        stud[i].display();
    }
    return 0;
}



	

