#include <iostream>
using namespace std;

void combos(int opcion){
    cout << "1. Combo Desayuno: Pupusas o Tamales + Cafe -$1.75" << endl;
    cout << "2. Combo Tipico: Desayuno Tipico + Cafe -$1.75" << endl;
    cout << "3. Combo Almuerzo: Pollo o Carne + Coca Cola -$3.50" << endl;
    cout << "4. Combo Especial: Sopa de Pata + Coca cola -$3.00" << endl;
    cout << "5. Combo Tipico: Empanadas, Elote Loco, Yuca Frita -$2.50"<<endl;
    cout <<"6. Combo Snack: Churro Jalapeno o Chips + Coca cola -$2.00"<< endl;
    

     cout<<"Elija una opcion"<<endl;
     cin>>opcion;


     switch (opcion)
     {
     case 1:
         cout << "1. Combo Desayuno: Pupusas o Tamales + Cafe -$1.75" << endl;
        break;
    case 2:
         cout << "2. Combo Tipico: Desayuno Tipico + Cafe -$1.75" << endl;
         break;
    case 3:
          cout << "3. Combo Almuerzo: Pollo o Carne + Coca Cola -$3.50" << endl;
          break;
    
    case 4:
          cout << "4. Combo Especial: Sopa de Pata + Coca cola -$3.00" << endl;
          break;

    case 5:
          cout << "5. Combo Tipico: Empanadas, Elote Loco, Yuca Frita -$2.50"<<endl;
          break;

    case 6:
         cout <<"6. Combo Snack: Churro Jalapeno o Chips + Coca cola -$2.00"<< endl;
         break;


     default:
     cout<<"Opcion invalida"<<endl;
        break;
     }

}

int main (){
    int opcion=0,TomaPedido=0,cantidad=0;
    float subTotal=0,totalFinal=0,precioProducto=0;


    cout<<"----SISTEMA DE CAFETERIA----"<<endl;
    cout<<"1.Menu y Pedido"<<endl;
    cout<<"2.Ticket"<<endl;
    cout<<"3.Salir"<<endl;
    cout<<"Elija una opcion"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 1:
    
       cout<<"----MENU DE CAFETERIA----"<<endl;
       combos(opcion);
        break;
    case 2:


    
    default:
        break;
    }

   
return 0;
}