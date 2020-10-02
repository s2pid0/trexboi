#include <iostream>
using namespace std;

int main() {
  int x, fact;
  cin >> x; //ввод числа
  fact = x; //присваиваем значение x факториалу
  for (int i=1; i < x; i++) { 
    fact = fact * i;
  }
  cout<< "Factorial of number " << x << " is " << fact << endl; 
  system("pause");
  return(0);
}
