#include <iostream>
using namespace std;

int main() {
  int x, fact;
  cin >> x; //ввод числа
  fact = x; //присваиваем значение x факториалу, так как n!=1*2*3*...*n, т.е. мы перемножаем n с числами от 1 до n-1
  for (int i=1; i < x; i++) { //циклом увеличиваем второе число в произведении, i<x не дает перемножить x на x
    fact = fact * i;
  }
  cout<< "Factorial of number " << x << " is " << fact << endl; //вывод
  system("pause");
  return(0);
}
