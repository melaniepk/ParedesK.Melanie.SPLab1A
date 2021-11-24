/*
 * informes.h
 *
 *  Created on: 24 nov. 2021
 *      Author: mkale
 */

#ifndef INFORMES_H_
#define INFORMES_H_

#include "LinkedList.h"

#endif /* INFORMES_H_ */
/**
 * @fn int filtradoPorGenero(LinkedList*)
 * @brief
 * filtra las peliculas segun su genero y crea arvhicos segun el usuario elija
 * @param pListaMovies
 * @return
 */
int filtradoPorGenero(LinkedList* pListaMovies);
/**
 * @fn int movie_CompareByDuracion(void*, void*)
 * @brief
 * compara a las peliculas por duracion
 * @param movie1
 * @param movie2
 * @return
 */
int movie_CompareByDuracion(void* movie1, void* movie2);
/**
 * @fn int movie_CompareByGenero(void*, void*)
 * @brief
 * compara a las peliculas por genero
 * @param movie1
 * @param movie2
 * @return
 */
int movie_CompareByGenero(void* movie1, void* movie2);


