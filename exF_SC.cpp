#include<iostream>
#include<string>
using namespace std;


int SEmf(char sexo, string conjuge){
    if(sexo == 'm'){
        cout << "Sexo: Masculino" <<endl<< "Nome do Conjuge: " << conjuge;
    }
    else if (sexo == 'f'){
        cout << "Sexo: Feminino"<<endl<< "Nome do Conjuge: " << conjuge;
    }
    else{
        cout << "Erro";
        return 1;
    }

    return 0;
}


int main(){
    int idade, filhos, m_velho, sal;
    char r, sexo;
    string conjuge, cidade;
    
    cout << "Informe seu estado civil: " << endl;
    cout << "'S' para solteiro" << endl << "'C' para casado" << endl;
    cout << "'D' para divorciado" << endl << "'V' para viuvo(a):" << endl;
    cin >> r;

    switch (r)
    {
        case 'S':
            cout << "Informe a idade: ";
            cin >> idade;

            cout << "Solteiro, " << idade << " anos de idade";
            break;
        
        case 'C':
            cout << "Informe o sexo (m/f): ";
            cin >> sexo;
            cout << "Informe o nome do conjuge: ";
            cin >> conjuge;

            SEmf(sexo, conjuge);
            break;

        case 'D':
            cout << "Informe a quantidade de filhos (0, caso nao possua filho): ";
            cin >> filhos;
            cout << "Informe a idade do mais velho: ";
            cin >> m_velho;

            cout << "Quantidade de filhos: " << filhos <<endl<< "Idade do mais velho: " << m_velho;
            break;

        case 'V':
            cout << "Informe a cidade onde vive (sem espacos): ";
            cin >> cidade;
            cout << "Informe o salario atual: ";
            cin >> sal;

            cout << "Cidade Residente: " << cidade <<endl<< "Salario atual: " << sal;
            break;


        default:
            break;
    }

    return 0;
}