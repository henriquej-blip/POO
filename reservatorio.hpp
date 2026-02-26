#ifndef RESERVATORIO_HPP
#define RESERVATORIO_HPP



/*Minha classe reservatorio com meus atributos simples e metódos*/
class Reserv{
    private:
    float capacidade_max;
    float nivel_agua;
    bool aditivos; // se tiver tem um valor físico 'cost' em 'L'...conta no cálculo de capacidade.
    float consumo[7]; // vetor para guarda o consumo por dia, durante a 1 semana. 
    int diaAtual; //controlador de posição do array.

    public:
    Reserv(float capacidade_max, float nivel_agua);//construtor da minha classe.

    void setCapacidade_max();
    void setAditivos();
    void setAbastecer();
    void setDistribuicao();// para as casas daqui já faz o cálculo (nivel_agua)
 
    void getVerNivel_agua();
    void getCalculo();
    void getCalcular_dia(float &calculo_dias); // para saber quantos dias a terá agua. De acordo com a média de consulmo.
    void getVerificar_reser(); // verificar se o reser está vazio ou cheio.
    void alertaNivel(float *nivel);
};

#endif

