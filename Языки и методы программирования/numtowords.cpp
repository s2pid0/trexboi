#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    
    
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

string sot[] = {"","сто","двести","триста","четыреста","пятьсот","шестьсот", "семьсот","восемьсот","девятьсот",};

string desiat[] = {"","двадцать","тридцать","сорок","пятьдесят","шестьдесят", "семьдесят","восемьдесят","девяносто" };

string edm[] = { "", "один", "два", "три", "четыре", "пять","шесть"," семь","восемь", "девять", "десять"};

string edw[] = {"","одна", "две", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};

string toten[] = {"одинадцать", "двенадцать", "тринадцать", "четырнадцать", "пятнадцать", "шестнадцать", "семнадцать", "восемьнадцать", "девятнадцать"};

string thousand[] =  {"", "тысяча", "тысячи", "тысяч"};

string mln[] = {"","миллион", "миллиона", "миллионов"};

    unsigned long int x;
    int f;

    cin >> x;

    if ( x > 10 & x < 20) 
        cout << toten[ x % 10 - 1];
    else if ( x >= 20 & x < 100)
        cout << desiat[ x / 10 - 2] << " " << edm[ x % 10];
    else if ( x >= 100) {
        f = x / 1000;
        f = f % 10;
        if ( f < 1)
            f = 0;
        else if ( f >= 1 & f < 2)
            f = 1;
        else if ( f >= 2 & f < 5)
            f = 2;
        else if ( f >= 5) {
            if ( x / 1000 % 10 >= 1 & x / 1000 % 10 < 1)
                f = 1; 
            else 
                f = 3;
        }
    }
    
    cout << "f= " << f << endl;
    
    if ( x / 1000 < 10)
        cout << edw[ x / 1000] << " ";
    else if ( x / 1000 >= 10 & x / 1000 < 20 ){
        cout << toten [ x / 1000 / 10 - 1 ] << " ";
        f = 3;
    } else if ( x / 1000 >= 20 & x / 1000 < 100 ) {
        cout << desiat[ x / 10000 - 2 ] << " ";
        cout << edw[ x / 1000 % 10 ] << " ";
    } else if ( x / 1000 >= 100 & x / 1000 < 1000) {
        cout << sot[ x / 1000 / 100 - 1 ] << " ";
        cout << desiat[ x / 1000 % 100 / 10 - 2 ] << " ";
        cout << edw [ x / 1000 % 10 ] << " ";
    } else if ( x / 1000 >= 1000 & x / 1000000 < 100) {
        
        if ( x / 1000000 >= 10) {
            
        cout << sot[ x / 10000000 / 100 ] << " ";
        cout << desiat[ x / 100000000 % 100 / 10 - 1 ] << " ";
        cout << edw [ x / 100000000 % 10 ] << " ";   
        }
        
        cout << edm[ x / 1000000 % 10 ] << " ";
        
        
        if ( x / 1000000 % 10 == 1)
            cout << mln[1] << " ";
        else if ( x / 1000000 % 10 > 1 & x / 1000000 % 10 < 5)
            cout << mln[2] << " ";
        else if ( x / 1000000 % 10 >= 5 & x / 1000000 % 10 < 10)
            cout << mln[3] << " ";

        cout << sot[ x / 100000 % 10 ] << " ";
        cout << desiat[ x / 1000 % 100 / 10 - 1 ] << " ";
        cout << edw [ x / 1000 % 10 ] << " "; 
    }
    
    cout << thousand[f] << " " << sot[ ( x / 100 ) % 10 ] << " " << desiat[ ( x / 10 ) % 10 - 1] << " " << edm[ x % 10 ];
    
    return 0;
}
    


        
