#include <iostream>

void media_num(int soma , float media);
void soma_dos_numeros(int soma);

int main(){
	int num[5],i, soma = 0;//tive que inicializar com 0.
    float media= 0.0;

	for(i=0;i<5;i++){
		std::cout<< "Digite o  "<< i+1 << " numero \n";
		std::cin>> num[i];
        soma= soma + num[i];
	};
	i =0;
	std::cout<< "numeros dos slot dos vetores \n";
	for(i=0;i<5;i++){
		std::cout<<"numero do slot: "<< i << "\t"<< num[i] <<"\n";
	};
    soma_dos_numeros(soma);
    media_num(soma ,media);
};

void soma_dos_numeros(int soma){
    std::cout<< "\nA soma dos numeros eh: "<< soma;
};
void media_num(int soma , float media){
    media= soma / 5;
    std::cout<< "\nA media dos numeros ehh: "<< media;
};