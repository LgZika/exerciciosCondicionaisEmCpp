/*
Escreva um programa que solicite ao usuário para inserir três números inteiros representando os lados de um triângulo. O programa deve classificar o triângulo como "Equilátero" se todos os lados forem iguais, "Isósceles" se dois lados forem iguais, ou "Escaleno" se todos os lados forem diferentes. Dica: Um triângulo é equilátero se todos os lados forem iguais.
*/

#include <iostream>

using namespace std;

int main(){
    int x, y, z;

    cout << "Entre com o primeiro lado" << endl;
    cin >> x;
    cout << "Entre com o segundo lado" << endl;
    cin >> y;
    cout << "Entre com o terceiro lado" << endl;
    cin >> z;
    
    if (x == y && x == z) {
        cout << "Triangulo Equilatero" << endl;
    } if ((x == y && x != z) || (x == z && x != y) || (y == z && y != x)){
        cout << "Triangulo Isoceles" << endl;
    } else if (x != y && x != z) {
        cout << "Triangulo Escaleno" << endl;
    }
    return false;
}