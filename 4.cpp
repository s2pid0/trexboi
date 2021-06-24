using namespace std;
#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    int i, k, v;
    cout << "Количество элементов массива: ";
    cin >> i;
    
    cout << "Заполнить массив вручную или случайно?\n1. Вручную\n2. Случайно" << endl;
    
    float *array = new float[10];
    
    cin >> v;
    
    switch(v) {
        case 1:
            for (int n = 0; n < i; n++) {
                cout << "array[" << n << "] = ";
                cin >> array[n];
            }
        break;
        
        case 2:
            for (int n = 0; n < i; n++) {
                array[n] = (rand() % 10 + 1);
            }
        break;
    }
    
    cout << "Начальный массив:" << endl;
    for (int n = 0; n < i; n++) {
            cout << array[n] << endl;
    }
    
    
    cout << "1. Возрастание\n2. Убывание" << endl;
    cin >> v;
    switch (v)
	{
	case 1:
		for (int f = 0; f < (i - 1); f++) {
            for ( int j = 0; j < i - f - 1; j++) {
                if (array[j] > array [j + 1]) {
                    k = array[j];
                    array[j] = array [j + 1];
                    array [j + 1] = k;
            }
        }
    }
		break;
	case 2:
		for (int f = 0; f < (i - 1); f++) {
        for ( int j = 0; j < i - f - 1; j++) {
            if (array[j] < array [j + 1]) {
                k = array[j];
                array[j] = array [j + 1];
                array [j + 1] = k;
            }
        }
    }
		break;

	}

    cout << "Итоговый массив:" << endl;

    for (int n = 0; n < i; n++) {
            cout << array[n] << endl;
    }  
    return 0;
}
