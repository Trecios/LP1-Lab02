/**
* @file Lab02Q01.cpp
* @brief Programa em c++ que calcula a área e o perímetro/volume de algumas formas geométricas
* @author Felipe Douglas
* @since 18/04/2018
* @date 21/04/2018
* @sa http://www.google.com/
*/
#include "Lab02Q01.h"
#include <iostream>
	using namespace std;
#include <cmath>
#include <cstring>

/**
* @brief Funcao que calcula a area de um triangulo
* @param b Base e h Altura
*/
void areaTriangulo(int b, int h)
{
	cout << "Area do triângulo: " << b*h/2 << endl;
}
/**
* @brief Funcao que calcula a area de um retangulo
* @param b Base e h Altura
*/
void areaRetangulo(int b, int h)
{
	cout << "Area do retângulo: " << b*h << endl;
}
/**
* @brief Funcao que calcula a area de um quadrado
* @param l Lado
*/
void areaQuadrado(int l)
{
	cout << "Area do quadrado: " << pow(l, 2) << endl;
}
/**
* @brief Funcao que calcula a area de um circulo
* @param r Raio
*/
void areaCirculo(int r)
{
	cout << "Area do círculo: " << PI*pow(r, 2) << endl;
}
/**
* @brief Funcao que calcula a area de uma piramide
* @param ab Area da base e al Area lateral
*/
void areaPiramide(int ab, int al)
{
	cout << "Area da pirâmide: " << ab+al << endl; 
}
/**
* @brief Funcao que calcula a area de um cubo
* @param a Aresta
*/
void areaCubo(int a)
{
	cout << "Area do cubo: " << 6*pow(a, 2) << endl;
}
/**
* @brief Funcao que calcula a area de um paralelepipedo
* @param a1 Aresta 1, a2 Aresta 2 e a3 Aresta 3
*/
void areaParalelepipedo(int a1, int a2, int a3)
{
	cout << "Area do paralelepípedo: " << (2*a1*a2)+(2*a1*a3)+(2*a2*a3) << endl;
}
/**
* @brief Funcao que calcula a area de uma esfera
* @param r Raio
*/
void areaEsfera(int r)
{
	cout << "Area da esfera: " << 4*PI*pow(r, 2) << endl;
}
/**
* @brief Funcao que calcula o perimetro de um triangulo
* @param l1 Lado 1, l2 Lado 2 e l3 Lado 3
*/
void perimetroTriangulo(int l1, int l2, int l3)
{
	cout << "Perimetro do triângulo: " << l1 + l2 + l3 << endl;
}
/**
* @brief Funcao que calcula o perimetro de um retangulo
* @param b Base e h Altura
*/
void perimetroRetangulo(int b, int h)
{
	cout << "Perimetro do retângulo: " << 2*(b+h) << endl;
}
/**
* @brief Funcao que calcula o perimetro de um quadrado
* @param l Lado
*/
void perimetroQuadrado(int l)
{
	cout << "Perimetro do quadrado: " << 4*l << endl;
}
/**
* @brief Funcao que calcula o perimetro de um circulo
* @param r Raio
*/
void perimetroCirculo(int r)
{
	cout << "Perimetro do círculo: " << 2*PI*r << endl;
}
/**
* @brief Funcao que calcula o volume de uma piramide
* @param ab Area da base e h Altura
*/
void volumePiramide(int ab, int h)
{
	cout << "Volume da pirâmide: " << (ab*h)/3 << endl;
}
/**
* @brief Funcao que calcula o volume de um cubo
* @param a Aresta
*/
void volumeCubo(int a)
{
	cout << "Volume do cubo: " << pow(a, 3) << endl;
}
/**
* @brief Funcao que calcula o volume de um paralelepipedo
* @param ar1 Aresta 1, ar2 Aresta 2 e ar3 Aresta 3
*/
void volumeParalelepipedo(int ar1, int ar2, int ar3)
{
	cout << "Volume do paralelepípedo: " << ar1*ar2*ar3 << endl;
}
/**
* @brief Funcao que calcula o volume de uma esfera
* @param r Raio
*/
void volumeEsfera(int r)
{
	cout << "Volume da esfera: " << (PI*pow(r, 3))*(4/3) << endl;
}
/**
* @brief Funcao que roda a calculadora
* @param argc Quantidade de parametros e argv[] Parametros
*/
void run(int argc, const char *argv[])
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
}