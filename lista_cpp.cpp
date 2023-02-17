#include <iostream>
#include <list>

using namespace std;

int main() {
    // Criando uma lista vazia
   list<int> notas;
   int nota_interna = 0;
	cout << "Digite as notas da ativiade do aluno:\n\n";
	for(int a = 1; a<=4; a++)
	{
		float media;
		int acumulador = 0;
		
		for(int aluno = 1; aluno <= 5; aluno++)
		{
			if(nota_interna<0)
			{
				cout << "digite um valor entre 0 e 10\n\n";
			}
			else
			{
				// Adicionando elementos à lista de notas	
				cin >> nota_interna;
	    		notas.push_back(nota_interna);
	    		acumulador = acumulador + nota_interna; 
			}
	
		}	
	media = (acumulador/5);
	cout << acumulador  << "\n\n"<< "media:"<< media<< "\n";
	if(media>=7)
	{
		cout << "aluno aprovado\n";
	}
	else
	{
		cout << " aluno reprovado\n";
	}
	cout << "Continue com o proximo aluno\n\n";
	}
    // Percorrendo a lista
    std::list<int>::iterator it;
    for (it = notas.begin(); it != notas.end(); ++it)
	{
		
		cout << *it << " ";
	}	
    
    std::cout << std::endl;

    return 0;
}
