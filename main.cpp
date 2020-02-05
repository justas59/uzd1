#include <iostream>

int main() {
  std::string vardas, eil1, eil2, eil3, eil4, eil5;
  std::string pas = "Sveikas";
  std::cout << "Iveskite vartotojo varda" << std::endl;
  std::cin >> vardas;
  int ilgis = vardas.length() +  pas.length() + 7;
  for (int i=0; i<ilgis; i++){
    eil1 += "*";
  }
  std::cout << eil1 << std::endl;
  eil2+="*";
  for (int i=0; i<ilgis-2; i++){
    eil2+=" ";
  }
  eil2+="*";
  std::cout << eil2 << std::endl;
  eil3 = "* " + pas + ", " + vardas + "! *";
  std::cout << eil3 << std::endl;
  eil4+="*";
  for (int i=0; i<ilgis-2; i++){
    eil4+=" ";
  }
  eil4+="*";
  std::cout << eil4 << std::endl;
  eil5=eil1;
  std::cout << eil5 << std::endl;


}
