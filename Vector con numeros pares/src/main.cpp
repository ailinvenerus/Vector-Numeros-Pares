/*
 * main.cpp
 *
 *  Created on: 13 de jun. de 2017
 *      Author: AILIN
 */

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <iomanip>
#include <ctype.h>
using namespace std;


int main(int argc, char **argv) {
	int tamanio;
	cout<<"Cuantos numeros ingresaras?";
	cin>>tamanio;
	int VEC[tamanio];
	for (int i = 0; i < tamanio; i++) {
		cout<<"Ingresar numero "<<i+1<<endl;
		cin>>VEC[i];
	}
	int contador = 0;
	for (int i = 0; i < sizeof VEC/4; i++) {
		if (VEC[i]%2 == 0) {
			contador ++;
		}
	}
	int PARES[contador];
	for (int i = 0; i< sizeof VEC/4; i++) {
		int j;
		if (VEC[i]%2 == 0) {
			PARES[j] = VEC[i];
				j++;
		}
			}
	for (int i = 0; i<sizeof PARES/4; i++) {
		cout<<PARES[i]<<endl;
	}
}
