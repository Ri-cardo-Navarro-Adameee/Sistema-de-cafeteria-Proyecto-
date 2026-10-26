#include <iostream>
using namespace std;

int main (){
    int opcion=0,TomaPedido=0,cantidad=0;
    float pupusas=0.50,DesaynoTipico=2.00,tamales=0.60,pollo=2.50;
    float carne=2.50,SopaPata=2.00,empanadas=0.70,eloteLoco=2.00;
    float YucaFrita=2.00,CocaCola=1.00,cafe=1.00,ChurroJalapeno=0.50,chips=1.00;


    cout<<"----SISTEMA DE CAFETERIA----"<<endl;
    cout<<"1.Menu"<<endl;
    cout<<"2.Mostrar Pedido"<<endl;
    cout<<"3.Finalizar Compra"<<endl;
    cout<<"4.Salir"<<endl;
    cout<<"Elija una opcion"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 1:
        cout<<"-----MENU-----"<<endl,
        cout<<"1.Pupusas"<<endl; 
        cout<<"2.Desayuno Tipico"<<endl; 
        cout<<"3.Tamales"<<endl; 
        cout<<"4.Pollo"<<endl; 
        cout<<"5.Carne"<<endl; 
        cout<<"6.Sopa de pata"<<endl; 
        cout<<"7.Empanadas"<<endl; 
         cout<<"8.Elote loco"<<endl; 
         cout<<"9.Yuca frita"<<endl; 
         cout<<"10.Coca Cola"<<endl; 
         cout<<"11.Cafe"<<endl; 
         cout<<"12.Churro Jalapeno"<<endl; 
         cout<<"13.Chips"<<endl; 
         cout<<"Tome su pedido"<<endl;
         cin>>TomaPedido;


         cout<<"Ingrese la cantidad"<<endl;
         cin>>cantidad;
         

        break;
    
    default:
        break;
    }

   
return 0;
}