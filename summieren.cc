#include <iostream>
#include <fstream>

int main() {
  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
double b;
double a;
for (int i = 0; i < 234; ++i){
  fin >> a;
  fin >> b;
  fout << a+b << std :: endl;
}
fin.close();
}
