#include <iostream>
using namespace std;


int main() {
	cout<<"\t\tHESAP MAKINESINE HOSGELDÝNÝZ....."<<endl;
	while(true){
	
	int a,b;
	string islem;
	

	
	cout<<"1-toplama:"<<endl;
	cout<<"2-cikarma:"<<endl;
	cout<<"3-carpma:"<<endl;
	cout<<"4-bolme:"<<endl;
	cout<<"islem giriniz:"<<endl;
	cin>>islem;
	if(islem=="1"){
		cout<<"a:";
		   cin>>a;
		cout<<"b:";
		    cin>>b;
		cout<<"\tSONUC:\n"<<a+b<<endl;
	}
	else if(islem=="2"){
		cout<<"a:";
		   cin>>a;
		cout<<"b:";
		    cin>>b;
		cout<<"\tSONUC:\n"<<a-b<<endl;
	}
	else if(islem=="3"){
		cout<<"a:";
		   cin>>a;
		cout<<"b:";
		    cin>>b;
		cout<<"\tSONUC:\n"<<a*b<<endl;
	}
	else{
		cout<<"a:";
		   cin>>a;
		cout<<"b:";
		    cin>>b;
		cout<<"\tSONUC:\n"<<a/b<<endl;
	}
}
	
	return 0;
}
