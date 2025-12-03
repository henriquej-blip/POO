#include <iostream>

int main(){
	int num[5],i;

	for(i=0;i<5;i++){
		std::cout<< "Digite o  "<< i+1 << " numero \n";
		std::cin>> num[i];
	};
	i =0;
	std::cout<< "numeros dos slot dos vetores \n";
	for(i=0;i<5;i++){
		std::cout<<"numero do slot: "<< i << "\t"<< num[i]<<"\n";
	};
};
 