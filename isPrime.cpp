#include <iostream>


class prime {
int n;
bool is_prime = true;

public:
    int takeInput(){
    std::cin>>n;
        }
public:
    void isPrime(){
        // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (int i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    std::cout << n << " is a prime number";
  else{
    std::cout << n << " is not a prime number";
  }}};
int main(){
prime p;
p.takeInput();
p.isPrime();

return 0;}




