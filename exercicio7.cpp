/*
Crie um programa que pergunte ao usuário se deseja converter Celsius para Fahrenheit ou Fahrenheit para Celsius. Em seguida, solicite a temperatura e faça a conversão, imprimindo o resultado. Dica: Use fórmulas de conversão apropriadas: C = (F - 32) / 1.8 e F = (C * 1.8) + 32.
*/

#include <iostream>

using namespace std;

int main(){
    int op;
    float temp;

    while (op != 0){
        cout << "1 - Celcius para Fahrenheit;" << endl;
        cout << "2 - Fahrenheit para Celcius;" << endl;
        cout << "0 - Fim Programa;" << endl;
        cin >> op;

        if (op == 1){
            cout << "Entre com a temperatura em graus Celsius: ";
            cin >> temp;
            temp = (temp * 1.8) + 32;
            cout << "Conversao: " << temp << "°F" << endl;
        }
        if (op == 2){
            cout << "Entre com a temperatura em graus Fahrenheit: ";
            cin >> temp;
            temp = (temp - 32) / 1.8;
            cout << "Conversao: " << temp << "°C" << endl;
        }
    }
    return false;
}