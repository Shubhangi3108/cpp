#include<iostream>
using namespace std;
class reverse_num
{
private:
int n,i;
public:
reverse_num()
{
cout<<"Enter number to reverse num: ";
cin>>n;
}
~reverse_num(){}
void print_result()
{
cout<<endl<<"The reverse num of the Entered number: ";
for(i=n;n>0;n=n/10)
{
cout<<n%10;
}
}
};
int main()
{
reverse_num r;
r.print_result();
}
