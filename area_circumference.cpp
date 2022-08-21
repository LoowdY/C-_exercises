//código feito para calcular área e comprimento de circunferências

#include <iostream>
#include<cmath>
using namespace std;


int main()
{
double radius, cicumference, area;
	
		cout<<"Type the radius to find the area and cicumference of the circle: "<<endl;
		cin>>radius;
			cicumference = (2*(3.14159265))*radius;
			area = (3.14159265)*(pow(radius,2));
		cout<<"cicumference: "<<cicumference<<endl <<"Area : "<<area<< endl;
	
	return 0;
}