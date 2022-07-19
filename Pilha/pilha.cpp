#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha(){
    tamanho = 0;
    estrutura = new TipoItem[max_itens];
} 

pilha::~pilha(){
    delete [] estrutura;
} //  destrutora da pilha;
bool pilha::isfull(){
    return (tamanho == max_itens);
} //  verificar se a pilha esta cheia
bool pilha::isEmpty(){
    return (tamanho == 0);
} // verificar se a pilha esta vazia
void pilha::push(TipoItem item){
    if (isfull()){
        cout << "A pilha esta cheia!\n";
    } else {
        estrutura[tamanho] = item;
        tamanho++;
    }
} // adicionar um item na pilha

TipoItem pilha::pop(){
    if (isEmpty()){
        cout << "A pilha esta vazia!\n";
        return EXIT_SUCCESS;
    } else {
        tamanho--;
        return estrutura[tamanho];
    }
} // remover um item na pilha 
void pilha::print(){
    cout << "Pilha: [";
    for (int i=0; i < tamanho; i++){
        cout << estrutura[i] << " ";
    }
    cout << "]\n";
} // printar a pilha
int pilha::lenght(){
    return tamanho;
} // tamanho da pilha