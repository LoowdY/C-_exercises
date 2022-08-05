#include <iostream>



int main(){
	
	int num;
	float dezena, centena, resto;
	std:: cout << "Digite um numero inteiro de tres casas para retornar sua dezena\n";
	std:: cin >> num;
	resto = num % 100;
	dezena = resto /10;
	int n = dezena;
	std::cout << "o valor da dezena eh:"<< n << "\n";
	
	return 0;
} 