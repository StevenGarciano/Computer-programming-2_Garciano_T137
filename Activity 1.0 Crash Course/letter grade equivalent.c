#include <stdio.h>
int main(void){
int grade;
printf("Enter grade: ");
scanf("%d",&grade);

if(grade<=0){
  printf("Invalid input. Please try again.");
}
else if(grade<=49){
  printf("Your letter grade is F.");
}
else if(grade<=59){
  printf("Your letter grade is D.");
}
else if(grade<=67){
  printf("Your letter grade is C.");
}
else if(grade<=75){
  printf("Your letter grade is B-.");
}
else if(grade<=83){
  printf("Your letter grade is B.");
}
else if(grade<=91){
  printf("Your letter grade is A-.");
}
else if(grade<=100){
printf("Your letter grade is A.");

}else{
  printf("invalid input. Please try again.");
}
return 0;
}