#include <iostream>

using namespace std;

int main()
{
    double ComprarCliente, TicketMedio;
    double PagamentoAtraso;
    string FormaDepagamento, D, B, C, ScoreTotal;
    double ScoreDeCompra, ScoreDeInadimplencia, ScoreFormadePagamento, ScorePontuacao;

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

    cout <<endl<< "Score de volume de compras = " << ScoreDeCompra << " pontos"<<endl<<endl;

    // INADUMPLENCIA E PAGAMENTO

    if (PagamentoAtraso > 0 || ScoreDeCompra == 0){
        ScoreDeInadimplencia = 0;
    }
    if (PagamentoAtraso = 1 && ScoreDeCompra > 0){
        ScoreDeInadimplencia = 15;
    }
    if (PagamentoAtraso = 0 && ScoreDeCompra > 0){
        ScoreDeInadimplencia = 30;
    }

    if (FormaDepagamento == "D" && ScoreDeCompra > 0){
        ScoreFormadePagamento = 5;
    }
    if ((FormaDepagamento == "C" || FormaDepagamento == "B")&& ScoreDeCompra > 0){
        ScoreFormadePagamento = 10;
    }

    cout << "Score de inadimplencia = " << ScoreDeInadimplencia << " pontos" <<endl;
    cout << "Score de forma de pagamento = " << ScoreFormadePagamento << " pontos" <<endl;

    //CLASSIFICACAO FINAL

    ScorePontuacao = ScoreDeInadimplencia + ScoreFormadePagamento + ScoreDeCompra;

    if (0 < ScorePontuacao < 25){
        ScoreTotal = "CLIENTE BRONZE";
    }
    if (25 < ScorePontuacao < 75){
        ScoreTotal = "CLIENTE PRATA";
    }
    if (ScorePontuacao > 75){
        ScoreTotal = "CLIENTE OURO";
    }

    cout <<endl<< "Classificacao final = " << ScoreTotal <<endl;

    return 0;
}
