#include <iostream>

int main(){
    
    int numero[8]={0,9,8,7,1,2,3,4};
    int menor= numero[0], maior= numero[0],i;// Variáveis para armazenar o menor e o maior número.
    int n_menor=0, n_maior=0;

    for(i=0;i<8;i++){
        if(numero[i]< menor){ //  aqui vai percorrer o número[i]   se for menor que o "menor" 
            menor = numero[i];
            n_menor = i; // se sim vai guardar o indice e VALOR.
        }
        else if(numero[i] > maior){ //mesma coisa aqui vai percorrer o vetor para achar o numero maior
            maior = numero[i];// se encontar vai determinar esse novo maior diferente do numero que foi declarado inicialmente "0"
            n_maior = i; // vai salvar o indici
        };
    };
    std::cout<< menor <<  "  que esta na posicao: "<<n_menor << "\n";
    std::cout<< maior <<  "  que esta na posicao: "<<n_maior << "\n";
};