#include <iostream>

using namespace std;

class pacote{
private:
    static int Pcriados;
    string prefixo,sufixo;
    int numCodigo,numAviso;
    string Recebe;
public:

    pacote(){
    Pcriados++;
    prefixo = "";
    sufixo = "";
    numCodigo = 0;
    }

    static getPcriados(){
        return Pcriados;
    }
    string getPrefixo(){
        return prefixo;
    }
    string getSufixo(){
        return sufixo;
    }
    int getNumCodigo(){
        return numCodigo;
    }
};

int pacote::Pcriados = 0;

int main()
{
    string opcao, opcao2;
    string Codigo,Recebe;
    int NumAviso;
    pacote vetP[100];

    do{
    cout << "Informe o codigo do novo pacote(formato :  PB123456789BR)" << endl;
    cin >> Codigo;
    cout << "voce deseja cadastrar aviso de recebimento para o pacote cadastrado(s/n)? caso escolha essa opçao nao podera cadastrar mais nenhum pacote." << endl;
    cin >> opcao2;
    if(opcao2 == "n"){
        continue;
    }
    else if(opcao2 == "s"){
        cout << "Informe o codigo de recebimento : " << endl;
        cin >> NumAviso;
        cout << "Informe o nome de quem vai receber : " << endl;
        cin >> Recebe;

        pacote()
    }

    cout << "voce quer cadastrar um novo pacote?" << endl;
    cin >> opcao;
    opcao = " ";
    }while(opcao == "n" || vetP[100]);

    return 0;
}



