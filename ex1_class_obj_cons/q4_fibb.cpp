#include<iostream>
using namespace std;
 
class Fibonacci
{
    int a, b, c;
    public:
    void display(int n)
    {
        a = 0;
        b = 1;
     
        cout << a << " " << b;
   
        for (int i = 1; i <= n - 2; i++)
        {
            c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
    }
 
};
int main()
{
    int n = 10;
    Fibonacci fib;
    cout<<"fibonnacci series:"<<endl;
    fib.display(n);
    return 0;
}

	

