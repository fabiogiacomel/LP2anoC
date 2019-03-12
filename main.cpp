/*
É um exemplo de uso do goto que verifica a senha utilizado apenas para testes
não deve ser usado em sistemas pois o codigo é facilmente hackeavel
Testado utilizando a IDE Code::Blocks compilador GCC e W10
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string senha;
    int tentativas = 0;

    inicio:
        if (tentativas >= 3)
        goto fim;

        cout << "Digite a senha.: \n";
        cout << "tentativas restantes " << 3 - tentativas << endl;
        cin >> senha;

        if (senha != "123")
            goto errada;

        if (senha == "123")
            goto correta;

    errada:
        tentativas++;
        goto inicio;

    correta:
        cout << "Senha correta";

    fim:
    return 0;
}
