#include <iostream>
#include "reservatorio.hpp"
using namespace std;

//construtor da classe.
Reserv::Reserv(float capacidade_max, float nivel_agua){
    this->capacidade_max = capacidade_max;
    this->nivel_agua = nivel_agua; 
    diaAtual = 0; //inicialização dos dias.

    //
    for(int i = 0; i < 7; i++){
        consumo[i] = 0;
    }
};

//Funções para ser aplicada.
//função para informar a capacidade maxíma de uma Reservatório.(podendo váriar) 
    void Reserv::setCapacidade_max(){
        float valor;
        cout<<"\n Informe a capacidade maxima do reservatorio: ";
        cin >> valor;
        
        if(valor >= 0){ //verificador de valor.
            capacidade_max = valor;
        }
        else {
            cout<< "Valores negativos nao sao permitidos.";
        };


    };
    
    //função para calcular o total de aditivo, que pode compor 10% da capacidade.
    void Reserv::setAditivos(){

        int resposta;

        cout<< "\nNo seu reservartorio tem aditivos:\n1- sim. \n0- nao.";
        cin>> resposta;

        aditivos = resposta;
    
    };
    
//função para preencher a o reservatório.
    void Reserv::setAbastecer(){
        float quantidade;

        getVerificar_reser();//função para auxilia, na hora de abastecer.
        cout << "\nInforme a quantidade que queira abastecer: ";
        cin >> quantidade;

        //precisa de da função de calculo de nivel.
        if(capacidade_max == nivel_agua){
            cout<< "\nReservatorio não pode ser abastecido!";

        }
        else if(quantidade < capacidade_max && quantidade >= 0){
            cout<<"\nAbastecendo o reservatorio!";
            cout<<"\nFoi abastecido "<< quantidade << "Litros";
            nivel_agua += quantidade;
        }
        else if(quantidade > capacidade_max){
            cout<<"\nO Reservatorio foi preechido!\nHouve um desperdicio pois a quantidade de agua eh superior a capacidade.";
            cout<<"\nFoi abastecido "<< quantidade << "Litros";
            nivel_agua += quantidade;
        }
        else{
            cout<<"\nNao pode abastecer com esse valor.";
        };
        float *pNivel = &nivel_agua;
        alertaNivel(pNivel);
    };

//função para fazer a distribuição para o total 'x' de casas.
    void Reserv::setDistribuicao(){
        const int casa = 600;//(em litros 'L')m édia de consumo por casa por dia. Equivalente à quatro pessoas.
        int total_casas;//vr para auxiliar no calculo local.
        int calculo_litro;

        cout<<"\nInfome o total de casas a serem: ";
        cin>> total_casas;

        getCalculo();//função aqui caso o usuário não faça o calculo com o aditivo.
        calculo_litro= total_casas * casa;
        
        consumo[diaAtual] = calculo_litro;
        diaAtual++;

        if(diaAtual == 7){
            diaAtual = 0;
        }

        if(calculo_litro > nivel_agua){
            nivel_agua = 0; //aqui vai ultrapassar o nivel de agua... assim zerando o reserv.
            cout<< "\nAbastecimento completo!Porem algumas casas ficaram sem ser abastecida.";
           
        }
        else if(calculo_litro < nivel_agua && calculo_litro >= 1){
            nivel_agua -= calculo_litro;
            cout << "\nTodas as casas foram abastecidas com sucesso, ainda sobrou agua!";
        }
        else{
            cout<<"\nInfelismente  nenhuma casa foi abastecida.\nPois não tem nenhuma casa para abastecer!";
        };

    };

//função calculo simples utilizando os dados de produtos(aditivos).
     void Reserv::getCalculo(){
        float calculo;

        if(aditivos == 1){
            calculo = nivel_agua * 0.1; // O aditivo é 10% da capacidade.
            nivel_agua += calculo; // para facilitar a compreensão todo reservatório tem sua parte de aditivo que não conta como capaciade.
            aditivos= 0; //como já foi calculado, zeramos o aditivos para evitar bug's.
        };
        cout<< "\nCalculo de aditivo feito.";
        
    };

//função para ver a quantidade de de água.
    void Reserv::getVerNivel_agua(){
        cout<<"\nO nivel atual de água dentro do Reservario eh de: "<<nivel_agua;
    };
   
//função para fazer um calculo com um valor constante.
    void Reserv::getCalcular_dia(float &dias){
        float soma = 0;

        for(int i = 0; i < 7; i++){ // 'for' para somar o consumo diario.
            soma += consumo[i];
        }

        float media = soma / 7;

        if(media > 0){
            dias = nivel_agua / media;
        }
        else{
            dias = 0;
        }
        cout << "\nMedia de consumo diario: " << media << " litros";// para saber quantos dias a terá agua. De acordo com a média de consulmo.

    }; 

//função para verificar o reservatório.
    void Reserv::getVerificar_reser(){

        if(nivel_agua == 0){

            cout<<"\nReservatorio vazio.\n";
        }
        else if(nivel_agua == capacidade_max){

            cout<<"\nReservatorio cheio.\n";
        }
        else{

            cout<<"\nReservatorio em uso.\n";
        }

    };

    void Reserv::alertaNivel(float *pNivel){

        if(*pNivel < 200){

            cout << "\nALERTA: nivel de agua muuto baixo!\n";

        }

    };
