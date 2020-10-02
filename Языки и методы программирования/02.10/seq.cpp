#include <iostream>
using namespace std;

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
  int x, fact;
  cin >> x; 
  cout << "Your sequence is " << endl;
  for (int i=1; i <= x; i++) { 
    if ( check (i) ) 
    {
        cout << i << " ";
    }
  }
  cout << endl;
  system("pause");
  return(0);
}
