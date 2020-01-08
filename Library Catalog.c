#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
			int ICN;
			char title[101];
			char author[101];
			char genre[51];
			char format[51];
			char description[101];
} info;
		
void displayMenu(void);
void addItem(info *ptr, int i);
void modifyItem(info *ptr,int i);
void displayItem(info *ptr, int i);
void displayCatalog(info *ptr, int i);



int main (){
	char start;
	int selection,storeI,readI;
    int lastN=0;
	info array[1000], *ptr;
	FILE *lib, *itemN;
	ptr=&array[0];
	

	printf("pls press enter to start the library database program=>>");
	scanf("%c",&start);


		 if(start='\r')
		 {
         
		 if((lib=fopen("library.txt","r"))!=NULL){
		  
	     itemN=fopen("number.txt","r");
		 fscanf(itemN, "%d", &lastN);
		 
		 if(lastN>0){
		 for(readI=0; readI<lastN; readI++){
		fscanf(lib,"%d", &(ptr+(readI))->ICN); 
		fscanf(lib,"%s",&(ptr+(readI))->title); 
		fscanf(lib,"%s",&(ptr+(readI))->author); 
		fscanf(lib,"%s",&(ptr+(readI))->genre);
		fscanf(lib,"%s",&(ptr+(readI))->format);
		fscanf(lib,"%s",&(ptr+(readI))->description);

		 }
		 }
		 fclose(lib);
		 fclose(itemN);
		
		 }
		 displayMenu();
do{	
	printf("please enter your selection=>>");
	scanf("%d",&selection);
   
	switch(selection){
	case 1:
		
		lastN=lastN+1;
		addItem(array, lastN);
		break;

	case 2:
		modifyItem(array, lastN);
		break;

	case 3:displayItem (array, lastN);
		break;

	case 4:displayCatalog(array, lastN);
		break;

	case 5:
		 //lib=fopen("library.txt","a+");
		 
		lib=fopen("library.txt","w"); 
 for(storeI=0;storeI<lastN; storeI++)
 {    
	 fprintf(lib,"%d\n%s\n%s\n%s\n%s\n%s\n",(ptr+storeI)->ICN,(ptr+storeI)->title,(ptr+storeI)->author,(ptr+storeI)->genre,(ptr+storeI)->format,(ptr+storeI)->description);
	 //fprintf(lib,"Item %d\nItem catalog number(ICN) %d\nTitle %s\nAuthor %s\nGenre %s\nFormat %s\nDescription %s\n",lastN,(ptr+storeI)->ICN,(ptr+storeI)->title,(ptr+storeI)->author,(ptr+storeI)->genre,(ptr+storeI)->format,(ptr+storeI)->description);
     itemN=fopen("number.txt","w");
	 fprintf(itemN,"%d",lastN);
 }
	 fclose(lib);
	 fclose(itemN);
	 getch();
	exit(0);
	}
	

	}while(selection!=5);


}
		 else exit(99);
}



	void displayMenu(void)
	{
		printf("1. ADD\n");
		printf("2. MODIFY\n");
		printf("3. DISPLAY ITEM\n");
		printf("4. DISPLAY CATALOG\n");
		printf("5. EXIT\n");

	}

	void addItem(info *ptr,int i){

		printf("pls enter ICN:\n");
		scanf("%d",&(ptr+i-1)->ICN);
		fflush(stdin);
		//scanf("%d",&array[i].ICN);
		printf("pls enter title:\n");
		fflush(stdin);
		gets((ptr+i-1)->title);
		//gets(array[i].title);
		printf("pls enter author(first and last name):\n");
		fflush(stdin);
		gets((ptr+i-1)->author);
		//gets(array[i].author);
		printf("pls enter genre:\n");
		fflush(stdin);
		gets((ptr+i-1)->genre);
		//gets(array[i].genre);
		printf("pls enter format(Book, eBook or CD):\n");
		fflush(stdin);
		gets((ptr+i-1)->format);
		//gets(array[i].format);
		printf("pls enter description:\n");
		fflush(stdin);
		gets((ptr+i-1)->description);
		printf("press anykey to return the main menu\n");
        getch();
		displayMenu();

		//gets(array[i].description);

		/*fprintf(lib,"\n%d",i);
		fprintf(lib,"\n%d",array[i].ICN);
		fprintf(lib,"\n%s",array[i].title);
		fprintf(lib,"\n%s",array[i].author);
		fprintf(lib,"\n%s",array[i].genre);
		fprintf(lib,"\n%s",array[i].format);
		fprintf(lib,"\n%s",array[i].description);
		fclose(lib);*/
	}

	void modifyItem (info *ptr,int i){
		int itemN, checkI,modiN, checkN;
		printf("pls enter the ICN of the modified item:");
		scanf("%d",&itemN);
		fflush(stdin);
       for(checkI=0; checkI<i; checkI++){
		if((ptr+checkI)->ICN==itemN){
		printf("The item you choose to modify as below:\n");
		printf("Item catalog number: %d\n",(ptr+(checkI))->ICN); 
		printf("Title: %s\n",(ptr+(checkI))->title); 
		printf("Author: %s\n",(ptr+(checkI))->author); 
		printf("Genre: %s\n",(ptr+(checkI))->genre);
		printf("Format: %s\n",(ptr+(checkI))->format);
		printf("Description: %s\n",(ptr+(checkI))->description);
		checkN=checkI;
		}
	   }

		printf("please enter which part do you want to modify:\n");
		printf("1. ICN\n");
		printf("2. title\n");
		printf("3. author\n");
		printf("4. genre\n");
		printf("5. format\n");
		printf("6. description\n");
	    
		scanf("%d",&modiN);
		switch(modiN){
			case 1:
		printf("pls enter new ICN:\n");
		scanf("%d",&(ptr+checkN)->ICN);
		fflush(stdin);
		break;
		//scanf("%d",&array[i].ICN);
			case 2:
		printf("pls enter new title:\n");
		fflush(stdin);
		gets((ptr+checkN)->title);
		//gets(array[i].title);
		break;
			case 3:
		printf("pls enter new author:\n");
		fflush(stdin);
		gets((ptr+checkN)->author);
		//gets(array[i].author);
		break;
			case 4:
		printf("pls enter new genre:\n");
		fflush(stdin);
		gets((ptr+checkN)->genre);
		//gets(array[i].genre);
		break;
			case 5:
		printf("pls enter new format:\n");
		fflush(stdin);
		gets((ptr+checkN)->format);
		//gets(array[i].format);
		break;
			case 6:
		printf("pls enter new description:\n");
		fflush(stdin);
		gets((ptr+checkN)->description);
		break;
		}
	   
		
	
		printf("press anykey to return the main menu\n");
        getch();
		displayMenu();
	}

	void displayItem(info *ptr, int i){
		int displayI=0,displayICN;
		printf("pls enter the ICN number of the item you want to display:");
		fflush(stdin);
		scanf("%d",&displayICN);
		
		for(displayI=0; displayI<i; displayI++)
		{
		if (displayICN==(ptr+(displayI))->ICN)
        {
		printf("Item catalog number: %d\n",(ptr+(displayI))->ICN); 
		printf("Title: %s\n",(ptr+(displayI))->title); 
		printf("Author: %s\n",(ptr+(displayI))->author); 
		printf("Genre: %s\n",(ptr+(displayI))->genre);
		printf("Format: %s\n",(ptr+(displayI))->format);
		printf("Description: %s\n",(ptr+(displayI))->description);
		printf("\n");
		}
		}
		printf("press anykey to return the main menu\n");
        getch();
		displayMenu();
	
	}

	void displayCatalog(info *ptr, int i){
		int displayC;
		for(displayC=0; displayC<i; displayC++)
		{
			if((strcmp(((ptr+displayC)->format),"Book")==0))
			{
		printf("Item number %d\n",displayC+1);
		printf("Item catalog number: %d\n",(ptr+(displayC))->ICN);
		printf("Title: %s\n",(ptr+(displayC))->title); 
		printf("Author: %s\n",(ptr+(displayC))->author); 
		printf("Genre: %s\n",(ptr+(displayC))->genre);
		printf("Format: %s\n",(ptr+(displayC))->format);
		printf("Description: %s\n",(ptr+(displayC))->description);
		printf("\n");
			}
		}
			for(displayC=0; displayC<i; displayC++)
		{
			if((strcmp(((ptr+displayC)->format),"CD")==0))
		{
		printf("Item number %d\n",displayC+1);
		printf("Item catalog number: %d\n",(ptr+(displayC))->ICN);
		printf("Title: %s\n",(ptr+(displayC))->title); 
		printf("Author: %s\n",(ptr+(displayC))->author); 
		printf("Genre: %s\n",(ptr+(displayC))->genre);
		printf("Format: %s\n",(ptr+(displayC))->format);
		printf("Description: %s\n",(ptr+(displayC))->description);
		printf("\n");
			}
		}

				for(displayC=0; displayC<i; displayC++)
		{
			if((strcmp(((ptr+displayC)->format),"eBook")==0))
		{
		printf("Item number %d\n",displayC+1);
		printf("Item catalog number: %d\n",(ptr+(displayC))->ICN);
		printf("Title: %s\n",(ptr+(displayC))->title); 
		printf("Author: %s\n",(ptr+(displayC))->author); 
		printf("Genre: %s\n",(ptr+(displayC))->genre);
		printf("Format: %s\n",(ptr+(displayC))->format);
		printf("Description: %s\n",(ptr+(displayC))->description);
		printf("\n");
			}
		}
		printf("press anykey to return the main menu\n");
        getch();
		displayMenu();
	}
	