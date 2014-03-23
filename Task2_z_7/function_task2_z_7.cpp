/** 
 * @file	functions.cpp 
 * @brief	implementation file all functions
 *
*/

#include "header_task2_z_7.h"

Book *top, *last;

/**
 * @brief   This function add books
 * @param   *last - global pointer to end of list 
 * @return  *temp - pointer to new item 
 */

Book* AddBook ( Book* last )
{
 Book * temp;//  ptr to new temp elem
 temp= new( Book ); //memory allocation
 
 unsigned short temp_year; // variable for entering year
 static unsigned short num=1; // variable for count entered books 
 
   cout<<"Enter the year of "<<num<<" book's edition: "<<endl;
   cin>>temp_year;
   
   if(temp_year==0) // condition end of ending
   {
     delete temp;
	 return NULL;
   }
   else
   {
	 temp->year=temp_year; 

     cout<<"Enter the "<<num<<" book's name: "<<endl;
     cin>>(*temp).name;
     temp->next=NULL; // next item become the last
   };

      if ( top==NULL )    // if list is empty
        top=last=temp;       
      else
	  {
        last->next = temp;   		
	  };

	 num++;

 return temp; 
};
//-----------------------------------------------
/**
 * @brief   This function delete list from global heap
 * @param   *top - global pointer to begin of te list
 * @return  void
 */
void FreeList ( Book *top)
{
 if(top)
 {
 while(top!=NULL)
 {
   top=top->next;
   delete last;
   last=top;

 };	 
 cout<<"list deleted"<<endl;
 };
};

//-----------------------------------------------
/**
 * @brief   This function sort book in the list by year  
 * @param   *top - global pointer to begin of te list
 * @return  void
 */

void SortByYear ( void )
 {
  Book *temp = new( Book ); // alocation memory for temp list item

   for(Book *cur = top; cur!=NULL; cur = cur->next)
   {
     Book *max = NULL; // alocation memory for max list item
     int max_year = cur->year;

     for(Book *ptr = cur->next; ptr!=NULL; ptr = ptr->next)
     {
       if(ptr->year > max_year)
       {
         max = ptr;
         max_year = ptr->year;
       }
     }
     if(max!=NULL)
	 {	  
       memcpy ( temp, cur, 32 );
       memcpy ( cur, max, 32 );
       memcpy ( max, temp, 32 );
	 };  
   };
 };
//-----------------------------------------------
/**
 * @brief   This function print  C/C++ books 
 * @param   *top - global pointer to begin of te list
 * @return  void
 */
void PrintC ( Book * top )
{
 	const char * str0="c/c++";
    const char * str1="C/C++";
	const char * str2="c++";
	const char * str3="C++";
	 
	 cout<<"---------------------------"<<endl;
	 cout<<"C/C++ books:"<<endl;
	 cout<<"---------------------------"<<endl;
	
	 for(last=top; last!=NULL; last=last->next) 
	 {
      if((strstr(last->name,str0)!=NULL)||
		  (strstr(last->name,str1)!=NULL)|| 
		    (strstr(last->name,str2)!=NULL)||
			  (strstr(last->name,str3)!=NULL))

		 cout<<last->year<<"  "<<last->name<<endl;
	 };   
 };
//-----------------------------------------------
/**
 * @brief   This function print all books 
 * @param   *top - global pointer to begin of te list
 * @return  void
 */
void PrintAllBooks ( Book * top )
{
 cout<<"---------------------------"<<endl;
 cout<<"All books"<<endl;
 cout<<"---------------------------"<<endl;
 	for(last=top; last!=NULL; last=last->next) 
                cout<<last->year<<"  "<<last->name<<endl;
};
//-----------------------------------------------

