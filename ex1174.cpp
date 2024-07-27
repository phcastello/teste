#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    double v[100];

    for(int i=0; i < 100; i++){
        cin >> v[i];
    }
    for(int i=0; i < 100; i++){
        if(v[i] <= 10){
            cout << "A[" << i << "] = " << fixed << setprecision(1) << v[i] << endl;
        }
    }


    return 0;
}