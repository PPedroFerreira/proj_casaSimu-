#include <string>
#include <iostream>
#include <sstream>
#include "../headers/SimuUI.h"
#include "../headers/Habitacao.h"
#include <cstring>
#include <fstream>

using namespace std;

SimuUI::SimuUI(Logica logica) {
    this->logica = logica;
    this->flag_sair = false;
}

SimuUI::~SimuUI() {

}


void SimuUI::exeComandos(const vector<string> &commandParts) {
    bool res = true;
    const string &command = commandParts[0];
    if (command == "prox") {
        res = logica.prox();
        if (!res)
            cout << "[erro syntax] prox" << endl;
        else
            cout << "A executar 'prox'... " << endl;
    } else if (command == "avanca") {
        res = logica.avanca(commandParts);
        if (!res)
            cout << "[erro syntax] avanca <n>" << endl;
        else
            cout << "A executar 'avanca'... " << endl;
    } else if (command == "hnova") {
        res = logica.hnova(commandParts);
        if (!res)
            cout << "[erro syntax] hnova <num linhas> <num colunas>" << endl;
        else
            cout << "A executar 'hnova'..." << endl;
    } else if (command == "hrem") {
        res = logica.hrem();
        if (!res)
            cout << "[erro syntax] hrem <n>" << endl;
        else
            cout << "A executar 'hrem'... " << endl;
    } else if (command == "znova") {
        res = logica.znova(commandParts);
        if (!res)
            cout << "[erro syntax] znova <linha> <coluna>" << endl;
        else
            cout << "A executar 'znova'... " << endl;
    } else if (command == "zrem") {
        res = logica.zrem(commandParts);
        if (!res)
            cout << "[erro syntax] zrem <ID zona>" << endl;
        else
            cout << "A executar 'zrem'... " << endl;
    } else if (command == "zlista") {
        res = logica.zlista();
        if (!res)
            cout << "[erro syntax] zlista" << endl;
        else
            cout << "A executar 'zlista'... " << endl;
    } else if (command == "zcomp") {
        res = logica.zcomp(commandParts);
        if (!res)
            cout << "[erro syntax] zcomp <ID zona>" << endl;
        else
            cout << "A executar 'zcomp'... " << endl;
    } else if (command == "zprops") {
        res = logica.zprops(commandParts);
        if (!res)
            cout << "[erro syntax] zprops <ID zona>" << endl;
        else
            cout << "A executar 'zprops'... " << endl;
    } else if (command == "pmod") {
        res = logica.pmod(commandParts);
        if (!res)
            cout << "[erro syntax] pmod <ID zona> <nome> <valor>" << endl;
        else
            cout << "A executar 'pmod'... " << endl;
    } else if (command == "cnovo") {
        res = logica.cnovo(commandParts);
        if (!res)
            cout << "[erro syntax] cnovo <ID zona> <s | p | a> <tipo | comando>" << endl;
        else
            cout << "A executar 'cnovo'... " << endl;
    } else if (command == "crem") {
        res = logica.crem(commandParts);
        if (!res)
            cout << "[erro syntax] crem <ID zona> <s | p | a> <ID>" << endl;
        else
            cout << "A executar 'crem'... " << endl;
    } else if (command == "rnova") {
        res = logica.rnova(commandParts);
        if (!res)
            cout << "[erro syntax] rnova <ID zona> <ID proc. regras> <regra> <ID sensor> [param1] [param2] [...]"
                 << endl;
        else
            cout << "A executar 'rnova'... " << endl;
    } else if (command == "pmuda") {
        res = logica.pmuda(commandParts);
        if (!res)
            cout << "[erro syntax] pmuda <ID zona> <ID proc. regras> <novo comando>" << endl;
        else
            cout << "A executar 'pmuda'... " << endl;
    } else if (command == "rlista") {
        res = logica.rlista(commandParts);
        if (!res)
            cout << "[erro syntax] rlista <ID zona> <ID proc. regras>" << endl;
        else
            cout << "A executar 'rlista'... " << endl;
    } else if (command == "rrem") {
        res = logica.rrem(commandParts);
        if (!res)
            cout << "[erro syntax] rrem <ID zona> <ID proc. regras> <ID regra>" << endl;
        else
            cout << "A executar 'rrem'... " << endl;
    } else if (command == "asoc") {
        res = logica.asoc(commandParts);
        if (!res)
            cout << "[erro syntax] asoc <ID zona> <ID proc. regras> <ID aparelho>" << endl;
        else
            cout << "A executar 'asoc'... " << endl;
    } else if (command == "ades") {
        res = logica.ades(commandParts);
        if (!res)
            cout << "[erro syntax] ades <ID zona><ID proc. regras><ID aparelho>" << endl;
        else
            cout << "A executar 'ades'... " << endl;
    } else if (command == "acom") {
        res = logica.acom(commandParts);
        if (!res)
            cout << "[erro syntax] acom <ID zona> <ID aparelho> <comando>" << endl;
        else
            cout << "A executar 'acom'... " << endl;
    } else if (command == "psalva") {
        res = logica.psalva(commandParts);
        if (!res)
            cout << "[erro syntax] psalva <ID zona> <ID proc. regras> <nome>" << endl;
        else
            cout << "A executar 'psalva'... " << endl;
    } else if (command == "prepoe") {
        res = logica.prepoe(commandParts);
        if (!res)
            cout << "[erro syntax] prepoe <nome>" << endl;
        else
            cout << "A executar 'prepoe'... " << endl;
    } else if (command == "prem") {
        res = logica.prem(commandParts);
        if (!res)
            cout << "[erro syntax] prem <nome>" << endl;
        else
            cout << "A executar 'prem'... " << endl;
    } else if (command == "plista") {
        res = logica.plista();
        if (!res)
            cout << "[erro syntax] plista" << endl;
        else
            cout << "A executar 'plista'... " << endl;
    } else if (command == "exec") {
        if (commandParts.size() == 2)
            executeCommandsFromFile(commandParts[1]);
        else
            cout << "[erro syntax] exec <filename>" << endl;
    } else if (command == "sair") {
        res = logica.sair();
        if (!res)
            cout << "[erro syntax] sair" << endl;
        else {
            cout << "<a encerrar o programa> " << endl;
            exit(0);
        }
    } else {
        cout << "[erro syntax] comando nao existe" << endl;
    }
}

void SimuUI::comeca() {
    string linha;
    cout << "SEJA BEM VINDO A SIMULACAO!\n\n\n";

    while (!flag_sair) {
        cout << "Comando> ";
        getline(cin, linha);
        vector<string> commandParts = parseCommand(linha);

        exeComandos(commandParts);
    }
}

vector<string> SimuUI::parseCommand(const string &command) {
    istringstream iss(command);
    vector<string> tokens;
    string token;

    while (iss >> token) {
        tokens.push_back(token);
    }

    return tokens;
}

void SimuUI::executeCommandsFromFile(const string filename) {
    ifstream myfile;
    myfile.open("C:\\Users\\pedfe\\OneDrive\\Documentos\\comandos.txt");
    string myline;
    if (myfile.is_open()) {
        while (getline(myfile, myline)) {
            vector<string> commandParts = parseCommand(myline);
            exeComandos(commandParts);
        }
        myfile.close();
    } else {
        cout << "Couldn't open file: " << filename << "\n";
        cout << "Error code: " << strerror(errno) << "\n";
    }
}

