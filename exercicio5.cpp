/*
Crie um programa que solicite ao usuário para inserir dois números e uma operação matemática (+, -, *, /). O programa deve executar a operação e imprimir o resultado. Dica: Você pode usar uma instrução switch para realizar a operação selecionada.
*/

#include <iostream>

using namespace std;

int main(){
    int x, y, z;
    char op;

    cout << "Insira o primeiro numero:" << endl;
    cin >> x;
    cout << "Insira o segundo numero:" << endl;
    cin >> y;
    cout << "Informe a operacao matematica:" << endl;
    cin >> op;

    switch (op){
        case '+':
            z = x + y;
            break;
        case '-':
            z = x - y;
            break;
        case '*':
            z = x * y;
            break;
        case '/':
            z = x / y;
            break;
        case '%':
            z = x % y;
            break;
        default:
            cout << "Nao aceitamos essa operacao" << endl;
            break;
    }

    cout << "Resultado: " << z << endl; 
    return false;
}