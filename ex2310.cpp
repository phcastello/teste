#include<iostream>
#include<iomanip>
#include<cmath>
#include<cctype>
#include<string>
using namespace std;

int main(){

    int n, i;
    double sbaatemp[4], sbasuc[4],totalsbaat[4] = {}, totalsbasu[4] = {};
    string name, output[4] = {"Pontos de Saque: ", "Pontos de Bloqueio: ", "Pontos de Ataque: "};
    cin >> n; 
    while (n--) {
    cin >> name; 
    for (i = 0;i  <  3;i++) {
        cin >> sbaatemp[i];
        totalsbaat[i] += sbaatemp[i];
    }
    for (i = 0;i  <  3;i++) {
        cin >> sbasuc[i]; 
        totalsbasu[i] += sbasuc[i];
    }
    }
    for (i = 0;i  <  3;i++) {
        cout << output[i];
        cout << fixed << setprecision(2);
        cout << (totalsbasu[i]*100)/totalsbaat[i] << " %." << endl;

    }

    return 0;
}

