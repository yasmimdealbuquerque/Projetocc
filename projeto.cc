#include <iostream>
#include <conio.h> //biblioteca para ler o áudio
#include <windows.h>

using namespace std;

void tocarnota(int frequencia, int duracao)
{
    if (frequencia > 0)
    {
        Beep(frequencia, duracao);
    }
}
void pianovirtual()
{
    cout << "Bora tocar alguma coisa ?" << endl;
    cout << "tecle Q - para encerrar." << endl;

    while (true)
    {
        char tecla = _getch();
        switch (tecla)
        {
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
        case 'q':
            cout << "encerrando o violão virtual" << endl;
            return;
            break;
        default:
            cout << "teclas erradas idiota" << endl;
            break;
        }
    }
}
int main(int argc, char const *argv[])

{
    pianovirtual();
    return 0;
}