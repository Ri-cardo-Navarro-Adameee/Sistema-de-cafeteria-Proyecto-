#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void InicioSeccion(string usuario, string contrasena)
{
    int opcion;
    string linea;
    if (usuario == "r" && contrasena == "1")
    {
        do
        {

            cout << "Bien venido al menu administrador" << endl;
            cout << "1. Ver menu" << endl;
            cout << "2. Agregar productos al menu" << endl;
            cout << "3. Recaudo" << endl;
            cin >> opcion;
            switch (opcion)
            {
           case 1: {
    ifstream archivo("menu.txt"); // Pon el nombre exacto que tiene en tu carpeta (con o sin .txt)
    
    if (!archivo.is_open()) {
        cout << "Error no se puede abrir" << endl;
    } else {
        getline(archivo, linea);
        cout << linea << endl;
        archivo.close();
    }
    break;
}

            break;
    
        case 2:
            // Agragar productos al menu. (El menu tiene que ser un archivo)

            break;
        case 3:
            // recaud
        default:
            cout << "Opcion invalida" << endl;
            break;
        }
    }
    while (opcion != 4)
        ;
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