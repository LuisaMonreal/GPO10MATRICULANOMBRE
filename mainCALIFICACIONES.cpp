

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	char nombre[50];
	int matricula,calf1,calf2,calf3,promedio;
	//el endl y la \n los dos hacen salto de linea
	cout<<"ingrese su nombre \n";
	cin>>nombre;
	cout<<"ingrese matricula"<<endl;
	cin>>matricula;
	cout<<"ingrese la calf1 \n";
	cin>>calf1;
		cout<<"ingrese la calf2 \n";
	cin>>calf2;
		cout<<"ingrese la calf3 \n";
	cin>>calf3;
	promedio=(calf1+calf2+calf3)/3;
	
	cout<<"el promedio es: \n"<<promedio;
}