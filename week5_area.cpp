#include <iostream>
using namespace std;

class Area
{
private:
    int area;
public:
    void calculate(int l, int b)
    { 
        area=l*b;
        cout<<"Area of Rectangle : "<<area<<endl;
    }

    void calculate(int a)
    {
        area=a*a;
        cout<<"Area of Sq: "<<area<< endl;
    }
};

int main()
{
    Area a;
    a.calculate(6,7);
   a.calculate(3);
}               
