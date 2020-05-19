#include <iostream>

using namespace std;

int main()
{
    double ComprarCliente, TicketMedio;
    double PagamentoAtraso;
    string FormaDepagamento;

    //CABECALHO

    cout <<endl<< "SISTEMA DE PERFIL DE CLIENTE" <<endl;
    cout << "------------------------------" <<endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" <<endl<<endl;

    // LEITURA DO VOLUME

    cout << "Quantas comprar o cliente fez no ultimo ano? ";
    cin >> ComprarCliente;
    cout << "Qual o ticket medio? ";
    cin >> TicketMedio;

    // LEITURA DOS DADOS

    cout <<endl<< "Quantas vezes o cliente atrasou o pagamento? ";
    cin >> PagamentoAtraso;
    cout << "A maioria das compras foi em dinheiro, cartao, ou  boleto (D/C/B)? ";
    cin >> FormaDepagamento;


    return 0;
}
