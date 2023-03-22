#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int size_arr = 1;
int* calif = new int[size_arr];
int numero_calificaciones;

void PedirCalif();
void MuestraCalif();


int main(){
    PedirCalif();
    MuestraCalif();

    delete[]calif;

}

void PedirCalif(){
    cout<<"Dime cuantas calificaciones vas a agregar: "<<endl;
    cin>>size_arr;

    calif=new int[size_arr];

    //int calif[size_arr];
    for(int i=0;i<size_arr;i++){
        cout<<"Dame la calificacion: "<<i+1<<endl;
        cin>>calif[i];
    }
}

void MuestraCalif(){
    for(int i=0;i<size_arr;i++){
        cout<<"Calificacion #"<<i+1<<" : "<<calif[i]<<endl;
    }
}