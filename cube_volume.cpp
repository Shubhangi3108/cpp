#include<iostream>
using namespace std;
class cube_volume
{
private:
int side,volume;
public:
cube_volume(){
 side=1;
}
cube_volume(int side_input){
    side = side_input;
}
int calculate(){
volume = side*side*side;
cout<<volume;
return 0;
}

~cube_volume()
{
cout<<" clear :"<<endl;
}
};

int main()
   {
    int side_input;
    cout<< "Enter side";
    cin>> side_input;
cube_volume obj(side_input);
obj.calculate();
}
