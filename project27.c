//program to demonstrate use of structures in C
#include <stdio.h>
#include <string.h>

struct book{
   char title[10];
   char author[20];
   double price;
   int pages;
} book1;

int main(){
   strcpy(book1.title, "Learn C");
   strcpy(book1.author, "Dennis Ritchie");
   book1.price = 675.50;
   book1.pages = 325;
   
   printf("Title: %s \n", book1.title);
   printf("Author: %s \n", book1.author);
   printf("Price: %lf \n", book1.price);
   printf("Pages: %d \n", book1.pages);
   return 0;
}