/*
Escreva um programa em C++ que solicite ao usuário inserir sua altura em metros e seu peso em quilogramas. O programa calculará o IMC (Índice de Massa Corporal) com base nessas informações e imprimirá o resultado, juntamente com a categoria correspondente de acordo com a tabela de classificação padrão.
*/

#include <iostream>

using namespace std;

int main(){
    float altura, peso, imc;

    cout << "Entre com sua altura em metros: ";
    cin >> altura;
    cout << "Entre com seu peso em quilos: ";
    cin >> peso;

    imc = peso / (altura * altura) ;

    if (imc < 18.5){
        cout << "Abaixo do Peso" << endl;
    }
    if (imc >= 18.5 && imc < 25){
        cout << "Peso Normal" << endl;
    }
    if (imc >= 25 && imc < 30){
        cout << "Sobrepeso" << endl;
    }
    if (imc >= 30){
        cout << "Obeso" << endl;
    }
    return false;
}