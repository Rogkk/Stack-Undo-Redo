/* 
Descrição:
Implemente um programa que simule o comportamento de um navegador de internet. O programa deve permitir ao usuário acessar páginas, voltar para a página anterior e, opcionalmente, avançar para a próxima página caso tenha voltado antes. 
*/
#include <iostream>
#include <stdlib.h>
#include <stack>
using namespace std;

int main() {

    stack <string> historico, pagina;
    bool op = true;
    int opNav = 0;
    string pesquisa;

    do {
        system("cls");

        if(historico.empty()) {
            while(!pagina.empty()) {
                pagina.pop();
            }
            cout << "Pesquisa:";
            cin >> pesquisa;
            historico.push(pesquisa);
            system("cls");
        }

        cout << "https://" << historico.top() << "\n\n";
        cout << "1) Voltar\n2) Avancar\n3) Buscar Site\n0) Sair\n\nDigite uma opcao: ";
        cin >> opNav;

        if(opNav == 1) {
            pagina.push(historico.top());
            historico.pop();
            op = true;
        } else if(opNav == 2) {
            if(pagina.empty()) {
                op = true;
            } else {
                historico.push(pagina.top());
                pagina.pop();
                op = true;
            }
        } else if(opNav == 3) {
            while(!pagina.empty()) {
                pagina.pop();
            }

            system("cls");
            cout << "Pesquisa:";
            cin >> pesquisa;
            historico.push(pesquisa);
            op = true;
        } else if (opNav == 0) {
            op = false;
        }
        
    } while(op);


    return 0;
}