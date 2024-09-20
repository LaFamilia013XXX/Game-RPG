#include <iostream>
#include <rpg.h>
using namespace std;

int main(){
   

    Heroi meuHeroi1("Mago",170,100,120,40,40," ");
    Heroi meuHeroi2("Bárbaro",200,60,150,30,50," ");
    Heroi meuHeroi3("Arqueira",150,80,120,40,40,"Multi_Arrow "); // nome, hp, ataque, defesa, agilidade, luck, especial
    Heroi meuHeroi4("Bruxa",170,90,120,35,35," ");

    meuHeroi1.MostrandoTudo();
    meuHeroi2.MostrandoTudo();
    meuHeroi3.MostrandoTudo();
    meuHeroi4.MostrandoTudo();

//--------------------------------- MENU PARA ESCOLHER O HEROI ----------------------------------------------//
int EscolhaHeroi;

cout<< "Escolha seu Heroi"<<endl;
cout << "1 - Mago"<< endl;
cout << "2 - Bárbaro"<< endl;
cout << "3 - Arqueira" << endl;
cout << "4 - Bruxa" << endl;
cin>> EscolhaHeroi;

if (EscolhaHeroi >=1 && EscolhaHeroi <=4){
    Heroi::EnumTipoHeroi heroi = (static_cast<Heroi::EnumTipoHeroi>(EscolhaHeroi)); //chamo meu construtor da minha classe heroi, chamo meu enum e converto o tipoheroi
}
else{
    cout << "Opção inválida, por favor digite um número de 1 a 4"<< endl;
}


    return 0;

};




