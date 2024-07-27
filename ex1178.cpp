#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    long double N[100],v;


    cin >> v;
    N[0] = v;
    for(int i=1; i < 100; i++){
        N[i] = N[i-1] / 2.0;
    }
    for(int i=0; i < 100; i++){
        cout << "N[" << i << "] = " << fixed << setprecision(4)<< N[i]  <<endl;
    }

    return 0;
}