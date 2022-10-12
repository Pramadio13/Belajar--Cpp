#include <iostream>
using namespace std;

int main() {
  int luas,keliling;
  int alas,tinggi,sisi;
  cout<< "aplikasi hitung luas + keliling segitiga" <<endl;
  cout<< "Masukan Alas= "; cin>> alas;
  cout<< "Masukan tinggi= "; cin>> tinggi;
  luas = 0.5 * alas * tinggi;
  cout<< "Luas segitiga= " <<luas<<endl;
  
  cout<< "Masukan sisi= "; cin>> sisi;
  keliling = sisi+sisi+sisi;
  cout<< "Keliling Segitiga= " <<keliling;
}
