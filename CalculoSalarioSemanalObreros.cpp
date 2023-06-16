/*En una empresa se requiere calcular el salario semanal de cada uno de los n obreros que laboran en ella. 
El salario se obtiene de la sig. forma: Si el obrero trabaja 40 horas o menos se le paga $20 por hora 
Si trabaja más de 40 horas se le paga $20 por cada una de las primeras 40 horas y $25 por cada hora extra.*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n=0, horas=0, salario1=0, salario2=0, horas2=0;
	
	cout<<"Ingrese la cantidad de obreros: "<<endl;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cout<<"Ingrese la cantidad de horas de trabajo: "<<endl;
		cin>>horas;
		
		if(horas<=40){
			
			salario1= (horas * 20);
			
			cout<<"Su salario semanal sera: "<<salario1<<endl;
			
		             }
		             
		else if(horas>40){
			
			salario1= (horas * 20);
			horas2= horas - 40;
			salario2=(horas2 * 25);
			
			cout<<"Su salario semanal sera "<<salario1<<" con una bonificacion de "<<salario2<<" por sus horas extras."<<endl;
			cout<<"Su salario total con la suma de su bonificacion por horas extras es: "<<salario1 + salario2<< ".\n!Felicidades!"<<endl;
		                 }
		else {
			cout<<"Ingrese correctamente la cantidad de horas, por favor"<<endl;
		     }
			 system("cls");                 
	}
	return 0;
}
