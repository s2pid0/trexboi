#include <Windows.h>
#include <iostream>
using namespace std;

int main()
    SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    
{
    int n,i,j,var;
    bool stop = true;
    cout << "Размерность массива\n";
    cin >> n;
    
    do {
    cout <<"Выберите вариант заполнения: \n1) Змейкой\n2) По главной диагонали\n3) Исключая главную и побочную\n4) По побочной диагонали\n\nВведите 0 для остановки программы\n";

    cin >> var;

    cout << "\n";//вывод
    
    
    switch (var) {
        case 1: {
            int mas[n][n] = 0;    
            int a{0};
            for ( i = 0; i < n; i++)
                for ( j = 0; j < n; j++)
                    mas[i][j] = 0; //обнуление
    
            for ( i = 0; i < n; i++) {
                if ( i % 2 != 0) 
                    a++;
            for ( j = 0; j < n; j++) {

                if ( i % 2 == 0 ) 
                    mas[i][j] = 1; 
                else {
                    if ( a % 2 != 0 ) 
                        mas[i][n - 1] = 1;
                    else 
                        mas[i][0] = 1;//змейкой
                    }
                }   
            }
            for (i = 0; i < n; ++i)
            {
                for (j = 0; j < n; ++j)
                {
                    cout << mas[i][j] << ' '; 
                }
                cout << "\n"; 
            }//вывод
            mas[n][n] = {0};//обнуление
            break;
        }
        case 2 : {
            int mas[n][n] = 0;            
            for ( i = 0; i < n; i++)
                mas[i][i] = 1; //главная            
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    cout << mas[i][j] << ' '; 
                }
                cout << "\n"; 
            }//вывод
            mas[n][n] = {0};//обнуление
            break;
        }
        case 3 : {
            int mas[n][n] = 0 ;            
            for ( i = 0; i < n; i++)
                for ( j = 0; j < n; j++) {
                    if ( i == j | i+j == n-1)
                        mas[i][j] = 0;
                    else
                        mas[i][j] = 1; //исключая главную и побочную
            }            
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    cout << mas[i][j] << ' '; 
                }
                cout << "\n"; 
            }//вывод
            mas[n][n] = {0};//обнуление
            break;
        }
        case 4 : {
            int mas[n][n] = 0;            
            for ( i = 0; i < n; i++)
                mas[i][n - 1 - i] = 1; //побочная           
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    cout << mas[i][j] << ' '; 
                }
                cout << "\n"; 
            }//вывод
            mas[n][n] = {0};//обнуление
            break;
        }
        case 0:
            stop = false;
            break;
    }
            

} while (stop);




    return 0;
}
