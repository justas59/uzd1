#include <iostream>

struct Lentele{
std::string a;
std::string b;
std::string c;

Lentele(){
std::string vardas;
  std::string pas1 = "Sveikas", pas2 = "Sveika", pas = pas1;
  int p;
  std::cout << "Iveskite vartotojo varda: ";
  std::cin >> vardas;
  std::cout << "Iveskite norima remelio ploti: ";
  std::cin >> p;
  if(vardas[vardas.length()-1]=='a')
      pas=pas2;

  int ilgis = vardas.length() +  pas.length() + 7;
  for (int i=0; i<ilgis; i++){
    a += "*";
  }

  b+="*";
  for (int i=0; i<ilgis-2; i++){
    b+=" ";
  }
  b+="*";

  c = "* " + pas + ", " + vardas + "! *";

    std::cout << a << std::endl;
    for (int i=0; i<p-2; i++)
    {
        if (i==(p-2)/2)
            std::cout << c << std::endl;
        else
            std::cout << b << std::endl;
    }
    std::cout << a << std::endl;
}
};

int main() {
    Lentele L;

    return 0;
}
