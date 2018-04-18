#include "Lab02Q01.h"
#include <iostream>
	using namespace std;
#include <cmath>

void areaTriangulo(int b, int h)
{
	cout << "Area do triângulo: " << b*h/2 << endl;
}

void areaRetangulo(int b, int h)
{
	cout << "Area do retângulo: " << b*h << endl;
}

void areaQuadrado(int l)
{
	cout << "Area do quadrado: " << pow(l, 2) << endl;
}

void areaCirculo(int r)
{
	cout << "Area do círculo: " << PI*pow(r, 2) << endl;
}

void areaPiramide(int ab, int al)
{
	cout << "Area da pirâmide: " << ab+al << endl; 
}

void areaCubo(int a)
{
	cout << "Area do cubo: " << 6*pow(a, 2) << endl;
}

void areaParalelepipedo(int a1, int a2, int a3)
{
	cout << "Area do paralelepípedo: " << (2*a1*a2)+(2*a1*a3)+(2*a2*a3) << endl;
}

void areaEsfera(int r)
{
	cout << "Area da esfera: " << 4*PI*pow(r, 2) << endl;
}

void perimetroTriangulo(int l1, int l2, int l3)
{
	cout << "Perimetro do triângulo: " << l1 + l2 + l3 << endl;
}

void perimetroRetangulo(int b, int h)
{
	cout << "Perimetro do retângulo: " << 2*(b+h) << endl;
}

void perimetroQuadrado(int l)
{
	cout << "Perimetro do quadrado: " << 4*l << endl;
}

void perimetroCirculo(int r)
{
	cout << "Perimetro do círculo: " << 2*PI*r << endl;
}

void volumePiramide(int ab, int h)
{
	cout << "Volume da pirâmide: " << (ab*h)/3 << endl;
}

void volumeCubo(int a)
{
	cout << "Volume do cubo: " << pow(a, 3) << endl;
}

void volumeParalelepipedo(int ar1, int ar2, int ar3)
{
	cout << "Volume do paralelepípedo: " << ar1*ar2*ar3 << endl;
}

void volumeEsfera(int r)
{
	cout << "Volume da esfera: " << (PI*pow(r, 3))*(4/3) << endl;
}

/*void run()
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
		case 2:
			if(argv[1] == "quadrado")
			{
				areaQuadrado(atoi(argv[2]));
				perimetroQuadrado(atoi(argv[2]));
				break;
			}
			else if(argv[1] == "circulo")
			{
				areaCirculo(atoi(argv[2]));
				perimetroCirculo(atoi(argv[2]));
				break;
			}
			else if(argv[1] == "cubo")
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
		case 3:
			areaRetangulo(atoi(argv[2]), atoi(argv[3]));
			perimetroRetangulo(atoi(argv[2]), atoi(argv[3]));
			break;
		case 4:
			if(argv[1] == "piramide")
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
}*/