/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "controller.h"
#include "movies.h"
#include "informes.h"
#include <time.h>

int main(void) {

	srand(time(NULL));

	setbuf(stdout, NULL);
		    char seguir = 's';
		    int carga = 0;
		    char nombreArchivo[30];

		    LinkedList* listaMovies = ll_newLinkedList();

		    do{

		    		switch(menu()) {
		            case 1: //cargar archivo
		            	if(carga == 0)
		            	{
		            		printf("Ingrese el nombre del archivo (movies.csv): ");
							fflush(stdin);
							gets(nombreArchivo);
							if(!controller_loadFromText(nombreArchivo, listaMovies))
							{
				            	carga = 1;

							}
		            	}
		            	else
		            	{
		            		printf("No se puede abrir otro archivo en este momento ya que se sobreescribirian\n");
		            		system("cls");
		            	}
		                break;
		            case 2: //imprimir lista
		            	if(carga == 0)
						{
							printf("Aun no se ha cargado ningun archivo\n");
							system("cls");
						}
						else
						controller_ListMovies(listaMovies);
		            	break;
		            case 3: // asignar tiempo
		            	asignarTiempos(listaMovies,asignarAleatorios);
		            	break;
		            case 4: // filtrar por tipo
		            	if(carga == 0)
						{
							printf("Aun no se ha cargado ningun archivo\n");
							system("cls");
						}
		            	else
						filtradoPorGenero(listaMovies);
		            	break;
		            case 5: // mostrar duraciones
		            	if(carga == 0)
		            	{
		            		printf("Aun no se ha cargado ningun archivo\n");
		            		system("cls");
		            	}
		            	else
		            	ll_sort(listaMovies,movie_CompareByGenero,1);
		            	if(ll_sort == 0)
		            	{
		            		ll_sort(listaMovies,movie_CompareByDuracion,1);
		            	}
		            	controller_ListMovies(listaMovies);

		            	break;
		            case 6:// guardar peliculas
		            	if(carga == 0)
		            	{
		            		printf("Aun no se ha cargado ningun archivo\n");
		            		system("cls");
		            	}
		            	else
			            	archivoPelisOrdenadas(listaMovies);
		            	break;
		            case 7:
		            	seguir = 'n';
		            	printf("Cerrando el programa.\n");
		            	break;
		    		}


		    }while(seguir == 's');

		    ll_deleteLinkedList(listaMovies);
		    return 0;
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
