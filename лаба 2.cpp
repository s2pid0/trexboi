#include <iostream>
#include <conio.h>
 
using namespace std;
 
int Random(int min, int max) {
  return min + rand() % (max - min);
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    int lenght, h, i, j;
    string pass;
    char n;
    cout << "Будет выведено 8 паролей. Введите количество символов в пароле: " << endl;
    cin >> lenght;

    cout << "Ваши пароли: " << endl;
    for ( j = 0; j < 8; j++) {
        for (i = 0; i < lenght; i++) {
            h =Random( 33, 126);
//            cout << i << ". " << char(h) << " " << h << endl;
            pass.insert( i , 1 , char(h));
        }
            
        cout << pass << endl;;
        pass = "";
    }


       return 0;
}