/*
Escreva um programa que peça ao usuário para inserir um número inteiro. Se o número for positivo, imprima "Positivo"; caso contrário, imprima "Negativo". Dica: Um número é positivo se for maior que zero.
*/

#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Entre com um numero" << endl;
    cin >> num;
    
    if (num > 0) {
        cout << "O numero eh positivo" << endl;
    } else if (num < 0){
        cout << "O numero eh negativo" << endl;
    } else {
        cout << "O numero eh zero" << endl;
    }
    return false;
}