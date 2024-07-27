#include <iostream>

using namespace std;

int main() {
    char str[2]; // Supondo que a string terá dois caracteres e um terminador nulo
    cout << "Digite uma string de dois caracteres (exemplo: A1): ";
    cin >> str;

    char j = str[0];
    char i = str[1];
    j = toupper(j); // converte a letra para maiúscula
    cout << j <<endl;
    int letra = static_cast<int>(j) - static_cast<int>('A') + 1;

    cout << "i: " << i << endl;
    cout << "j: " << letra << endl;

    return 0;
}
