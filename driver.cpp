#include <iostream>
#include <rpg.h>
using namespace std;

int main(){
   Cinto cinto;
    Item ItemCriador;

    CriandoItem espada = {ItemCriador.Dano(ESPADA), ItemCriador.Nome(ESPADA), ItemCriador.Peso(ESPADA), ItemCriador.Cura(ESPADA), ItemCriador.Defesa(ESPADA)};
    CriandoItem PocaoDeCura = {ItemCriador.Dano(POCAODECURA), ItemCriador.Nome(POCAODECURA), ItemCriador.Peso(POCAODECURA), ItemCriador.Cura(POCAODECURA), ItemCriador.Defesa(POCAODECURA)};
    CriandoItem Machado = {ItemCriador.Dano(MACHADO), ItemCriador.Nome(MACHADO), ItemCriador.Peso(MACHADO), ItemCriador.Cura(MACHADO), ItemCriador.Defesa(POCAODECURA)};
    CriandoItem Varinha = {ItemCriador.Dano(VARINHA), ItemCriador.Nome(VARINHA), ItemCriador.Peso(VARINHA), ItemCriador.Cura(VARINHA), ItemCriador.Defesa(POCAODECURA)};
    CriandoItem PocaoDePoder = {ItemCriador.Dano(POCAODEPODER), ItemCriador.Nome(POCAODEPODER), ItemCriador.Peso(POCAODEPODER), ItemCriador.Cura(POCAODEPODER), ItemCriador.Defesa(POCAODECURA)};
    CriandoItem PocaoDeDefesa = {ItemCriador.Dano(POCAODEDEFESA), ItemCriador.Nome(POCAODEDEFESA), ItemCriador.Peso(POCAODEDEFESA), ItemCriador.Cura(POCAODEDEFESA), ItemCriador.Defesa(POCAODEDEFESA)};
    CriandoItem PocaoDaSorte = {ItemCriador.Dano(POCAODASORTE), ItemCriador.Nome(POCAODASORTE), ItemCriador.Peso(POCAODASORTE), ItemCriador.Cura(POCAODASORTE), ItemCriador.Defesa(POCAODECURA)};


    Heroi meuHeroi1("Mago",0,0,0,0,0," ");
    Heroi meuHeroi2("Bárbaro",0,0,0,0,0," ");
    Heroi meuHeroi3("Arqueira",0,0,0,0,0," ");
    Heroi meuHeroi4("Bruxa",0,0,0,0,0," ");

    meuHeroi1.MostrandoTudo();
    meuHeroi2.MostrandoTudo();
    meuHeroi3.MostrandoTudo();
    meuHeroi4.MostrandoTudo();


cout<< "Escolha seu Heroi"<<endl;
EscolhaseuHeroi();

while (heroiescolhido < 1 || heroiescolhido > 4){
cout<< "opção inválida, escolha um número válido"<< endl;
EscolhaseuHeroi();
}

switch (heroiescolhido)
{
case (1):
    cout << "você escolheu o  MAGO"<< endl;
    break;

case (2):
    cout << "você escolheu o  Bárbaro"<< endl;
    break;

case (3):
    cout << "você escolheu o Arqueira"<< endl;
    break;

case (4):
    cout << "você escolheu o Bruxa"<< endl;
    break;

default:
    break;
}

    return 0;


};


