#include <iostream>
#include <string>
#include <fstream>
using namespace std;
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