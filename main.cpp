#include <iostream>
#include <cstdlib>   // para system()
#include "src/reservatorio.hpp"

using namespace std;


int main(){

    // criação do objeto reservatório
    Reserv r(0,0);

    int opcao = -1;
    float dias;
    system("cls");
    while(opcao != 0){
        cout << "\n\t\t+-----------------------------------------------------------+\n";
        cout << "\n\t\t|           SISTEMA DE CONTROLE DE RESERVATORIO             |\n";
        cout << "\n\t\t+-----------------------------------------------------------+\n";
        cout << "\n\t\t|   1 - Definir capacidade maxima                           |\n";
        cout << "\n\t\t|   2 - Informar se possui aditivos                         |\n";
        cout << "\n\t\t|   3 - Abastecer reservatorio                              |\n";
        cout << "\n\t\t|   4 - Distribuir agua para casas                          |\n";
        cout << "\n\t\t|   5 - Ver nivel de agua                                   |\n";
        cout << "\n\t\t|   6 - Calcular dias restantes                             |\n";
        cout << "\n\t\t|   7 - Calculo de agua com aditivos                        |\n";
        cout << "\n\t\t|   8 - Verificar estado do reservatorio                    |\n";
        cout << "\n\t\t|   0 - Sair                                                |\n";
        cout << "\n\t\t+-----------------------------------------------------------+\n";

        cout << "\n\t\tEscolha uma opcao: ";
        cin >> opcao;

        switch(opcao){

            case 1:
                r.setCapacidade_max();
                break;

            case 2:
                r.setAditivos();
                break;

            case 3:
                r.setAbastecer();
                break;

            case 4:
                r.setDistribuicao();
                break;

            case 5:
                r.getVerNivel_agua();
                break;

            case 6:

                // uso de referência
                r.getCalcular_dia(dias);
                cout << "\nA agua durara aproximadamente " << dias << " dias.\n";

                break;
            case 7:
                r.getCalculo();
                break;
            case 8:
                r.getVerificar_reser();
                break;

            case 0:
                cout << "\nEncerrando sistema...\n";
                break;

            default:
                cout << "\nOpcao invalida!\n";
        }
        if(opcao != 0){ // sistema de pausa depois de cada função acessada.
            cout << "\n\n";
            system("pause");
        }

    }
    
    return 0;
}