#include <iostream>


int main(void)
{
	float lado, perimetro, area, diagonal;
	
	
	std::cout << "digite o tamanho do lado de um quadrado e saiba o perimetro, area e diagonal:\n\n ";
	std::cin >> lado;
	std::cout <<"\n";
	perimetro = 4*lado;
	area = lado*lado;
	diagonal = 1.41 * lado;
	std::cout << "PERIMETRO:"<<perimetro<<"\n" <<"AREA:"<< area<<"\n" << "DIAGONAL:"<<diagonal<<"\n";
	std::cout <<"\n";
	
}