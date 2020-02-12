#include <iostream>

int main() {
  std::string vardas, eil1, eil2, eil3, eil4, eil5;
  std::string pas1 = "Sveikas", pas2 = "Sveika", pas = pas1;
  std::cout << "Iveskite vartotojo varda" << std::endl;
  std::cin >> vardas;
  if(vardas[vardas.length()-1]=='a')
      pas=pas2;

  int ilgis = vardas.length() +  pas.length() + 7;
  for (int i=0; i<ilgis; i++){
    eil1 += "*";
  }

  eil2+="*";
  for (int i=0; i<ilgis-2; i++){
    eil2+=" ";
  }
  eil2+="*";

  eil3 = "* " + pas + ", " + vardas + "! *";

  eil4+="*";
  for (int i=0; i<ilgis-2; i++){
    eil4+=" ";
  }
  eil4+="*";

  eil5=eil1;

  std::cout << eil1 << std::endl;
  std::cout << eil2 << std::endl;
  std::cout << eil3 << std::endl;
  std::cout << eil4 << std::endl;
  std::cout << eil5 << std::endl;

}
