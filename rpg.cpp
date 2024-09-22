#include "rpg.h"
#include <iostream>
#include<string>
using namespace std;
#ifndef RPG_H
#define RPG_H


void Heroi::MostrandoTudo(){

cout<< "Name" << Name <<endl;
cout << " HP " << HP<<endl;
cout << "Ataque" << Ataque <<endl;
cout << "Defesa" << Defesa <<endl;
cout << "Agilidade" << Agilidade <<endl;
cout << "Luck" << Luck <<endl;

}

Heroi::Heroi (const string name, int hp, int ataque, int defesa, int agilidade, int luck):
Name (name), HP(hp), Ataque (ataque), Defesa (defesa), Agilidade (agilidade), Luck (luck)
{
if (HP<0){ // fazendo verificacao da vida
    HP = 0;
}

if (HP>200) // verificacao da vida
{
    HP = 200;
}

Heroi::~HEROI(){}


};

 void Heroi::FuncaoMeuHeroi (EnumTipoHeroi heroi) //construtor da minha classe com parametros
 {
switch (heroi)
{
case mago:
    cout << "você escolheu o  MAGO"<< endl;
    break;

case barbaro:
    cout << "você escolheu o  Bárbaro"<< endl;
    break;

case arqueira:
    cout << "você escolheu o Arqueira"<< endl;
    break;

case bruxa:
    cout << "você escolheu o Bruxa"<< endl;
    break;

default:
    break;
}
}

   void Heroi::RecebeDano(int DanoRecebido){ // dano recebido no heroi para chamar ReceberDano( dano recebido)


if (DanoRecebido<0){
    return;
 }

 HP-= DanoRecebido;
 if (HP<0){
    HP = 0;

 }
 
}


int Habilidade::ReduzirDano(int DanoInimigo){
    return DanoInimigo * 0.8;
}


// habilidades da Arqueira

int Habilidade::FlameArrow(int Duracao) {
    if (Duracao > 0) {
        int dano = 60;
        return ReduzirDano(dano);
    } else {
        return 0;
    }
}

int Habilidade::Arrow() {
    return 45;
}

int Habilidade::Sword() {
    return 60;
}

int Habilidade::FlameSword(int Duracao) {
    int dano = Sword();
    if (Duracao > 0) {
        dano += 15;
    }
    return dano;
}

int Habilidade::Skeleton() 
{ 
    return 105; 
}

int Habilidade::Magic()
 { 
    return 90; }

int Habilidade::FireBall()
 { 
    return 100;
     }

int Habilidade::MagicBall() 
{ 
    return 110;
     }


#endif