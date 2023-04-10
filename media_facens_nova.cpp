//incluir as bibliotecas para lerem os comandos
#include <iostream>
#include <stdlib.h>
using namespace std;
// declarar as variaveis 
int main() {
    float RA;
    char continuar = 's';
    string name;

    while (continuar == 's'|| continuar == 'S') {
       double RA, ac1, ac2, af, ag;
        //interface vai pedir o nome do aluno
        cout << "digite seu nome >>> ";
        //o programa vai ler o nome
        cin >> name;
       //interface vai pedir ao aluno seu RA
       cout << "digite seu RA >>>";
       //o programa vai ler o RA
       cin >> RA;
       //interface vai pedir a nota para o usuario
       cout << "digite a sua primeira nota do semestre >>> ";
        // o programa vai ler o valor
       cin >> ac1;
       //interface vai pedir a nota para o usuario
       cout << "digite a sua segunda nota do semestre >>> ";
        // o programa vai ler o valor
        cin >> ac2;
        //interface vai pedir a nota para o usuario
        cout << "digite a sua terceira nota do semestre >>> ";
        // o programa vai ler o valor
        cin >> af;
        cout << "digite a sua quarta nota do semestre >>> ";
        cin >> ag;
        // dar a funcao para o programa calcular a media
        double soma = ((1.5 * ac1) + (3.5 * ac2) + (4.0 * af) + (1.0 * ag));
        soma = (soma / 10);
        cout << "a sua media no semestre foi: " << soma << endl;
        //usar if para o usuario saber se foi aprovado ou nao
        if(soma >= 5){
            cout << "parabens! voce foi aprovado!" << endl;
        }else if ( soma >= 3){
            cout << "ops, voce esta de recuperacao, devera fazer a substitutiva" << endl;
        } else {
        cout << "eita! voce foi reprovado!" << endl;
        } 
        cout << "deseja continuar? (s/n) >>> ";
        cin >> continuar;
    }
    
    //fechamento do programa
    return 0;
    
}
