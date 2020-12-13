#include <iostream>
using namespace std;

class Store {
    protected:
        int amountA;
        int amountB;
    
};

class Auto: protected Store {
    private:
        string infoA;
    public:
        void getAuto() {
            cout << amountA << endl;
        }
        void setAuto() {
            cin >> amountA;
            cout << "Now " << amountA << endl;
        }
        void setInfoA() {
            cin >> infoA;
        }
        void getInfoA() {
            cout << infoA << endl;
        }
        void getAllA() {
            cout << "Количество экземпляров: " << amountA << endl;
            cout << "Описание: " << infoA << endl;
        }
};

class Boat: protected Store {
    private:
        string infoB;
    public:
        void getAllB() {
            cout << "Количество экземпляров: " << amountB << endl;
            cout << "Описание: " << infoB << endl;
        }
        void getBoat() {
            cout << amountB << endl;
        }
        void setBoat() {
            cin >> amountB;
            cout << "Now " << amountB << endl;
        }
        void getInfoB() {
            cout << infoB << endl;
        }
};

int main() {

    setlocale(LC_ALL, "Russian");
    
    Auto merin;
    Boat bbt;
    
    merin.setAuto();
    bbt.setBoat();
    merin.setInfoA();
    
    merin.getAllA();
    bbt.getAllB();
}
