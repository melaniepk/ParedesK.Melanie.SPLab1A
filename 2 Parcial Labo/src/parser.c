#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "movies.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo movies.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_MovieFromText(FILE* pFile , LinkedList* pListaMovies)
{
	eMovie* unaPeli;

		char id[50];
		char titulo[50];
		char genero[50];
		char duracion[50];
		int i=0;
		int cant;
		pFile = fopen("movies.csv","r");
		if(pFile == NULL)
		{
			printf("Error, no es posible leer el archivo");
		}
		else
		{
			fscanf(pFile, "%[^,], %[^,], %[^,], %[^\n]", id,titulo, genero,duracion);
			while(!feof(pFile))
			{
				cant = fscanf(pFile, "%[^,], %[^,], %[^,], %[^\n]", id, titulo,
						genero,duracion);
				if(cant <4)
				{
					break;
				}
				unaPeli = movie_newParametros(id,titulo,genero,duracion);
				i++;
				ll_add(pListaMovies,unaPeli);
			}
		}

		fclose(pFile);
	    return i;
}

