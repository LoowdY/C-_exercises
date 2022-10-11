#include <iostream>
using namespace std;
int fat(int num);
int main()
{
    int numero;

    cout << "Digite o numero que voce deseja calcular o fatorial:\n";
    cin >> numero;
    cout << fat(numero);

    return 0;

}

int fat(int num)
{

    if(num<=1)
    {
        num = 1;
    }
    else
    {
        num = num * fat(num - 1);
    }
    
    return num;

}
