#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
char balik (char x[100]);
char cek(char y[100],char z[100]);
int main() {
	char m[100],o[100];
	cout << "Masukkan kalimat : " ;
	gets (m);
	strcpy(o,m) ;
	balik(o);
	cek(m,o) ;
}
char balik(char x[100]) {
	strrev(x);
}
char cek(char y[100],char z[100])
{
	char cek(char y[100],char z[100]);
	if (strcmp(y,z)==0)
	{
		cout << "Kalimat tersebut adalah palindrom " ;
	}
	else 
	{
		cout << "Kalimat tersebut bukan palindrom ";
	} 
	return 0;
}
