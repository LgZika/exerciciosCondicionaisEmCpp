/*
Escreva um programa que solicite ao usuário para inserir as coordenadas (x, y) de um ponto no plano cartesiano. O programa deve determinar e imprimir em qual quadrante o ponto está localizado. Dica: Use condicionais if e operadores lógicos para verificar em qual quadrante o ponto está. 
*/

#include <iostream>

using namespace std;

int main(){
    int x, y;

    cout << "Entre com X: ";
    cin >> x;
    cout << "Entre com Y: ";
    cin >> y;
    
    if(x > 0 && y > 0){
        cout << "1° Quadrante" << endl;
    }
    if(x < 0 && y > 0){
        cout << "2° Quadrante" << endl;
    }
    if(x < 0 && y < 0){
        cout << "3° Quadrante" << endl;
    }
    if(x > 0 && y < 0){
        cout << "4° Quadrante" << endl;
    }
    if(x == 0 && y == 0){
        cout << "Origem" << endl;
    }
    return false;
}