#include<iostream>
#include<iomanip>
#include<cmath>
#include<cctype>
#include<string>
#include<random>
#define nl cout<<endl;
using namespace std;

void random(int n1, int n2){
    cout << n1+rand()%n2;nl
}

int main(){
    int n1,n2;
    cin>>n1>>n2;

    for(int i=0; i < 10; i++){
        random(n1, n2);
    }





    return 0;
}