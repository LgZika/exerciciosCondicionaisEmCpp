/*
Escreva um programa em C++ que serve como verificação de saldo em um banco. Defina uma variável para ser o saldo do cliente e peça que ele digite a quantia que quer retirar no caixa. O algoritmo deve verificar se o cliente possui esse saldo. Se sim, escreva na tela que pode fazer uma retirada, se não avise que o saldo é menor que o valor solicitado.
*/

#include <iostream>

using namespace std;

int main(){
    int saldo, saque;
    saldo = 1000;

    cout << "Entre com um valor para o saque: ";
    cin >> saque;
   
    if(saque < 0 || saque > saldo){
        cout << "Valor Invalido" << endl;
    } else {
        cout << "Saque Realizado!" << endl;
        cout << "Saldo Restante: R$ " << saldo-saque << endl;
    }
    
    return false;
}