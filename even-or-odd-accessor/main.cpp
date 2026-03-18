// Create a function or callable object that takes
// an integer as an argument and returns
// "Even" for even numbers or "Odd" for odd numbers.
// The function should also return "Even" or "Odd"
// when accessing a value at an integer index.

// For example:
// evenOrOdd(2); //'Even'
// evenOrOdd[2]; //'Even'
// evenOrOdd(7); //'Odd'
// evenOrOdd[7]; //'Odd'

#include <iostream>
#include <string>

class EvenOrOdd {
  std::string evenOrOdd(int number) {
    return number % 2 == 0 ? "Even" : "Odd";
  }  
public:
  std::string operator[] (int num) {
    return this->evenOrOdd(num);
  };
  
  std::string operator() (int num) {
    return this->evenOrOdd(num);
  };
};

EvenOrOdd evenOrOdd;

void printer(std::string str) {
  std::cout << str << std::endl;
};

int main() {
  printer(evenOrOdd(2)); //'Even'
  printer(evenOrOdd[2]); //'Even'
  printer(evenOrOdd(7)); //'Odd'
  printer(evenOrOdd[7]); //'Odd'
}