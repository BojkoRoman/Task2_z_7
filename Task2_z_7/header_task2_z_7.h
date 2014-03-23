/** 
 * @file	header.h  
 * @brief	header file with declarations global variables, interface description and struct description
 *
 * Copyright 2008 by Roman Bojko
*/



#ifndef HEADER_STRUCT_H_
#define HEADER_STUCT_H_

#include <iostream>
#include <string.h>
#include <stdio.h>


using namespace std;

typedef struct book_item
 {
   //char author[30];
   char name[30];
   //char publishing_house [15];
   unsigned short year;
   book_item  *next;

 } Book;


extern Book *top, *last; /**< global pointer to first and last element */ 

Book* AddBook ( Book *last);
void SortByYear( void );
void PrintC ( Book *top );
void PrintAllBooks ( Book *top );
void FreeList ( Book *top);



#endif // HEADER_STRUCT_H_