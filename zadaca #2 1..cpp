#include <iostream>			
using namespace std;                                           // juni
int main() {
	int a; 
	cout<<"Unesite broj mjeseca ! "<<endl;
	cin>>a;
	if (a>=3 && a<6){
		cout<<"Godisnje doba kojem mjesec pripada je proljece, proljece traje do 21.06 a od tad nastupa ljeto."<<endl;
	}
	if(a>=6 && a<=9) {
		cout<<"Godisnje doba kojem mjesec pripada je ljeto, ljeto traje do 22.09 a od tad nastupa jesen. "<<endl;
	}
	if (a>9 && a<12) {
		cout<<"Godisnje doba kojem mjesec pripada je jesen, jesen traje do 21.12 a od tad nastupa zima. "<<endl;
	}
	if (a<=12 && a<3) {
		cout<<"Godisnje doba kojem mjesec pripada je zima, zima traje do 20.03 a od tad nastupa proljece."<<endl;	
	}
	if (a>=13) {
		cout<<"Invalid number, Try again ! "<<endl;	
	}


	return 0;
	system ("PAUSE");
	
	
}
