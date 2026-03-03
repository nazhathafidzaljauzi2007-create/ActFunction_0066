#include<iostream>
using namespace std; 

      float p,l;

void Input (){
    cout << "Masukkan Panjang : " ;
    cin >> p;
    cout << "Masukkan Lebar : " ;
    cin >> l;
}

float LuasPersegi(){ 
    return p*l;
}

void Output (){
    cout << "Hasilnya = " << LuasPersegi();
}

int main()
{
    Input();
    Output();

}

