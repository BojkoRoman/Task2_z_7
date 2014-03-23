/**
*@file Task2_z_7
*@brief solution (C++ code) of Task2.7 GL 
* (7.	З клавіатури ввести набір даних про книги у формі: <Автор>, <Найменування>, <Видав-ництво>, <Рік видання>. 
* Надрукувати введений список книг у вигляді таблиці, згрупувавши їх за роками видань у спадному порядку. 
* Роздрукувати дані про книги з програмування мовою C/C++.)
*
*Copyright 2014 by Roman Bojko
*
*/
#include "header_task2_z_7.h"

int main()
{
   unsigned char chr;


	do
	{
		if(!top)cout<<"1. Add new books"<<endl;	
		if(top) cout<<"2. Print information about all books sort by year"<<endl;
		if(top) cout<<"3. Print information about the C/C++ books"<<endl;
		cout<<"4. Exit\n"<<endl;
		cout<<"Enter command : "<<endl;
		cin>>chr; 
		switch(chr)
		{
			case '1':
						cout<<"-------------------------------"<<endl;
						cout<<"Enter information about  books"<<endl;	
						cout<<"(end of entering - 0)"<<endl;	
						cout<<"-------------------------------"<<endl;

							do
							{ 
							  last=AddBook(last);
							} while (last!=NULL);
							
					    break;
			case '2':
				        if(top)
						{
						  SortByYear();
						  PrintAllBooks(top);
				        }
				        break;
			case '3':
				        if(top)
				        {
					      PrintC(top);
				        }
				        break;
	    }
		cout<<endl;
	}
	while(chr != '4');
 FreeList ( top );
	
  system("pause");
  return 0;
}