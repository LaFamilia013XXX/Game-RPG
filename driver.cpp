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

//--------------------------------- MENU PARA ESCOLHER O HEROI ----------------------------------------------//
int EscolhaHeroi;

cout<< "Escolha seu Heroi"<<endl;
cout << "1 - Mago"<< endl;
cout << "2 - Bárbaro"<< endl;
cout << "3 - Arqueira" << endl;
cout << "4 - Bruxa" << endl;
cin>> EscolhaHeroi;

if (EscolhaHeroi >=1 && EscolhaHeroi <=4){
    Heroi::EnumTipoHeroi heroi = (static_cast<Heroi::EnumTipoHeroi>(EscolhaHeroi)) //chamo meu construtor da minha classe heroi, chamo meu enum e converto o tipoheroi
}else{
    cout << "Opção inválida, por favor digite um número de 1 a 4"<< endl;
}


    return 0;

};


