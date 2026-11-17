#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
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
    

double Ticket(){
    //Esto lee la toma de pedido de Katia.
    ifstream pedido("Pedido.txt");
    if(!pedido){
        cout<<"No se ha guardado ningun pedido. "<<endl;
        return 0;
    }

    // Aca se va guardar el ticket
    ofstream ticket("Ticket.txt");
    int codigo=0, cantidad=0;
    double total=0, subtotal=0;

    cout <<"=== Ticket De Venta ==="<<endl;
    ticket <<" Ticket De Venta "<<endl;

    //Esto es lo que mostraran las "Lineas" del ticket.
    while(pedido>>codigo>>cantidad){
        subtotal=PrecioProducto(codigo)*cantidad;

    }
    
    
    pedido.close();
    pedido.close();
    return total;
}



