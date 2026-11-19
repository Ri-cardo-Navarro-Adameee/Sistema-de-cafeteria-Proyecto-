#include <iostream>
#include <string>
#include <fstream>
using namespace std;
                ifstream archivoCierre("cierre_dia.txt");
                double montoticket = 0.0, totalDia = 0.0;
                int numeroticket = 0;
                cout << "==== CIERRE DEL DIA ====" << endl;
                if (archivoCierre.is_open())
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
                