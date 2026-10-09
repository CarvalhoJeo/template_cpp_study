#include "Multiplicator.h"

int main(){
  int a_int = 5;
  int b_int = 10;
  double a_double = 2.5;
  double b_double = 5;

  std::cout << "INT MULTIPLY: " << multiply<int>(a_int, b_int) << std:: endl; 
  std::cout << "DOUBLE MULTIPLY: " << multiply<double>(a_double, b_double) << std:: endl; 
}