#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void menu(){
    ifstream archivo("menu.txt");
     
    if(!archivo.is_open()){
        cout<<"Error al abrir el archivo del menu."<<endl;
        return ;
    }
    int numero;
    string nombre;
    float precio;
    char separador;


    cout<<"======MENU DE COMBOS======"<<endl;
    
    while(archivo>>numero>>separador){

        getline(archivo,nombre,'|');
        archivo>>precio;

        cout<<nombre<<"."<<nombre<<"-$"<<precio<<endl;
    }
    archivo.close();
}

void tomaPedido(){
    int opcion=0,cantidad=0;
    char continuar;

    ofstream archivo("pedido.txt", ios::app);

    if(!archivo.is_open()){
        cout<<"Error al abrir el archivo del menu."<<endl;
        return;

    }

    do{

        cout<<"Seleccione el numero de combo:"<<endl;
        cin>>opcion;

        if(opcion>=1 && opcion<=6){
            cout<<"Ingrese la cantidad:"<<endl;
            cin>>cantidad;

            if(cantidad>0){
                archivo<<opcion<<"|"<<cantidad<<endl;
                cout<<"Pedido Realizado"<<endl;
            }
            else{
                cout<<"La cantidad debe ser mayor a cero."<<endl;
            }
        }else{
                cout<<"Opcion de combo invalida."<<endl;
            }
            cout<<"Desea agregar otro pedido? (S/N):"<<endl;
            cin>>continuar;
        }
        while(continuar=='S' || continuar=='s');
        archivo.close();

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
        menu();
        tomaPedido();
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

