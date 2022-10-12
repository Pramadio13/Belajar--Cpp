#include <iostream>

using namespace std;

float hitungLuasLingkaran(float r) {
  return 3.14 * r * r;
}
int main()
{
  cout << "Aplikasi hitung Luas Lingkaran " << endl;
  cout << endl;
  float r;

  cout << "Input jari-jari lingkaran: ";
  cin >> r;
  cout << "Luas lingkaran = "<< hitungLuasLingkaran(r) << endl;
  return 0;
}
