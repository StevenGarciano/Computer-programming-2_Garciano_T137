#include <stdio.h>
#include <string.h>  
void main()
{  
   int custid, conu;
   float chg, surchg=0, gramt,netamt;
   char connm[25];

   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&conu);
   if (conu <199 )
	chg = 1.50;
   else	if (conu>=250 && conu<400)
		chg = 1.60;
	else if (conu>=450 && conu<600)
			chg = 1.85;
		else
			chg = 2.00;
   gramt = conu*chg;
   if (gramt>300)
	surchg = gramt*10/100.0;
   netamt = gramt+surchg;
   if (netamt  < 100)
	netamt =100;
   printf("\nElectricity Bill\n");
   printf("Customer IDNO                       :%d\n",custid);
   printf("unit Consumed                       :%d\n",conu);
   printf("Amount Charges @Php. %4.2f  per unit :%8.2f\n",chg,gramt);
   printf("Surchage Amount                     :%8.2f\n",surchg);
   printf("Total Amount Paid By the Customer     :%8.2f\n",netamt);

}  