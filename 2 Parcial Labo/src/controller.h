/*
 * controller.h
 *
 *  Created on: 24 nov. 2021
 *      Author: mkale
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include "LinkedList.h"


#endif /* CONTROLLER_H_ */
/**
 * @fn int menu()
 * @brief
 * menu de opciones
 * @return
 */
int menu();
int controller_loadFromText(char* path , LinkedList* pListaMovies);
int controller_saveAsText(char* path , LinkedList* pListaMovies);
int controller_ListMovies(LinkedList* pListaMovies);
int asignarTiempos(LinkedList* this, int(*pFunc) (void*));
int asignarAleatorios(void* elemento);
int filtroTipoAdventure(void* elemento);
int archivoAdventure(LinkedList* lista);
int filtroTipoDrama(void* elemento);
int archivoDrama(LinkedList* lista);
int filtroTipoComedy(void* elemento);
int archivoComedy(LinkedList* lista);
int filtroTipoRomance(void* elemento);
int archivoRomance(LinkedList* lista);
int filtroTipoDocumentary(void* elemento);
int archivoDocumentary(LinkedList* lista);
int filtroTipoHorror(void* elemento);
int archivoHorror(LinkedList* lista);
int filtroTipoMusical(void* elemento);
int archivoMusical(LinkedList* lista);
int filtroTipoAnimation(void* elemento);
int archivoAnimation(LinkedList* lista);
int filtroTipoAction(void* elemento);
int archivoAction(LinkedList* lista);
int filtroTipoThriller(void* elemento);
int archivoThriller(LinkedList* lista);
int filtroTipoWestern(void* elemento);
int archivoWestern(LinkedList* lista);
int archivoPelisOrdenadas(LinkedList* lista);




























