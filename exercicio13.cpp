/*
Escreva um programa para cálculo de recuperação em C++. Para estar em recuperação, o aluno precisou tirar menos de 7 e mais que 5 na cadeira. A nota para aprovação do aluno é a sua nota atual + o que falta para 10. Se o aluno tirou 5, deve tirar 5 na recuperação, se o aluno tirou 6, deve tirar 4 na recuperação. Escreva um programa que recebe a nota do aluno na cadeira, a nota da recuperação e sua porcentagem de presença. Se o aluno tiver 75% ou mais de presença, ele pode ser aprovado. Se a soma da nota do aluno na disciplina com a recuperação for 10 ou mais, e o aluno tiver porcentagem de presença para aprovação, deve retornar "Aprovado". Se a soma da nota do aluno na disciplina com a recuperação for menor que 10, mesmo que tenha porcentagem de presença para aprovação, deve retornar "Reprovado".
*/

#include <iostream>

using namespace std;

float mediaNotas(float n1, float n2, float n3, float media){
    media = (n1 + n2 + n3) / 3;
    return media;
}

void recuperacao(float media){
    float notaRecuperacao;

    cout << "Entre com a nota da Recuperacao: ";
    cin >> notaRecuperacao;
    
    if (media + notaRecuperacao >= 10){
        cout << "Aprovado!" << endl;
    } else {
        cout << "Reprovado." << endl;
    }
}

void verificaNota(float media, float presenca){
    if (media >= 7){
        if (presenca == 100) {
            cout << "Aprovado! Parabens!" << endl;
        } else if (presenca >= 75 && presenca < 100) {
            cout << "Aprovado!" << endl;
        } else {
            cout << "Reprovado." << endl;
        }
    } else if (media >= 5 && media < 7){
        if (presenca >= 75) {
            recuperacao(media);
        } else {
            cout << "Reprovado." << endl;
        }
    } else {
        cout << "Reprovado." << endl;
    }
}

int main(){
    float n1, n2, n3, notaRecuperacao, media, notaFinal, presenca;
    
    cout << "Entre com a primeira nota: ";
    cin >> n1;
    cout << "Entre com a segunda nota: ";
    cin >> n2;
    cout << "Entre com a terceira nota: ";
    cin >> n3;
    cout << "Entre com a presenca em porcentagem: ";
    cin >> presenca;

    media = mediaNotas(n1, n2, n3, media);
    verificaNota(media, presenca);
    
    return false; 
}