#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <climits>
#include <string>
using namespace std;

int main()
{
    int n, m = INT_MAX, posicao;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    for (int i = 0; i < n; i++){
        if (v[i] < m){
            m = v[i];
            posicao = i;
        }
    }
    cout << "Menor valor: " << m << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}