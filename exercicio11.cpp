/*
Escreva um programa em C++ que recebe do usuário um número de leads que a empresa recebeu nesse dia e verifica se a quantidade é baixa (5 ou menos), esperada (6 a 10) ou alta (11+) e escreve na tela essa indicação.
*/

#include <iostream>

using namespace std;

int main(){
    int leads;
    
    cout << "Entre com o numero de Leads diarios: ";
    cin >> leads;
   
    if(leads <= 5){
        cout << "Qauntidade baixa" << endl;
    } else if (6 <= leads <= 10){
        cout << "Qauntidade Esperada" << endl;
    } else if (leads > 11){
        cout << "Qauntidade Alta" << endl;
    } else {
        cout << "Invalido" << endl;
    }
    
    return false;
}