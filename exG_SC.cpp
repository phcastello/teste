#include<iostream>
#include<iomanip>
using namespace std;


//o uso dessas funçoes é desnecessario, o intuito foi apenas teste e aprendizado.
float Circulo(double r){
    const double pi=3.14159;
    double A;
    A = r*r*pi;
    cout << fixed << setprecision(4) << A <<endl;
    return 0;
}

float Quadri(float b, float h){
    float A;
    A = b*h;
    cout << A <<endl;
    return 0;
}

float Tri(float b, float h){
    float A;
    
    A = (b*h)/2;
    
    cout << A <<endl;
    return 0;
}


int main(){
    char res;
    float r, h, b;

    cout << "'C' para CIRCULO" <<endl<< "'Q' para QUADRADO" <<endl;
    cout << "'R' para RETANGULO" <<endl<< "'T' para TRIANGULO" <<endl;
    cout << "Informe a figura que deseja calcular a area: "<<endl;
    cin >> res;

    switch (res){
        case 'C':
            cout << "Digite o raio: ";
            cin >> r;

            Circulo(r);

            cout << "Circulo" <<endl;
            break;

        case 'Q':
            cout << "Digite a base: ";
            cin >> b;
            cout << "Digite a altura: ";
            cin >> h;

            Quadri(b,h);

            cout << "Quadrado" <<endl;
            break;

        case 'R':
            cout << "Digite a base: ";
            cin >> b;
            cout << "Digite a altura: ";
            cin >> h;

            Quadri(b,h);

            cout << "Retangulo" <<endl;
            break;

        case 'T':
            cout << "Digite a base: ";
            cin >> b;
            cout << "Digite a altura: ";
            cin >> h;

            Tri(b,h);
            cout << "Triangulo" <<endl;
            break;

        default:
            break;
    }
    return 0;
}