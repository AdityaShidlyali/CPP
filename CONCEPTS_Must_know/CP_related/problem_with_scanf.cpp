#include<stdio.h> 
  
int main() 
{ 
   int x; 
   char str[100]; 
   scanf("%d", &x); 
   fgets(str, 100, stdin); 
   printf("x = %d, str = %s", x, str); 
   return 0; 
   
   /*
   The problem with above code is scanf() reads an integer and leaves a newline character in buffer. 
   So fgets() only reads newline and the string “test” is ignored by the program.
   
   every scanf() leaves a newline character in buffer that is read by next scanf.
   */
} 
