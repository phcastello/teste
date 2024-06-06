#include<iostream>
using namespace std;

int main(){
    int quant_prod=101;
    float preco=5.0, sub, total;
    char regiao;

    while(quant_prod > 100 || quant_prod < 0){
        cout << "Digite a quantidade de produtos(max:100): ";
        cin >> quant_prod;
    }

    // script para garantir que quant_prod seja < 100 e >0

    sub = quant_prod*preco;


    cout << "Digite a regiao:" << endl;
    cout << "'1' para norte" << endl << "'2' para nordeste" << endl;
    cout << "'3' para Centro-oeste" << endl << "'4' para sudeste" << endl;
    cout << "'5' para sul" << endl;
    cin >> regiao;

    switch (regiao){

        case '1': //NORTE
            total = sub - (sub*0.10); //10% de desconto
            cout << "Regiao: Norte" << endl;
            cout << "Subtotal: " << sub << endl;
            cout << "Total: " << total << " (Desconto de 10%)"  << endl;
            break;

        case '2': //NORDESTE
            total = sub - (sub*0.08); //8% de desconto
            cout << "Regiao: Nordeste" << endl;
            cout << "Subtotal: " << sub << endl;
            cout << "Total: " << total << " (Desconto de 8%)"  << endl;
            break;
        
        case '3': //CENTRO-OESTE
            total = sub - (sub*0.12); //12% de desconto
            cout << "Regiao: Centro-Oeste" << endl;
            cout << "Subtotal: " << sub << endl;
            cout << "Total: " << total << " (Desconto de 12%)"  << endl;
            break;
        
        case '4': //SUDESTE
            total = sub - (sub*0.15); //15% de desconto
            cout << "Regiao: Sudeste" << endl;
            cout << "Subtotal: " << sub << endl;
            cout << "Total: " << total << " (Desconto de 15%)" << endl;
            break;
        
        case '5': //SUL
            total = sub - (sub*0.11); //11% de desconto
            cout << "Regiao: Sul" << endl;
            cout << "Subtotal: " << sub << endl;
            cout << "Total: " << total << " (Desconto de 11%)" <<endl;
            break;
        
        default:
            break;
    }


    return 0;
}
    