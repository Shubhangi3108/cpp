#include <iostream>    
using namespace std;    
class Cal {    
    public:    
 int volume(int a){      
        return a * a * a;      
    }      
 int volume(int r , int h)      
    {      
        return 3.14 * r*r*h  ;    
    }      
 int volume(double r)      
    {      
        return (4/3)*3.14*r*r*r;      
    } 
};     
int main(void) {    
    Cal C;                                                     
    cout<<C.volume(10, 20)<<endl;    
        cout<<C.volume(10)<<endl;   
            cout<<C.volume(12.5)<<endl;   
         
   return 0;    
}  
