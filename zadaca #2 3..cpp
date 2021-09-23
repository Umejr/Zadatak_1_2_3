#include <iostream>
using namespace std;

int main(){

int godinaR,mjesecR;
int Tgodina = 2021;
int Tmjesec = 9;

cout<< "Unesite godinu i mjesec rodenja."<<endl;
cin>> godinaR >> mjesecR;

if (mjesecR == 12){
 cout<< "Imate " << Tgodina - godinaR - 1 << " godina i "<< Tmjesec << " mjeseca."<<endl;
}
else if (mjesecR == 11){
  cout<< "Imate "<< Tgodina - godinaR - 1 << " godina i " << Tmjesec + 1 << " mjeseca."<<endl; 
}
else if (mjesecR ==10) {
  cout<< "Imate " << Tgodina - godinaR - 1 << " godina i " << Tmjesec + 2 << " mjeseca."<<endl;
}
else {
  cout<< "Imate " << Tgodina - godinaR << " godina i " << Tmjesec - mjesecR << " mjeseca."<<endl;
}

system ("PAUSE");
return 0;

}
