#include <iostream>
#include <cmath>
using namespace std;

int main()
{	int soma;
	float resultado;
	int A[10];
	int B[10];
	int C[10];
	int i,z,x, c;
		
	cout<< "Digite os valores dos 10 primeiros elementos do vetor A:\n";
	
	for (i = 0; i<10; i++)
	{
	
	cout<< "digite:\n\n";
	cin>> A[i];
	
	}

	cout<< "Digite os valores dos 10 primeiros elementos do vetor B:\n";
	
		for (z = 0; z<10; z++)
	{
	
	cout<< "digite:\n\n";
	
	cin>> B[z];
	
	}
	
	cout<< "Digite os valores dos 10 primeiros elementos do vetor C:\n";
	
	
		for (x = 0; x<10; x++)
	{
	
	cout<< "digite:\n\n";

	cin>> C[x];
	
	}
	
	cout<< "\nAgora vamos somar cada elemento, em sua repectiva posicao, entre A e B.\n Apos isso, vamos dividir esta soma por cada elemento relativo de C\n\n";
	
	for(c = 0; c < 10; c++)
	{
	
		soma = A[c] + B[c];
		resultado = soma / (C[c]);
		cout << "O resultado de (A + B)/C eh: "<< resultado << endl;
		
	}
	
	return 0;
}
