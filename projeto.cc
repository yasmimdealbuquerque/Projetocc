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
    cout << "bem vindo ao criador de trilhas sonoras - Piano" << endl;
    cout << "tecle Q - para encerrar." << endl;

    while (true)
    {
        char tecla = _getch();
        switch (tecla)
        {
        case 'a':
            tocarnota(261, 300); // nota DO
            break;
        case 's':
            tocarnota(293, 300); // nota RE
            break;
        case 'd':
            tocarnota(349, 300); // nota mi
            break;
        case 'f':
            tocarnota(392, 300); // nota sol
            break;
        case 'g':
            tocarnota(440, 300); // nota la
            break;
        case 'h':
            tocarnota(493, 300); // nota si
            break;
        case 'j':
            tocarnota(523, 300); // nota do
            break;
        case 'q':
            cout << "encerrando o piano virtual" << endl;
            return;
            break;
        default:
            cout << "voce e um merda" << endl;
            break;
        }
    }
}
int main(int argc, char const *argv[])

{
    pianovirtual();
    return 0;
}