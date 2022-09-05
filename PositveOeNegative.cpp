#include <iostream>


class checker {
int n;


public:
    int takeInput(){
    std::cin>>n;
        }
public:
    int isPosOrNeg(){
        if(n>0){
            std::cout<<"Positve";
        }else{
            std::cout<<"negative";
        }
    }
   };
int main(){
checker c;
c.takeInput();
c.isPosOrNeg();

return 0;}




