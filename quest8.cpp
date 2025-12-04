#include <iostream>
 #include <string>
int main(){ 
    std::string nome[6]={"jose","maria", "calos","joão","meury","lara"};
    std::string nomePesq;
    int i;
    std::cout<<"\nDigite um nome para pesquizar: ";
    std::cin>> nomePesq;
        for(i=0;i<6;i++){
            if(nomePesq == nome[i]){ 
                std::cout<< nomePesq <<" existe dendro da lista: ";
                
            } else if(nomePesq != nome[i]){
                std::cout<< "\nO nome nao esta contido na lista";
                
            }
          
        }
};