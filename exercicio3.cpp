/*
Crie um programa que solicite ao usuário para inserir um número inteiro. Se o número for múltiplo de 3 e 5 ao mesmo tempo, imprima "É múltiplo de 3 e 5"; caso contrário, imprima "Não é múltiplo de 3 e 5". Dica: Um número é múltiplo de 3 e 5 se for divisível por ambos.
*/

#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Entre com um numero" << endl;
    cin >> num;
    
    if (num % 15 == 0) {
        cout << "O numero eh multiplo de 3 e 5" << endl;
    } else {
        cout << "O numero eh nao multiplo de 3 e 5" << endl;
    }
    return false;
}