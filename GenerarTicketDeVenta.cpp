#include <iostream>
using namespace std;

string NombreProducto(int codigo){
    string nombre;
    switch (codigo) {
        case 1:
        nombre="Combo Desayuno.";
        break;
        case 2:
        nombre="Combo Tipico.";
        break;
        case 3:
        nombre="Combo Almuerzo.";
        break;
        case 4:
        nombre="Combo Especial.";
        break;
        case 5:
        nombre="Combo Tipico.";
        break;
        case 6:
        nombre="Combo Snack.";
        break;
    }
    return nombre;
}
double PrecioProducto(int codigo){
    double precio;
    switch(codigo){
        case 1:
        precio=1.75;
        break;
        case 2:
        precio=1.75;
        break;
        case 3:
        precio=3.50;
        break;
        case 4:
        precio=3.00;
        break;
        case 5:
        precio=2.50;
        break;
        case 6:
        precio=2.00;
        break;
    }
    return precio;
}
    


double Ticket(int codigo[], int precio[], int cantidad){
    double total=0,subtotal=0;

    cout<<"\n Ticket de venta. \n "<<endl;
    for(int i=0; i<cantidad; i++){
        subtotal=//Toma de pedido  (pedido y cantidades)
        total= total+subtotal;



        
    }


}

int main(){












    return 0;
}


//Administrador y usuario
//control del dia
//poder agregar mas cosas dentro del menu
//Meter mas comida al menu
//Hacer menus por cada tiempo de comida y bebidas aparte
