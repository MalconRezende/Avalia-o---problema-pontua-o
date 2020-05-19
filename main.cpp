#include <iostream>

using namespace std;

int main()
{
    double ComprarCliente, TicketMedio;

    //CABECALHO

    cout <<endl<< "SISTEMA DE PERFIL DE CLIENTE" <<endl;
    cout << "------------------------------" <<endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" <<endl<<endl;

    // LEITURA DE DADOS

    cout << "Quantas comprar o cliente fez no ultimo ano? ";
    cin >> ComprarCliente;
    cout << "Qual o ticket medio? ";
    cin >> TicketMedio;

    return 0;
}
