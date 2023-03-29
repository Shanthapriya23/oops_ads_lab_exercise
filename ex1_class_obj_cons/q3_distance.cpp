#include<iostream>
using namespace std;

class dis
{
      int feet;
      int inches;
      int total_dis;
     
      public:
      void set_feet(int x)
      {
          feet=x;
      }
     
      void set_inches(int y)
      {
          inches=y;
      }
     
      void get_dis()
      {
          cout<<"\ndistance:"<<"\n";
          cout<<"feet:"<<feet;
          cout<<" inches:"<<inches<<"\n";
      }  
     
     void calculate_dis()
      {
          int tot=(feet*12)+inches;
          cout<<"total distances in inches:"<<tot;
          total_dis=tot;
      }
      void sum_dis(dis d1,dis d2)
      {
          int sum=d1.total_dis+d2.total_dis;
          cout<<"\nsum of the the 2 distant objects in inches:"<<sum;
          int tot_feet=sum/12;
          int tot_inches=sum%12;
          cout<<"\nsum:feet:"<<tot_feet<<" inches:"<<tot_inches;
      }
}d1,d2;
int main()
{
     d1.set_feet(2);
     d2.set_feet(5);
     d1.set_inches(4);
     d2.set_inches(5);
     d1.get_dis();
     d1.calculate_dis();
     d2.get_dis();
     d2.calculate_dis ();
     d1.sum_dis(d1,d2);
     return 0;
     }

	

