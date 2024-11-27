#include <iostream> //basicão, pra entrada e saída 
#include <conio.h> //biblioteca para ler as teclas sem precisar o enter 
#include <windows.h>//pra acessar funções especificas do windows 

using namespace std;

// a função abaixo vai fazer o sistema tocar as notas
// o beep é uma função da API do windows pra tocar o som 
void tocarnota(int freq, int tempo)
{
    if (freq > 0)
    {
        Beep(freq, tempo); // o som das notas é gerado por essa função, 'beep'
    }
}

//a função que literalmente simula o instrumento
void musicaVirtual()
{
    cout << "Bora tocar alguma coisa ?" << endl;
    cout << "tecle Q - para encerrar." << endl;

    while (true)
    {
        char tecla = _getch(); // as teclas que forem clicadas vão ser salvas na variavel 'tecla' o '_getch' vai lê a tecla sem precisar apertar o enter

        switch (tecla) // diz o que vai acontecer a partir da tecla clicada
        {
            // aqui são especificadas as frequencias e duração delas, a partir de cada tecla
        case 'a':
            tocarnota(329.65, 500); // nota MI
            break;
        case 's':
            tocarnota(246.95, 500); // nota SI
            break;
        case 'd':
            tocarnota(196, 500); // nota SOL
            break;
        case 'f':
            tocarnota(146.85, 500); // nota RÉ
            break;
        case 'g':
            tocarnota(110, 500); // nota LA
            break;
        case 'h':
            tocarnota(82.40, 500); // nota MI
            break;
        case 'q': // tecla 'q' pra encerrar o sistema e mostrar uma mensagem
            cout << "encerrando o violão virtual" << endl;
            return;
            break;
        default: // qualquer outro caso que não esteja dentro do switch, ou seja, teclas erradas
            cout << "teclas erradas idiota" << endl;
            break;
        }
    }
}

// essa é a FUNÇÃO PRINCIPAL, ou seja, onde realmente o programa INICIA, ela vai chamar nossa função, 'musicaVirtual'
int main(int argc, char const *argv[])

{
    musicaVirtual();
    return 0; // indica que o programa terminou 
}

//RESUMINDO: 
//O programa exibe mensagens de introdução no console.
// Entra em um loop onde lê as teclas pressionadas pelo usuário.
// Dependendo da tecla pressionada:
// Toca uma nota correspondente
// Encerra o programa ('q')
// Exibe uma mensagem de erro para teclas não mapeadas
// O som das notas é gerado pela função Beep
// Funções (void tocarNota, void pianoVirtual)
// Estruturas de controle (while, switch)
// Manipulação de teclas com _getch
// API do Windows (Beep)