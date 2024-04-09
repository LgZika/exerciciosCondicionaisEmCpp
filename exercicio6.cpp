/*
Escreva um programa que solicite ao usuário para inserir um ano e verifique se é um ano bissexto ou não. Imprima "Ano bissexto" se for verdadeiro e "Não é ano bissexto" caso contrário. Dica: Um ano é bissexto se for divisível por 4 e não for divisível por 100, exceto se também for divisível por 400.
*/

#include <iostream>

using namespace std;

int main(){
    int ano;

    cout << "Entre com um ano: " << endl;
    cin >> ano;
    
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
        cout << "Eh um ano bissexto" << endl;
    } else {
        cout << "Nao eh um ano bissexto" << endl;
    }
    return false;
}