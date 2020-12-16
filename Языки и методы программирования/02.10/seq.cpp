#include <iostream>
using namespace std;

int facto (int num) 
{
    int fact;
    fact = num; 
    for (int i=1; i < num; i++) { 
    fact = fact * i;
  }
  cout<< "Factorial of number " << num << " is " << fact << endl; 
}


int check(int num)
{
    for ( int i = 2; i < num; i++)
    {
        if (num % i == 0) { return 0;
        } else
        { 
            return 1;
        }
    }
}



int main() {
    int x, choise;
    cin >> x; 
    cout << "1) Simple numbers\n2) Factorial of number\n";
    cin >> choise;
    switch (choise) {
        case 1: {
            cout << "Your sequence is " << endl;
            for (int i=1; i <= x; i++) { 
            if ( check (i) ) 
            {
                cout << i << " ";
            }
        break;
            }
        case 2 :
            facto(x);
        break;
  }
  cout << endl;
  }
  system ("pause");
  return(0);
}
