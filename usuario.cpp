#include <iostream>
using namespace std;
void InicioSeccion(string usuario, string contrasena)
{
    int opcion;
    if (usuario == "ricardo" && contrasena == "1234")
    {
        do{
            
        cout << "Bien venido al menu administrador" << endl;
        cout << "1. Ver menu" << endl;
        cout << "2. Agregar productos al menu" << endl;
        cout << "3. Inventario" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            // Mostra menu
            break;
        case 2:
            // Agregar productos
            break;
        case 3:
        // Inventario
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
        } while (opcion!= 4 );
    }
    else
    {
        // Mostra el menu de katia
        cout<<"Menu cafeteria"<<endl;
    }
}
int main()
{
string usuario = "", contrasena = "";
cout<<"----SISTEMA DE CAFETERIA----"<<endl;
cout<<"Introduzca el usuario"<<endl;
cin >> usuario;
cout<<"Introduzca la contrasena"<<endl;
cin >> contrasena;
InicioSeccion(usuario, contrasena);
    return 0;
}