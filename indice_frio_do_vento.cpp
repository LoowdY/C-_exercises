#include <iostream>
#include <cmath>
using namespace std;

void calcfatorfriovento(float temp,float vel);

int main()
{
	float t,v;
	
	cout<<"Ola! Para saber o indice do FATOR DE FRIO DO VENTO insira a TEMPERATURA, menor ou igual a 10 C, e a VELOCIDADE, em m/s, por favor:  "<<endl;
	cin>> t;
	cin>> v;
	if(t <=10)
	{
		calcfatorfriovento(t,v);
	}
	else if(t> 10)
	{
		cout<<"temperatura invalida"<<endl;
		cout<<"temperatura deve ser menor ou igual a 10."<<endl;
	}
	return 0;
	
}
	void calcfatorfriovento(float temp,float vel)
	{
		float w;
		w = 13.12 + (0.6215*temp) + (-11.37* (pow(vel,0.16))) + 0.3965*temp* (pow(vel,0.16));
		cout<<" O indice do FATOR DE FRIO DO VENTO eh:"<<w<<endl;
	}