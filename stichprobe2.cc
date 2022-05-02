#include <iostream>
#include <fstream>
#include <cmath>


int main() {
  std::ifstream fin("datensumme.txt");
  std::ifstream fin2("datensumme.txt");
  std::ofstream fout("mittelwerte.txt");
  std::ofstream fout2("varianz.txt");
double a;
double m;
double summe = 0;
double abweichung = 0;
double summe_abweichung = 0;
double varianz = 0;
for (int i = 0; i < 26; ++i){
  for (int j = 0; j < 9; ++j){
    fin >> a;
    summe += a;}
  fout << summe/9 << std :: endl;
  summe = 0;
}
  std::ifstream fin3("mittelwerte.txt");
for (int i = 0; i < 26; ++i){
  fin3 >> m;
    for (int k = 0; k < 9; ++k){
     fin2 >> a;  
     abweichung = (a - m)*(a - m);
     summe_abweichung += abweichung;
    }
  varianz = summe_abweichung/9;
  fout2 << varianz << std :: endl ; 
  summe_abweichung = 0;
  abweichung = 0;
}
  std::ifstream fin4("mittelwerte.txt");
for (int i = 0; i < 26; ++i){
  fin4 >> a;
  summe += a;
}
double Mittelwert = summe/26;
std::cout << "Mittelwert: " << Mittelwert << std :: endl;
    std::ifstream fin5("varianz.txt");
summe = 0;
for (int i = 0; i < 26; ++i){
  fin4 >> a;
  summe += a;
}
double varianz_mittelwert = summe / 26;
std::cout << "Mittelwert_Varianz: " << varianz << std :: endl;
fin.close();
fin2.close();
fin3.close();
fout.close();
fout2.close();
}
