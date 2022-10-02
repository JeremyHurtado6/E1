#include<iostream>
using namespace std;
int main(){
	float x, y;
	cout<<"Ingrese un numero para X"<<endl;
	cin>>x;
	cout<<"Ingrese un numero para Y"<<endl;
	cin>>y;
	if(x==y){
		cout<<"los numeros de X y Y son iguales"<<endl;
	}else if(x<y){
		cout<<"el numero que se escogio para X es menor al numero que se escogio para Y"<<endl;
	}else{
		cout<<"el numero que se escogio para X es mayor al numero que se escogio para Y"<<endl;


	}
	return 0;


}
