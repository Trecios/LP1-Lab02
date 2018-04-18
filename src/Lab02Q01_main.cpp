#include <iostream>
	using namespace std;
#include <cstring>
#include "Lab02Q01.h"

int main(int argc, const char *argv[])
{
	switch(argc){
		case 1:
			cout << "Digite ./geometrica + o nome da forma geométrica + os seus parâmetros" << endl;
			cout << "Exemplos: " << endl;
			cout << "	./geometrica triangulo base altura lado1 lado2 lado3" << endl;
			cout << "	./geometrica retangulo base altura" << endl;
			cout << "	./geometrica quadrado lado" << endl;
			cout << "	./geometrica circulo raio" << endl;
			cout << "	./geometrica piramide area_base area_lateral altura" << endl;
			cout << "	./geometrica cubo aresta" << endl;
			cout << "	./geometrica paralelepipedo aresta1 aresta2 aresta3" << endl;
			cout << "	./geometrica esfera raio" << endl;
			cout << "Serão impressos os valores da área e do perímetro/volume." << endl;
			break;
		case 3:
			if(strcmp(argv[1], "quadrado") == 0)
			{
				areaQuadrado(atoi(argv[2]));
				perimetroQuadrado(atoi(argv[2]));
				break;
			}
			else if(strcmp(argv[1], "circulo") == 0)
			{
				areaCirculo(atoi(argv[2]));
				perimetroCirculo(atoi(argv[2]));
				break;
			}
			else if(strcmp(argv[1], "cubo") == 0)
			{
				areaCubo(atoi(argv[2]));
				volumeCubo(atoi(argv[2]));
				break;
			}
			else
			{
				areaEsfera(atoi(argv[2]));
				volumeEsfera(atoi(argv[2]));
				break;
			}
			break;
		case 4:
			areaRetangulo(atoi(argv[2]), atoi(argv[3]));
			perimetroRetangulo(atoi(argv[2]), atoi(argv[3]));
			break;
		case 5:
			if(strcmp(argv[1], "piramide") == 0)
			{
				areaPiramide(atoi(argv[2]), atoi(argv[3]));
				volumePiramide(atoi(argv[2]), atoi(argv[4]));
				break;
			}
			else
			{
				areaParalelepipedo(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
				volumeParalelepipedo(atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
				break;
			}
		case 7:
			areaTriangulo(atoi(argv[2]), atoi(argv[3]));
			perimetroTriangulo(atoi(argv[4]), atoi(argv[5]), atoi(argv[6]));
			break;
	}
	return 0;
}