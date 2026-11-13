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
    


double Ticket(int codigo[], int cantidad[], int lineas){
    double total=0,subtotal=0;

    cout<<"\n Ticket de venta. \n "<<endl;
    for(int i=0; i<lineas; i++){
        subtotal= PrecioProducto(codigo[i])*cantidad[i];//use ia para averiguar si podia multiplicar algo por la funcion.
        total= total+subtotal;

        cout<<NombreProducto(codigo[i])<<endl;
        cout<<" Codigo "<<codigo[i]<<endl;
        cout<<" Cantidad "<<cantidad[i]<<endl;
        cout<<" $ "<<subtotal<<endl;
    }
    cout<<"Total a pagar: "<<total<<endl;
    return total;
}



