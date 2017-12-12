//Ejericicio 7
//7. Pasadas las elecciones se desea buscar cuantos votos obtuvo un candidato mediante su ID. Agregar una funcion al programa 6. que permita realizarlo.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct candidato{
	char nombre[20];
	int id;
	int voto;
}candidatos[100];

void nombreyid(int n){
	int i;
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("%d. Dame su nombre: ", i+1);
		gets(candidatos[i].nombre);
		printf("%d. Dame su ID de 3 numeros ", i+1);
		scanf("%d", &candidatos[i].id);
		printf("\n");
	}
	printf("\nCandidatos\n");
	for(i=0;i<n;i++){
	printf("Nombre: %s ", candidatos[i].nombre);
	printf("ID: %d", candidatos[i].id);
	printf("\n");
	
	}	
}
void v(int n, int votantes,int a[100] ){
	int i,j, voto[votantes],c[n],m;
	printf("    Votos\n");
	for(i=0;i<votantes;i++){
		printf("Nota: Para votar ingresa el ID del candidato\n");
		printf("Dame tu voto: ");
	scanf("%d", &voto[i]);
	printf("\n");
	}
	for(j=0;j<n;j++){
		
		m=0;
		for(i=0;i<votantes;i++){
			
			if(candidatos[j].id==voto[i]){
				m=m+1;
				c[j]=m;
				a[j]=c[j];
			}
		}
	}
	
	//for(j=0;j<n;j++){
	//fflush(stdin);
	//printf("Nombre: %s ", candidatos[j].nombre);
	//printf("ID: %d ", candidatos[j].id);
	//printf(" Votos: %d ", c[j]);
	//printf("%d", a[j]);
	printf("\n");
	}


void r(int n,int a[]){
	int j;
	printf("RESULTADOS:\n");
	for(j=0;j<n;j++){
	fflush(stdin);
	printf("Nombre: %s ", candidatos[j].nombre);
	printf("ID: %d ", candidatos[j].id);
	printf(" Votos: %d ", a[j]);
	printf("\n");
}

	
}

void busqueda(int n, int a[]){
	int j, ID;
	printf("\nBusqueda:\n");
	printf("¿A que candidato quieres buscar? \n");
	printf("Nota: proporciona el  id del candidato para encontrarlo\n");
	scanf("%d", &ID);
	for(j=0;j<n;j++){
		if(candidatos[j].id==ID){
	printf("Nombre: %s ", candidatos[j].nombre);
	printf("ID: %d ", candidatos[j].id);
	printf(" Votos: %d ", a[j]);
		}
	}
}
int votantes;
int n;
int a[100];
int main(){
	printf("Dame el numero de candidatos\n");
	scanf("%d", &n);
	nombreyid(n);
	printf("\nCantidad de votantes\n");
	scanf("%d", &votantes);
	v(n,votantes,a);
	r(n,a);
	busqueda(n,a);
	return 0;
}
