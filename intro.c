#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
int main(){
      int  int_ten=10;
      int *int_pointer;
      char char_c='a';
      char *char_pointer;
      printf("address of %d is--> %p\n",int_ten,&int_ten);
      printf("address of %c is--> %p\n",char_c,&char_c);
    //   printf("address of % id %p");
      //char_pointer=(char *)&int_ten;
      int_pointer=(int *)&char_c;
      printf("the address in int_pointer (type casting address of a)--> %p \n",int_pointer);
      printf("the value in int_pointer is --> %c\n",*int_pointer);

    return 0;
   }