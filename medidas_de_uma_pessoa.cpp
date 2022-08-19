#include <iostream>

using namespace std;

void calcChapeu(float peso, float altura);

void calcCasaco(float altura, float peso, int idade);

void calcCintura(float altura, float peso, int idade);


int main()
{
	float h, p;
	int i;
	
	cout<<"Ola! Digite sua altura,em polegadas, peso, em libras, e idade, em anos,  para encontrar seu tamanho de chapel\ntamanho do casaco e\ncintura em polegadas"<<endl;
	cin>>h ;
	cin>>p ;
	cin>>i ;
	calcChapeu(p,h);
	calcCasaco(h, p, i);
	calcCintura(h , p , i);
	
	return 0;
}



 void calcChapeu(float peso, float altura)
 {
 	float chapeu;
 	
		chapeu = (peso/altura)*2.9;
	
	cout<<"O tamanho do seu chapeu deve ser: "<<chapeu<<endl;		
			
		
 }
 
 
 void calcCasaco(float altura, float peso, int idade)
 {
 	int num = idade - 30;
 	float tamCasaco = (altura*peso)/288;
 	
 		if(idade>=30)
 		{	
 		 	// 1/8 pol = 0.3175
 			tamCasaco = tamCasaco + ((num/10) * 0.3175);
		}
 	cout << "O Tamanho do casaco eh: "<< tamCasaco<<endl;  
 	
 }
 
 
 void calcCintura(float altura, float peso, int idade)
 {	
 	int num = idade - 28;
 	
	float tamCintura = (peso) / 5.7;
	
		if(idade>=28)
		{
		tamCintura = tamCintura + ((num/2) * 0.254);
		}
 	cout <<"O tamanho da cintura eh: "<< tamCintura<<endl;
 }