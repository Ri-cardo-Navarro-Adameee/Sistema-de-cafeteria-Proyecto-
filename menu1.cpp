#include <iostream>
using namespace std;
 

string nombreCombos[6]={
    "Combo Desayuno:","Combo Tradiconal:","Combo Armuerzo:","Combo Salvadoreno:","Combo Tipico: ","Combo Snack:"};

float precios[6]={1.75,1.75,3.50,3.75,2.50,2.00};


void combosMenu(){
    int opcion,cantidad;
    float total;


    cout<<"=====MENU DE COMBOS====="<<endl;

    for(int i=0; i<6; i++){
        cout<<i+1<<"."<<nombreCombos[i];

        switch (i){
     case 0:
         cout << "Pupusas + Cafe" << endl;
        break;
    case 1:
         cout << "Desayuno Tipico + Cafe" << endl;
         break;
    case 2:
          cout << "Carne + Coca Cola" << endl;
          break;
    
    case 3:
          cout << "Sopa de Pata + Coca cola" << endl;
          break;

    case 4:
          cout << "Empanadas, Elote Loco, Yuca Frita"<<endl;
          break;

    case 5:
         cout <<"Chips + Coca cola"<< endl;
         break;
     }
     cout<<"-$"<<precios[i]<<endl;

    }

    cout<<"Seleccione un combo:"<<endl;
    cin>>opcion;

    if(opcion>=1 && opcion<=6){
        cout<<"Selecciono:"<<nombreCombos[opcion-1]<<endl;

        cout<<"Ingrese la cantidad:"<<endl;
        cin>>cantidad;

        if(cantidad>0){
            total=precios[opcion-1]*cantidad;
            cout<<"Total a pagar: $"<<total<<endl;
        }else{
            cout<<"Cantidad no invalida"<<endl;
        }
    }
    else{
        cout<<"Opcion invalida"<<endl;
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