#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double angkaP;
  double angkaD;
  double pangkat;
  double hasil;
  char simbol;

  cout << " Kalkulator Advance " << endl;
  cout << "Masukkan nilai pertama: ";
  cin >> angkaP;
  cout << "Masukkan simbol(+,-,x,:,/,^): ";
  cin >> simbol;

  switch (simbol) {
    case '+':
    cout << "Masukkan nilai kedua: ";
    cin >> angkaD;
    hasil = angkaP + angkaD;
    cout << angkaP << " " << simbol << " " << angkaD << " = " << hasil;
    break;

    case '-':
    cout << "Masukkan nilai kedua: ";
    cin >> angkaD;
    hasil = angkaP - angkaD;
    cout << angkaP << " " << simbol << " " << angkaD << " = " << hasil;
    break;

    case 'x':
    cout << "Masukkan nilai kedua: ";
    cin >> angkaD;
    hasil = angkaP * angkaD;
    cout << angkaP << " " << simbol << " " << angkaD << " = " << hasil;
    break;

    case ':':
    cout << "Masukkan nilai kedua: ";
    cin >> angkaD;
    hasil = angkaP / angkaD;
    cout << angkaP << " " << simbol << " " << angkaD << " = " << hasil;
    break;
    
    case '/':
    hasil = sqrt(angkaP);
    cout << "akar dari " << angkaP << " = " << hasil;
    break;
    
    case '^':
    cout << "Masukkan nilai kedua: ";
    cin >> angkaD;
    hasil = pow(angkaP, angkaD);
    cout << angkaP << " " << simbol << " " << angkaD << " = " << hasil;
    break;

    default:
    cout << "Error404!!";
    break;
  }
}
