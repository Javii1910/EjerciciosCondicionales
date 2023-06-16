/*Dado el ingreso de un grupo de número, indique cuantos números son primo.*/
#include<iostream>
using namespace std;

int main(){

	int grupo, numero, primos=0;
	cout<<"Ingrese la cantidad de numeros: "<<endl; cin>>grupo;
	
		for(int i=1; i<=grupo; i++){
			
			int num_div=0;
			cout<<"\nIngrese el numero"<<endl; cin>>numero;
			
			for(int a=1; a<=numero; a++){
				if( numero%a == 0 ){
				num_div++;
			                       }
			                            }
			    if(num_div == 2){
			    primos++;
			    cout<<"El numero es primo"<<endl;
			                    }
				else {
					cout<<"El numero no es primo"<<endl;
					i--;
				     }	
			
		                           }
		cout<<"\nEl numero de primos es "<<primos<<endl;
	
	return 0;
          }
