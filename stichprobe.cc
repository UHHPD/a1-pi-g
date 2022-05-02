#include <iostream>
#include <fstream>
#include<cmath>


int main() {
  std::ifstream fin("datensumme.txt");
  std::ifstream fin2("datensumme.txt");
double a;
double summe = 0;
double abweichung = 0;
double summe_abweichungen = 0;
for (int i = 0; i < 234; ++i){
  fin >> a;
  summe += a;
}
double Mittelwert = summe/234;
for (int i = 0; i < 234; ++i){
  fin2 >> a;
  abweichung = (a - Mittelwert)*(a - Mittelwert);
  summe_abweichungen += abweichung;
}
double varianz = summe_abweichungen / 234;
std::cout << "Mittelwert: " << Mittelwert << std :: endl ;
std::cout << "Varianz: " << varianz << std :: endl ;
std::cout << "Standardabweichung: " << sqrt(varianz) << std :: endl;
fin.close();
fin2.close();
}
