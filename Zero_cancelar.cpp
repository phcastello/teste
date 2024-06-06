#include <iostream>

using namespace std;


int main (){
    int tamanho;
    cin >> tamanho;
    
    int v[tamanho];
    int posicao = 0;

    for(int i=0;i<tamanho;i++){
        int n;
        cin >> n;
        if (n!=0){
            v[posicao] = n;
            posicao++;
        }
        else{
            posicao--;
        }
    }

    int soma=0;
    for(int i=0; i<posicao;i++){
        soma+=v[i];
    }
    cout << soma << endl;
    
    return 0;
}



