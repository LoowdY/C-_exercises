#include <iostream>
using namespace std;
//invocando funcao
double calcInflacao(double valor1, double valor2);

int main()
{
	int i = 1;
	while(i!=0){
	
	float prod1, prod2, resultado;
	cout<< "Para saber a taxa de inflacao, digite o valor do produto no ano passado e, apos isso, digite o valor do produto hoje em dia."<<endl;
	cin>> prod1 ;
	cin>>prod2 ;
	resultado =calcInflacao(prod1,prod2);
	cout<<"O valor, em porcentagem da inflacao eh:"<<resultado*100<<"%\n\n";
}
	return 0;
}



double calcInflacao(double valor1, double valor2)
{
	float inflacao;
	inflacao = (valor2-valor1)/valor1;
		
		return inflacao;
}
