/*
Escreva um programa em C++ que solicite ao usuário para digitar um número inteiro. Em seguida, o programa deve verificar se o número é par e imprimir "Par" se for verdadeiro, e "Ímpar" se for falso. Dica: Um número é par se o resto da divisão por 2 for igual a zero.'
*/

#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Entre com um numero" << endl;
    cin >> num;
    
    if (num % 2 == 0) {
        cout << "O numero eh par" << endl;
    } else {
        cout << "O numero eh impar" << endl;
    }
    return false;
}