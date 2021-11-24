/*
 * informes.c
 *
 *  Created on: 24 nov. 2021
 *      Author: mkale
 */
#include <stdio.h>
#include <stdlib.h>
#include "informes.h"
#include "movies.h"
#include "controller.h"
#include "utn1.h"

int filtradoPorGenero(LinkedList* pListaMovies)
{
	int retorno = -1;
	int respuesta;

		if(pListaMovies!= NULL)
		{

					do
					{
						utn_getNumero(&respuesta,"Ingrese el numero correspondiente al tipo que desea filtrar:\n 1.Adventure\n2.Drama\n"
								"3.Comedy\n4.Romance\n5.Documentary\n6.Horror\n7.Musical\n8.Animation\n9.Action\n10.Thriller\n11.Western\n"
								,"ERROR, la opcion ingresada no existe\n",1,11,5);

						switch(respuesta)
						{
							case 1:
								archivoAdventure(pListaMovies);
								break;
							case 2:
								archivoDrama(pListaMovies);
								break;
							case 3:
								archivoComedy(pListaMovies);

								break;
							case 4:
								archivoRomance(pListaMovies);
								break;
							case 5:
								archivoDocumentary(pListaMovies);
								break;
							case 6:
								archivoHorror(pListaMovies);
								break;
							case 7:
								archivoMusical(pListaMovies);

								break;
							case 8:
								archivoAnimation(pListaMovies);

								break;
							case 9:
								archivoAction(pListaMovies);

								break;
							case 10:
								archivoThriller(pListaMovies);

								break;
							case 11:
								archivoWestern(pListaMovies);

								break;
							case 12:
								system("cls");
								break;

						}
						retorno = 0;

						printf("Creando Archivo.\nIngrese 1 para ir al menu\n");
						scanf("%d", &respuesta);

					}while(respuesta!=1);




		}
	    return retorno;
}


int movie_CompareByDuracion(void* movie1, void* movie2)
{
	int retorno;
	eMovie* unaPeli;
	eMovie* otraPeli;

	if(movie1 != NULL && movie2!= NULL)
	{
		unaPeli = (eMovie*) movie1;
		otraPeli = (eMovie*) movie2;

	for(int i =0; i< 11;i++)
	{
		if(strcmp((unaPeli+i)->genero,(otraPeli+i)->genero)==0)
		{
			if(unaPeli->duracion > otraPeli->duracion)
			{
				retorno = -1;
			}
			else
			{
				if(unaPeli->duracion < otraPeli->duracion)
				{
					retorno = 1;
				}
				else
				{
					retorno = 0;
				}
			}
}



	}


	}

	return retorno;
}

int movie_CompareByGenero(void* movie1, void* movie2)
{

   int valor=0;

	if(movie1 != NULL && movie2!= NULL)
	{
		   valor=strcmp(((eMovie*)movie1)->genero,((eMovie*)movie2)->genero);
	}
   return valor;

}

