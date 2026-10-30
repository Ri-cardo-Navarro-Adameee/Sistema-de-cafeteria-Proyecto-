#include <iostream>
using namespace std;

//Funcion para mostrar los productos
string NombreProducto(int codigo){
    string nombre=0;
    switch(codigo){
        case 1:
        nombre="Pupusas.";
        break;
        case 2: nombre="Desayuno Tipico.";
        break;
        case 3: nombre="Tamales.";
        break;
        case 4: nombre="Pollo.";
        break;
        case 5: nombre="Carne.";
        break;
        case 6: nombre="Sopa de pata.";
        break;
        case 7: nombre="Empanadas.";
        break;
        case 8: nombre="Elote Loco.";
        break;
        case 9: nombre="Yuca Frita.";
        break;
        case 10: nombre="Coca Cola.";
        break;
        case 11: nombre="Cafe.";
        break;
        case 12: nombre="Churro Jalapeno.";
        break;
        case 13: nombre="Chips.";
        break;
        default: nombre="No existe.";
        break;

    }
    return nombre;
}

//funcion para precio de los productos
float PrecioProducto(int codigo){
    float precio=0;
    switch(codigo){
        case 1:  precio = 0.50; 
        break;
        case 2:  precio = 2.00; 
        break;
        case 3:  precio = 0.60; 
        break;
        case 4:  precio = 2.50; 
        break;
        case 5:  precio = 2.50; 
        break;
        case 6:  precio = 2.00; 
        break;
        case 7:  precio = 0.70; 
        break;
        case 8:  precio = 2.00; 
        break;
        case 9:  precio = 2.00; 
        break;
        case 10: precio = 1.00; 
        break;
        case 11: precio = 1.00; 
        break;
        case 12: precio = 0.50; 
        break;
        case 13: precio = 1.00; 
        break;
        default: precio = 0;    
        break;
    }
    return precio;
}

int main(){












    return 0;
}

