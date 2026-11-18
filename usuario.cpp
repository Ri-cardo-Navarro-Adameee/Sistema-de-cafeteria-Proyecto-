#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//Funcion de katia
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



//Primera interfaz del usuario, de Ricar
void InicioSeccion(string usuario, string contrasena)
{
    int opcion;
    string nuevocombo;
    if (usuario == "r" && contrasena == "1")
    {
        do
        {

            cout << "Bienvenido al menu administrador" << endl;
            cout << "1. Ver menu" << endl;
            cout << "2. Agregar productos al menu" << endl;
            cout << "3. Cierre del dia" << endl;
            cin >> opcion;
            switch (opcion)
            {
            case 1:
            {
                string linea;
                ifstream archivo("menu.txt");

                if (!archivo.is_open())
                {
                    cout << "Error no se puede abrir" << endl;
                }
                else
                {
                    while(getline(archivo, linea) )
                    cout << linea << endl;
                    
                }
                archivo.close();
                break;
            }
            
            case 2: {
                ofstream archivo ("menu.txt", ios :: app);
if (!archivo.is_open()){
cout<<"No se puede abrir el archivo"<<endl;
} else {
cout<<"Ingrese un nuevo con su precio para agregar en el menu"<<endl;
cin.ignore();
getline (cin, nuevocombo);
archivo<<"\""<<nuevocombo<<"\""<<endl;
archivo.close ();
cout<<"Producto agregado"<<endl;
}

                 break;
            }
        
            case 3:
                // recaudo
            default:
                cout << "Opcion invalida" << endl;
                break;
            }
        } while (opcion != 4);
    }
    else
    {
        // Mostra el menu de katia
        
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
        cout << "Menu cafeteria" << endl;
    }
}
int main()
{
    string usuario = "", contrasena = "";
    cout << "----SISTEMA DE CAFETERIA----" << endl;
    cout << "Introduzca el usuario" << endl;
    cin >> usuario;
    cout << "Introduzca la contrasena" << endl;
    cin >> contrasena;
    InicioSeccion(usuario, contrasena);
    return 0;
}