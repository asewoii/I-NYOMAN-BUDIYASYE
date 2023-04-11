#include <iostream>

using namespace std;

int main (){
    float m, cm, inci;

    cout<<"masukan ukuran meter "<<endl;
    cin>>m;

    cm = m * 100;
    inci = m*100/2.54;

    cout<<"ukuran dalam cm "<<cm<<endl;
    cout<<"ukuran dalam inci "<<inci<<endl;

    return 0;
}