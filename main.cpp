#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "ponto.h"
using namespace std;


void plano(float x, float z) {
    vector<Ponto> plano;
    //pega nestes pontos e prenche o vector

		Ponto p1 =Ponto(-x / 2, 0, z / 2);
		Ponto p2 = Ponto(x / 2, 0, -z / 2);
        Ponto p3 = Ponto(x / 2, 0, z / 2);
		Ponto p4 = Ponto(-x / 2, 0, z / 2);
        Ponto p5 = Ponto(-x / 2, 0, -z / 2);
        Ponto p6 = Ponto(x / 2, 0, -z / 2);

}


void box(float x, float y, float z ) {

}

void sphere(float radius, float slices, float stacks) {

}

void cone(float  bottom radius, float height, float slices, float stacks) {

}



int main(int argc, char* argv[]) {
	string prim = argv[1];				//Tipo de primitiva
	vector verti;						//Lista de v�rtices

	

	if (argc <= 2) {
		printf("Argumentos insuficientes!");
	}
	else {
		if (prim == "plano"){
			plano(argv[2], argv[3]);
		}
		(prim ==  "caixa") {
			...
		}
		(prim ==  "esfera") {
			...
		}
		(prim ==  "cone") {
			...
		}

	}

	ofstream file;						//Abertura de ficheiro
	file.open(argv[argc - 1]);
	//escreve vector para ficheiro
	file.close();
	return 0;
}
/*
prim plano
verti
Input: gerador plano 2 2 plano.3d
Output: plano.3d
1.000000 0.000000 1.000000
1.000000 0.000000 - 1.000000
- 1.000000 0.000000 1.000000
- 1.000000 0.000000 - 1.000000
- 1.000000 0.000000 1.000000
1.000000 0.000000 - 1.000000*/

struct point {
	float x
	float y
	float z
}

1,0,-1

v[0] = point
point.getX = 1


