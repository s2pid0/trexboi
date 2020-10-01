#include <iostream>
using namespace std;

 int main()
 {
int a[4]; int k = 0;

for ( int x = 1000; x < 10000; x++)
  {

    a[1] = x % 10;
    a[2] = ( x % 100 ) / 10;
    a[3] = ( x % 1000) / 100;
    a[4] = x / 1000;

    //1 2 и 3 4
    if ( (a[1] * 10 + a[2]) * ( a[3] * 10 + a[4]) == x  )
    {
      cout << x << endl;
    } else if ( (a[2] * 10 + a[1]) * ( a[3] * 10 + a[4]) == x  )
      {
        cout << x << endl;
    } else if ( (a[1] * 10 + a[2]) * ( a[4] * 10 + a[3]) == x  )
      {
        cout << x << endl;
    } else if ( (a[2] * 10 + a[1]) * ( a[4] * 10 + a[3]) == x  )
      {
        cout << x << endl;
    } //1 4 и 2 3
    else if ( (a[1] * 10 + a[4]) * ( a[2] * 10 + a[3]) == x  )
      {
        cout << x << endl;
    } else if ( (a[4] * 10 + a[1]) * ( a[2] * 10 + a[3]) == x  )
      {
        cout << x << endl;
    } else if ( (a[1] * 10 + a[4]) * ( a[3] * 10 + a[2]) == x  )
      {
        cout << x << endl;
    } else if ( (a[4] * 10 + a[1]) * ( a[3] * 10 + a[2]) == x  )
      {
        cout << x << endl;
    } //1 3 и 2 4
    else if ( (a[1] * 10 + a[3]) * ( a[2] * 10 + a[4]) == x  )
      {
        cout << x << endl;
    } else if ( (a[3] * 10 + a[1]) * ( a[2] * 10 + a[4]) == x  )
      {
        cout << x << endl;
    } else if ( (a[1] * 10 + a[3]) * ( a[3] * 10 + a[4]) == x  )
      {
        cout << x << endl;
    } else if ( (a[3] * 10 + a[1]) * ( a[4] * 10 + a[2]) == x )
      {
        cout << x << endl;
    }
    k++;
  }
/*for ( int m = 0; m < 10000; m++)
  {
    if ( vamp[m] != 0)
      {
        cout << vamp[m] << endl;
      }
  }*/
system("pause");
return(0);

 }
