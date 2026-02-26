#include <iostream>

int main(){ 
    int num[10], numPesq, i;
    int posicao = -1; //inializar com uma posição negativa que não tenha na estava N de 1 a 10.
    for(i=0;i<10;i++){
        std::cout<< i+1 << "ª numero \n";
        std::cin>> num[i]; 
    };
    std::cout<<"\nDigite um numero de pesquisa: ";
    std::cin>> numPesq;
        for(i=0;i<10;i++){
            if(numPesq == num[i]){
                posicao = i;
                break;
            }
        };
        if(posicao != -1){
            std::cout<< "\nA posicao do numero ehh: "<< posicao;
        } else {
            std::cout<< "\nO numero nao esta contido no vetor (num)";
          }
        
};
