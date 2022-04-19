#include <stdio.h>
int main(){
    int acc;
    int pin;
    int user[3][2];

    user[0][0] = 1100;
    user[0][1] = 5555;

    user[1][0] = 3456;
    user[1][1] = 1234;

    user[2][0] = 65901;
    user[2][1] = 360;


    printf("Enter ID Number: ");
    scanf("%d",&acc);

        if(acc==user[0][0]){
        printf("Enter PIN: ");
        scanf("%d",&pin);

        if(pin==user[0][1]){
            printf("\nYou have succesfully logged in ID #: %d\n",user[0][0]);
        }else
        printf("\nInvalid ID/PIN!");
    }
        else if(acc==user[1][0]){
        printf("Enter PIN: ");
        scanf("%d",&pin);

        if(pin==user[1][1]){
            printf("\nYou have succesfully logged in ID #: %d\n",user[1][0]);
        }else
        printf("\nInvalid ID/PIN!");
}
        else if(acc==user[2][0]){
        printf("Enter PIN: ");
        scanf("%d",&pin);

        if(pin==user[2][1]){
            printf("\nYou have succesfully logged in ID #: %d\n",user[2][0]);
        }else
        printf("\nInvalid ID/PIN!");
}
        else
        printf("Enter PIN: ");
        scanf("%d",&pin);

         printf("\nInvalid ID/PIN!");

    return 0;
}
