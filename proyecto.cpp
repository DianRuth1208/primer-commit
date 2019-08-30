#include <iostream>
#include <conio.h>
using namespace std;


struct album {
	char alb[20];
};

struct cancion{
	char nombre[20];
	int codigo;
	char genero [20];
	struct album al;
};

int main (int argc, char** argv) {
	struct cancion C1[5];
	struct cancion*apuntador;
	
	apuntador=&C1[0];
	
	for (int i=0; i<1;i++)
	{
	cout<<"Nombre: ";
	cin.getline(C1[i].nombre, 20, '\n' );
	cout<<"Codigo: ";
	cin>>C1[i].codigo;
	cout<<"Genero";
	cin>>C1[i].genero;
	cout<<"Nombre del album: ";
	fflush(stdin);
	cin.getline(C1[i].al.alb, 20, '\n');	
	}
	
	
	cout<<endl<<"Nombre guardado: "<<apuntador->nombre;
	cout<<endl<<"Codigo guardado: "<<apuntador->codigo;
	cout<<endl<<"Genero guardado: "<<apuntador->genero;
	cout<<endl<<"Album guardado: "<<apuntador->al.alb;
	
	
	getch();
	return 0;
}
