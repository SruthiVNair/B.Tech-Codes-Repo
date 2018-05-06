#include <stdio.h>
main() {
int a ;
int b ;
int c ;
int d ;
int e;
printf("Enter the values;");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
e = (a + b) * c / d;      
printf("Value of (a + b) * c / d is : %d\n",  e );

e = ((a + b) * c) / d;   
printf("Value of ((a + b) * c) / d is  : %d\n" ,  e );

e = (a + b) * (c / d);   
printf("Value of (a + b) * (c / d) is  : %d\n",  e );

e = a + (b * c) / d;     
printf("Value of a + (b * c) / d is  : %d\n" ,  e );
  
return 0;
}
