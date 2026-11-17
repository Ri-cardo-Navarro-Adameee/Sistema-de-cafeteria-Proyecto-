#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
void combos(string nombre[]){
    nombre[0]="Combo Desayuno: Pupusas + Cafe -$1.75";
    nombre[1]="Combo Tradicional: Desayuno Tipico + Cafe -$1.75";
    nombre[2]="Combo Armuerzo: Carne + Coca-Cola -$3.50";
    nombre[3]="Combo Salvadoreno: Sopa de pata + Coca-Cola -$3.55";
    nombre[4]="Combo Tipico: Empanadas, Elote loco, Yuca frita -$2.50";
    nombre[5]="Combo Snack: Chips + Coca-Cola -$2.00";
}


void combosMenu(){
    string nombre[6];
    combos(nombre);

    cout<<"======MENU DE COMBOS======"<<endl;

    for(int i=0;  i<6; i++){
        cout<<i+1<<"."<<nombre[i]<<endl;
    }
}


int main (){
    int opcion=0;

    cout<<"----SISTEMA DE CAFETERIA----"<<endl;
    cout<<"1.Menu y Pedido"<<endl;
    cout<<"2.Ticket"<<endl;
    cout<<"3.Salir"<<endl;
    cout<<"Elija una opcion"<<endl;
    cin>>opcion;

    switch (opcion){
        case 1:
        combosMenu();
        break;

        case 2:
        cout<<"Ticket"<<endl;
        break;

        case 3:
        cout<<"Saliendo del programa"<<endl;
        break;

        default:
        cout<<"Opcion invalida"<<endl;
         break;
     }
    

   
return 0;
}
