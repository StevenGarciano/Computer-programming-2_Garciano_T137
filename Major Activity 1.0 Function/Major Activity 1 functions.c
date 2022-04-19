#include <stdio.h>
#include <string.h>  
void main()
{  
   int id, unit;
   float num1, sum=0, n,num;
   char connm[25];

   printf("Input Customer ID :");
   scanf("%d",&id);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&unit);
   if (unit <199 )
	num1 = 1.50;
   else	if (unit>=250 && unit<400)
		num1 = 1.60;
	else if (unit>=450 && unit<600)
			num1 = 1.85;
		else
			num1 = 2.00;
   n = unit*num1;
   if (n>300)
	sum = n*10/100.0;
   num = n+sum;
   if (num  < 100)
	num =100;
   printf("\nElectricity Bill\n");
   printf("Customer ID NO.                       :%d\n",id);
   printf("unit Consumed                       :%d\n",unit);
   printf("Amount Charges @Php. %4.2f  per unit :%8.2f\n",num1,n);
   printf("Surchage Amount                     :%8.2f\n",sum);
   printf("Total Amount Paid By the Customer     :%8.2f\n",num);

}  