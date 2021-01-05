/*Printing time and calculating total no. of seconds*/

#include <stdio.h>
int main(void)

{
   int hr,min,sec,total;  /*Specifying variables*/
   printf("Enter time components\n");
   scanf("%d,%d,%d",&hr,&min,&sec);
   
  /*Validating input from user*/   
   
 if (hr>=24 || min>=60 || sec>=60)   
  {
   printf("Invalid input\n");
  } 
 else
  { 
  printf("TIME= %d:%d:%d\n",hr,min,sec);
  } 
  
  /*Formula and printing total no. of sec*/
     total=sec+(min*60)+(hr*60*60); 
     printf("Total no. of sec=%d\n",total);
     return 0;
}     
