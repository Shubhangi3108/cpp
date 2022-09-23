#include<iostream>
using namespace std;
class cube_of_num
{
private:
int index,num;
public:
cube_of_num()
       {
        index=1;
        num=0;
       }
        cube_of_num(int p, int q)
       {
        index=p;
        num=q;
}
void run()
{
cout<<"enter the number :"<<endl;
cin>>num;
for(index=1; index<=num; index++)
{
cout<<" The cube of"<<index<<"is ="<<(index*index*index)<<endl;

}
}
~cube_of_num()
{
cout<<" clear :"<<endl;
}
};
int main()
   {
    int p,q;
cube_of_num obj(p,q);
obj.run();
}
