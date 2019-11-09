
#include <cstdlib>
#include <iostream>

using namespace std;

void oddOrEven(int num);

int main() {
  std::cout << "Enter an Integer to check if it's odd or even and press enter" << '\n';
  int num;
  cin>>num;
  oddOrEven(num);
  return 0;
}

void oddOrEven(int num){
  if(num%2 == 0)
  {
    std::cout << "EVEN" << '\n';
  }
  else{
    std::cout << num<< " is ODD" << '\n';
  }
}
