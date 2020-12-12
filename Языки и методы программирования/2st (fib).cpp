#include <iostream>
using namespace std;

long long int fib(int lng) {
   
    int f[lng];

    for(int i=1; i <= lng; i++) {
        if ( i == 1 | i == 2) {
            f[i] = 1;
            cout << f[i] << " ";
        } else {
            f[i] = f[i-1] + f[i-2];
            cout << f[i] << " ";
        }
    }
    return (0);
}
 

int main() {

    int n = 0;
    cin >> n;
    fib(n);
 

    return(0);
}
