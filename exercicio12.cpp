/*
Crie um algoritmo em C++ que recebe 3 notas de um aluno, junto com a sua porcentagem de presença na cadeira, e deve fazer a média das notas do aluno. Se for acima de 7 o aluno está aprovado, se for abaixo de 7 mas acima de 5 o aluno está em recuperação, se for abaixo de 5 o aluno reprovou. E se o aluno tiver 100% de presença e nota para aprovação deve imprimir "Aprovado" e um parabéns. Se o aluno tiver 75% de presença e nota para aprovação deve imprimir "Aprovado". Se o aluno tiver menos de 75% de presença, mesmo que tenha nota para aprovação, deve retornar "Reprovado".
*/

#include <iostream>

using namespace std;

int main(){
    float nota1, nota2, nota3, media, presenca;
    
    cout << "Entre com a primeira nota: ";
    cin >> nota1;
    cout << "Entre com a segunda nota: ";
    cin >> nota2;
    cout << "Entre com a terceira nota: ";
    cin >> nota3;
    cout << "Entre com a presenca em porcentagem: ";
    cin >> presenca;
   
    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7){
        if (presenca == 100) {
            cout << "Aprovado! Parabens!" << endl;
        } else if (presenca >= 75 && presenca < 100) {
            cout << "Aprovado" << endl;
        } else {
            cout << "Reprovado" << endl;
        }
    } else if (media >= 5 && media < 7){
        cout << "Recuperacao" << endl;
    } else {
        cout << "Reprovado" << endl;
    }

    return false; 
}