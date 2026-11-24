#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// Funcion de katia
void menu()
{
    ifstream archivo("menu.txt");

    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo del menu." << endl;
        return;
    }
    int numero;
    string nombre;
    float precio;
    char separador;

    cout << "======MENU DE COMBOS======" << endl;

    while (archivo >> numero >> separador)
    {

        getline(archivo, nombre, '|');
        archivo >> precio;

        cout << numero << "." << nombre << "-$" << precio << endl;
    }
    archivo.close();
}

void tomaPedido()
{
    int opcion = 0, cantidad = 0;
    char continuar;

    ofstream archivo("pedido.txt", ios::app);

    if (!archivo.is_open())
    {
        cout << "Error al abrir el archivo del menu." << endl;
        return;
    }

    do
    {
        cout << "Seleccione el numero de combo:" << endl;
        cin >> opcion;

        if (opcion >= 1 && opcion <= 6)
        {
            cout << "Ingrese la cantidad:" << endl;
            cin >> cantidad;

            if (cantidad > 0)
            {
                archivo << opcion << "|" << cantidad << endl;
                cout << "Pedido Realizado" << endl;
            }
            else
            {
                cout << "La cantidad debe ser mayor a cero." << endl;
            }
        }
        else
        {
            cout << "Opcion de combo invalida." << endl;
        }
        cout << "Desea agregar otro pedido? (S/N):" << endl;
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');
    archivo.close();
}

// Funciones de ticket.
string NombreProducto(int codigo)
{
    string nombre;
    switch (codigo)
    {
    case 1:
        nombre = "Combo Desayuno.";
        break;
    case 2:
        nombre = "Combo Tipico.";
        break;
    case 3:
        nombre = "Combo Almuerzo.";
        break;
    case 4:
        nombre = "Combo Especial.";
        break;
    case 5:
        nombre = "Combo Tipico.";
        break;
    case 6:
        nombre = "Combo Snack.";
        break;
    }
    return nombre;
}
double PrecioProducto(int codigo)
{
    double precio;
    switch (codigo)
    {
    case 1:
        precio = 1.75;
        break;
    case 2:
        precio = 1.75;
        break;
    case 3:
        precio = 3.50;
        break;
    case 4:
        precio = 3.00;
        break;
    case 5:
        precio = 2.50;
        break;
    case 6:
        precio = 2.00;
        break;
    }
    return precio;
}

double Ticket()
{

    ifstream pedido("pedido.txt");
    if (!pedido)
    {
        cout << "No se ha guardado ningun pedido. " << endl;
        return 0;
    }

    ofstream ticket("Ticket.txt", ios::app);
    int codigo = 0, cantidad = 0;
    double total = 0, subtotal = 0;
    char separador;

    cout << "=== Ticket De Venta ===" << endl;
    ticket << " Ticket De Venta " << endl;

    while (pedido >> codigo >> separador >> cantidad)
    {
        subtotal = PrecioProducto(codigo) * cantidad;
        total = total + subtotal;

        cout << NombreProducto(codigo) << endl;
        cout << " Codigo: " << codigo << endl;
        cout << " Cantidad: " << cantidad << endl;
        cout << " $ " << subtotal << endl;

        ticket << NombreProducto(codigo) << "Codigo: " << codigo << " Cantidad: " << cantidad << " $ " << subtotal << endl;
    }
    cout << " Total: $ " << total << endl;
    ticket << " Total: $ " << total << endl;
    ticket << "-------------------------" << endl;

    pedido.close();
    ticket.close();
    ofstream limpiar("pedido.txt");
    limpiar.close();
    if (total > 0){
        ofstream cierre ("cierre_dia.txt", ios :: app);
        if (cierre.is_open()){
            cierre << total <<endl;
            cierre.close();
        }
    }
    return total;
}
// Fin funciones Ticket.

void InicioSesion(string usuario, string contrasena)
{
    int opcion;
    string nuevocombo;
    char repetir = 's';
    if (usuario == "r" && contrasena == "1")
    {
        do
        {

            cout << "Bienvenido al menu administrador" << endl;
            cout << "1. Ver menu" << endl;
            cout << "2. Agregar productos al menu" << endl;
            cout << "3. Cierre del dia" << endl;
            cout << "4. Salir" << endl;
            cin >> opcion;
            // (Ricardo) Esta parte se realizo con IA. Resuelve el problema de cuando se ingresa una variable que no sea un numero entero.
            if  (cin.fail())
            {
                cin.clear();
                cin.ignore (1000, '\n');
                opcion = 0;
            }
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
                    while (getline(archivo, linea))
                        cout << linea << endl;
                }
                archivo.close();
                break;
            }

            case 2:
            {
                ofstream archivo("menu.txt", ios::app);
                if (!archivo.is_open())
                {
                    cout << "No se puede abrir el archivo" << endl;
                }
                else
                {
                    cout << "Ingrese un nuevo con su precio para agregar en el menu" << endl;
                    cin.ignore();
                    getline(cin, nuevocombo);
                    archivo << "\"" << nuevocombo << "\"" << endl;
                    archivo.close();
                    cout << "Producto agregado" << endl;
                }
                break;
            }

            case 3:
            {
                ifstream archivoCierre("cierre_dia.txt");
                double montoticket = 0.0, totalDia = 0.0;
                int numeroticket = 0;
                cout << "==== CIERRE DEL DIA ====" << endl;
                if (!archivoCierre.is_open())
                {
                    cout << "No hay registros de ventas" << endl;
                }
                else
                {
                    while (archivoCierre >> montoticket){
                        numeroticket++;
                        totalDia+= montoticket;
                        cout<<"Ticket #"<<numeroticket<<": $ "<<montoticket<<endl;
                    }
                    archivoCierre.close ();
                    cout<<"-------------------------------------"<<endl;
                    cout<<"Total de tickets emitidos: "<<endl;
                    cout<<"Ganacia total del dia: $"<<totalDia<<endl;
                }

                break;
            }
            case 4:
                cout << "Fin." << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;
                break;
            }
            // Parte nueva
            if (opcion != 4)
            {
                cout << "Desea volver a intentarlo" << endl;
                cin >> repetir;
            }
            else
            {
                cout << "Fin." << endl;
            }
        } while (repetir == 's' || repetir == 'S');
    }
    else
    {

        // Mostra el menu de katia
        do
        {
            cout << "----SISTEMA DE CAFETERIA----" << endl;
            cout << "1.Menu y Pedido" << endl;
            cout << "2.Ticket" << endl;
            cout << "3.Salir" << endl;
            cout << "Elija una opcion" << endl;
            cin >> opcion;
if  (cin.fail())
            {
                cin.clear();
                cin.ignore (1000, '\n');
                opcion = 0;
            }
            switch (opcion)
            {
            case 1:
                menu();
                tomaPedido();
                break;

            case 2:
                cout << "Ticket" << endl;
                Ticket();
                break;

            case 3:
                cout << "Saliendo del programa" << endl;
                break;

            default:
                cout << "Opcion invalida" << endl;
                break;
            }
            if (opcion != 3)
            {
                cout << "Desea volver a intentarlo?" << endl;
                cin >> repetir;
            }
            else
            {
                cout << "Fin" << endl;
            }

        } while (opcion != 3);
        cout << "Menu cafeteria" << endl;
    }
}

int main()
{
     string usuario = "", contrasena = "";
    char volverlogin =  's';
    do{
    cout << "----SISTEMA DE CAFETERIA----" << endl;
    cout << "Introduzca el usuario" << endl;
    cin >> usuario;
    cout << "Introduzca la contrasena" << endl;
    cin >> contrasena;
    InicioSesion(usuario, contrasena);
    cout<<"Desea volver a ingresar usuario y contrasena?"<<endl;
    cin >> volverlogin;
    } while (volverlogin == 's' || volverlogin == 'S');
    
    cout<<"Programa finalizado."<<endl;

    return 0;
}