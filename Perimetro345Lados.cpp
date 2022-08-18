#include <iostream>
using namespace std;


void perimetro(float lad1,float lad2,float lad3);
void perimetro(float lad1,float lad2,float lad3,float lad4);
void perimetro(float lad1,float lad2,float lad3,float lad4,float lad5);



int main()
{
	
	int lados;
	float l1,l2,l3,l4,l5;
	cout<< "Digite quantos lados voce ira inserir para calcular seu perimetro:"<<endl;
	cin>>lados;
	
	if(lados==3)
	
	{
		cout<<"Digite o tamanho dos tres lados:"<<endl;
		cin>>l1;
		cin>>l2;
		cin>>l3;
		perimetro(l1,l2,l3);

	}
	else if(lados==4)
	
	{
		cout<<"Digite o tamanho dos tres lados:"<<endl;
		cin>>l1;
		cin>>l2;
		cin>>l3;
		cin>>l4;
		perimetro(l1,l2,l3,l4);

	}
	else if(lados==5)
	
	{
		cout<<"Digite o tamanho dos tres lados:"<<endl;
		cin>>l1;
		cin>>l2;
		cin>>l3;
		cin>>l4;
		cin>>l5;
		perimetro(l1,l2,l3,l4,l5);

	}
	else
	{
		cout<<"Valor invalido. So utilize lados 3, 4 ou 5."<<endl;
	}
	return 0;	
}

void perimetro(float lad1,float lad2,float lad3)
{
	float p;
	p = lad1 + lad2 +lad3;
	cout<<"O perimetro eh: "<<p<<endl;
}
void perimetro(float lad1,float lad2,float lad3,float lad4)
{
	float p;
	p = lad1 + lad2 + lad3 + lad4;
		cout<<"O perimetro eh: "<<p<<endl;
	
}
void perimetro(float lad1,float lad2,float lad3,float lad4,float lad5)
{
	float p;
	p = lad1 + lad2 + lad3 + lad4 + lad5;
	cout<<"O perimetro eh: "<<p<<endl;	
}

	



