#include <stdlib>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/wait.h>
#include <signal.h>
#include <time.h>
#include <errno.h>
#include <sys/syscall>
#include <sys/types.h>
#DEFINE NUMCOCHES 5
#DEFINE NUMBOXES 2
pthread_t juez;
int numerosCochesCircuito;
int cont;
/*los metodos deben de recibir la manejadora debido a que tratamos con threads*/
void *inicializaRecursos(void* manejadora);
void *nuevoCorredor(void* manejadora);
void *accionesCorredor(void* manejadora);
void *accionesBox(void* manejadora);
void *accionesJuez(void* manejadora);
/*defino los structs que son variables que posteriormente seran independientes
para cada thread*/
Struct vehiculos{
	int destrozado;
	int numeroVehiculo;
	pthread_t vehiculoHilo;
	int marca;
	int numeroVueltas;
	
};
/*puntero que almacenara todos los coches que tenemos*/
Struct vehiculos *punteroVehiculos;
Struct taller{
	pthread_t caja;
	int estaTrabajando;
	int identificadorBox;
	int deVacaciones;
};
/*puntero que contiene todos los talleres que tenemos*/
Struct taller *punteroTalleres
int main(){
	cont=0;
	numerosCochesCircuito=0;
	for(int i=0;i<NUMBOXES;i++){
		punteroTalleres = (Struct taller)malloc(sizeof(Struct taller)*NUMCOCHES);
	}	
	for(int i=0;i<NUMCOCHES;i++){
		punteroVehiculos = (Struct vehiculos)malloc(sizeof(Struct vehiculo)*NUMCOCHES);
	}
  for(int i=0;i<NUMBOXES;i++){
    punteroTalleres[i].estaTrabajando = 0;
    punteroTalleres[i].identificador = 0;
    //punteroTalleres[i].identificadorBox;
    punteroTalleres[i].deVacacciones = 0;
  }
  for(int i=0;i<NUMBOXES;i++){
    punteroVehiculos[i].destrozado=0;
	  punteroVehiculos[i].numeroVehiculo=0;
	  //punteroVehiculos[i].vehiculoHilo;
	  punteroVehiculos[i].marca=0;
	  punteroVehiculo[i].numeroVueltas=0;
  }
	
}

void *inicializaRecursos(void* manejadora){

}
void *nuevoCorredor(void* manejadora){

}
void *accionesCorredor(void* manejadora){

}
void *accionesBox(void* manejadora){

}
void *accionesJuez(void* manejadora){

}
