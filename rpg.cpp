#include "rpg.h"
#include <iostream>
#include<string>
using namespace std;
#ifndef RPG_H
#define RPG_H

/*
// Lista Estatica:

List::List(){
    count = 0;
}

List::~List(){
    cout << "Lista destruida";
}

bool List::Empty(){
    return (count == 0);
}

bool List::Full(){
    return (count == MaxList);
}

void List::Insert(int p,int x){ 
    int i;
    if (Full()){ 
        cout << "Lista Cheia";
        abort();
    }
    if (p < 1 || p > count+1){ 
        cout << "Posicao invalida";
        abort();
    }
    for(i=count; i>=p; i--){
        Entry[i+1] = Entry[i];
    }
    Entry[p] = x;
    count++;
}

void List::Delete(int p, int &x){ 
    int i;
    if (Empty()){ 
        cout << "Lista Vazia";
        abort();
    }   
    if (p < 1 || p > count){ 
        cout << "Posicao invalida";
        abort();
    }
    x = Entry[p];
    for(i=p; i<count; i++){
        Entry[i] = Entry[i+1];
    }
    count = count - 1;
        
}

void List::Clear(){
    count = 0;
}

int List::Size(){
    return count;
}

void List::Retrieve(int p, int&x){ 
    if(p < 1 || p > count){ 
        cout << "Posicao invalida";
        abort();
    }
    x = Entry[p];

    cout << x << endl;
}

void List::Replace(int p, int x){ 
    if(p < 1 || p > count){ 
        cout << "Posicao invalida";
        abort();
    }
    Entry[p] = x;
}

void List::exibirList(){
    for(int i=0; i<count; i++){
        cout << "Posicao " << i << " " << Entry[i+1] << endl;
    }
}


// Stack Mochila

Mochila::Mochila(){
    top = NULL;
}

Mochila::~Mochila(){
    int x;
    while(!Empty()){
        Pop(x);
    }
}

bool Mochila::Empty(){
    return (top == NULL);
}

bool Mochila::Full(){
    return false;
}

void Mochila::Push(int x){
    StackPointer p;

    p = new StackNode;

    if(p == NULL) {
        cout << "Memoria insuficiente";
        abort();
    }

    p->Entry = x;
    p->NextNode = top;
    top = p;
}

void Mochila::Pop(int &x) { 
    StackPointer p;

    if (Empty())
    { cout << "Pilha Vazia";
        abort();
    }
    
    x = top->Entry;
    p = top;
    top = top->NextNode;
    delete p;
}

void Mochila::Clear(){ 

    int x;
    while(! Empty()){
         Pop(x);
    }
}

void Mochila::Top(int &x){ 
    if(Empty()){ 
        cout << "Pilha vazia";
        abort();
    }
    Pop(x);
    Push(x);
}

int Mochila::Size(){
    StackPointer p;
    int s=0;

    p = top;
    while(p != NULL){
        s++;
        p = p->NextNode;
    }

    return s;

}

// Stack Cinto

Cinto::Cinto() {
    top = 0;
}

Cinto::~Cinto() {
    cout << "Pilha destruída" << endl;
}

bool Cinto::Empty() {
    return (top == 0);
}

bool Cinto::Full() {
    return (top == MaxStack);
}

void Cinto::Push(CriandoItem x) {
    if (Full()) {
        cout << "Pilha está cheia" << endl;
    }
    Entry[top] = x; // Armazena o valor e depois incrementa o topo
    top = top + 1;
}

void Cinto::Pop(CriandoItem &x) {
    if (Empty()) {
        cout << "Pilha vazia" << endl;
    }
    top = top - 1; // Decrementa o topo e depois armazena o valor
    x = Entry[top];
}

void Cinto::Clear() {
    top = 0;
}

void Cinto::Top(CriandoItem &x) {
    if (Empty()) {
        cout << "Pilha vazia" << endl;
        abort();
    }
    x = Entry[top - 1];
}

int Cinto::Size() {
    return top;
}

void Cinto::exibirCinto() {
    for (int i = 0; i < top; i++) {
        cout << Entry[i].Nome << endl;
    }
}
*/

void Heroi::MostrandoTudo(){

cout<< "Name" << Name <<endl;
cout << " HP " << HP<<endl;
cout << "Ataque" << Ataque <<endl;
cout << "Defesa" << Defesa <<endl;
cout << "Agilidade" << Agilidade <<endl;
cout << "Luck" << Luck <<endl;
cout << "Especial" << Especial <<endl;

}

Heroi::Heroi (const string name, int hp, int ataque, int defesa, int agilidade, int luck, string especial):
Name (name), HP(hp), Ataque (ataque), Defesa (defesa), Agilidade (agilidade), Luck (luck), Especial (especial)
{
if (HP<0){ // fazendo verificacao da vida
    HP = 0;
};

if (HP>200) // verificacao da vida
{
    HP = 200;
};

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



#endif