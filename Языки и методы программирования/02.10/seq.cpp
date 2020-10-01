#include <iostream>
using namespace std;

int main() {
  int x, fact;
  cin >> x; //ввод числа-границы для нашей последовательности
  cout<< "Your sequence is " << endl;
  for (int i=0; i <= x; i++) { //выводим последовательность, если не знаешь как работает цикл фор то иди учи уроки а не пиво пей 
    cout << i << " ";
  }
  cout << endl;
  system("pause");
  return(0);
}
