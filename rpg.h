
#include <string>
using namespace std;

#ifndef RPG_H
#define RPG_H

class Heroi
{
    public:
    // -- TIPO DO MEU HEROI -- //
    enum EnumTipoHeroi
    {
        mago = 1,
        arqueira = 2,
        bruxa = 3,
        barbaro = 4,
    };
    static void FuncaoMeuHeroi(EnumTipoHeroi heroi);

    // ---- ATRIBUTOS DO HEROI ---- //
    Heroi(
    const string name,
    int hp,
    int ataque,
    int defesa, 
    int agilidade, 
    int luck);

void MostrandoTudo(); // EXIBE TODOS OS ATRIBUTOS
void RecebeDano(int DanoRecebido);


    ~Heroi(); //destrutor

    // -----------PRIVATE------------- //
    private:
        const string Name;
        int HP;
        int Ataque;
        int Defesa;
        int Agilidade; 
        int Luck;

};

    class Habilidade {
public:
    int FlameArrow(int Duracao);
    int Arrow();           
    int Sword();    
    int FlameSword(int Duracao);      
    int Skeleton();  
    int Magic();         
    int FireBall();        
    int MagicBall();   
    int ReduzirDano(int DanoInimigo);    



private:
   

};
#endif