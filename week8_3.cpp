include<iostream>
using namespace std;
 
class X
{
    int num_X;
          public:
             
    A()
    {
        num_Y=10;
    }
    friend class Y;    //friend class
};
 
class Y
{
    public:
        void display(X &t)
        {
            cout<<endl<<"The value of num_X="<<t.num_X;
        }   
};
 
int main()
{
    X _x;
    Y _y;
    _y.display(_x);
    return 0;
}
