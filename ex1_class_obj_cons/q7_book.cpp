#include <iostream>
using namespace std;

class book
{
    int id,count_sp;
    string auth_name,pub_name;
    int price,year;
    public:
    void get_details()
    {
       
        cout<<"enter the book id,year and price:\n";
        cin>>id>>year>>price;
        cout<<"author name and publisher name:";
        cin>>auth_name>>pub_name;
    }
   
    void display()
    {
        cout<<"\n";
        cout<<"book id:"<<id;
        cout<<"\nbook price:"<<price;
        cout<<"\nyear:"<<year;
        cout<<"\nauthor name:"<<auth_name;
        cout<<"\npublisher name:"<<pub_name;
        cout<<"\n";
    }
    friend class same_price;
   
};

book b[5];

class same_price
{
    public:
   void count_same_price()
    {
        for(int i=0;i<5;i++)
        {
            b[i].count_sp=1;
        }
        for(int i=0;i<5;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(b[i].price==b[j].price)
                {
                    b[i].count_sp+=1;
                    b[j].count_sp+=1;
                    //break;
                }
            }
        }
        for(int i=0;i<5;i++)
        {
            cout<<"book price:"<<b[i].price<<"\n\n";
            cout<<"count of books in the same price:"<<b[i].count_sp<<"\n";  
           
        }
    }
};
int main()
{  
    for(int i=0;i<5;i++)
        {
         b[i].get_details();  
        }
    for(int i=0;i<5;i++)
        {
         b[i].display();  
        }
    same_price fri;
    cout<<"\n";
    fri.count_same_price();  
    return 0;
}

	

