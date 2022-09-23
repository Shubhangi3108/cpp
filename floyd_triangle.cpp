
#include <iostream>
using namespace std;
 
 class floyd_triangle{
    private:
    public:
    int rows,num;
    //constructor 
    floyd_triangle(){
         cout << "Enter number of rows: ";
rows=1 ; num = 1;
    cin >> rows;
    }
int print_triangle(){
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
   ~floyd_triangle(){};
 };
int main(){
 floyd_triangle obj;
 obj.print_triangle();
    return 0;
}
