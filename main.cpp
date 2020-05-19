#include <iostream>

using namespace std;

int main()
{
    double ComprarCliente, TicketMedio;
    double PagamentoAtraso;
    string FormaDepagamento;
    double ScoreDeCompra;

    ScoreDeCompra = 0;

    //CABECALHO

    cout <<endl<< "SISTEMA DE PERFIL DE CLIENTE" <<endl;
    cout << "------------------------------" <<endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" <<endl<<endl;

    // LEITURA DO VOLUME

    cout << "Quantas compras o cliente fez no ultimo ano? ";
    cin >> ComprarCliente;
    cout << "Qual o ticket medio? ";
    cin >> TicketMedio;

    // LEITURA DOS DADOS

    cout <<endl<< "Quantas vezes o cliente atrasou o pagamento? ";
    cin >> PagamentoAtraso;
    cout << "A maioria das compras foi em dinheiro, cartao, ou  boleto (D/C/B)? ";
    cin >> FormaDepagamento;

    //SCORE DE VOLUME DE COMPRAS

    if (ScoreDeCompra = 0){
        ScoreDeCompra = 0;
    }
    if (ScoreDeCompra < 3000){
        ScoreDeCompra = 20;
    }
    if (ScoreDeCompra = 3000){
        ScoreDeCompra = 40;
    }
    if (ScoreDeCompra > 3000){
        ScoreDeCompra = 60;
    }

    cout <<endl<< "Score de volume de compras = " << ScoreDeCompra << " pontos";

    return 0;
}
