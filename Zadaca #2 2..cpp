#include <iostream>
using namespace std;
int main (){
	int a;
	cout<<"Unesite broj ! "<<endl;
	cin>>a;
	if (a % 3 == 0 && a % 5 == 0)
{
    cout<<"Uneseni broj je djeljiv s 3 i 5"<<endl;	
}
	if (a % 3==0)
	{
		cout<<"Uneseni broj je djeljiv s 3"<<endl;
	}else{
		cout<<"Uneseni broj nije djeljiv s 3"<<endl;
		
	}
	if(a % 5==0) 
	
		cout<<"Uneseni broj je djeljiv s 5"<<endl;
	else{
		cout<<"Uneseni broj NIJE djeljiv s 5"<<endl;
	}




return 0;
system ("PAUSE");
	
	
}
