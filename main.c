#include <stdio.h>
#include <stdlib.h>
#include "time_utils.h"
int main(){

    int Input;
    char Task[20];
    char buffer[20];
    char enter[5];
        do{
            printf("Welcome what do you want to do ?\n");
            printf("Enter respective No. for the Following\n");
            printf("1.Start New Task \n2.Exit\n");
            fgets(buffer,20,stdin);

            Input = atoi(buffer); 

            while(Input != 1 && Input != 2) {
                printf("Please Enter 1 or 2\n");
                scanf("%d",&Input);
            }
        
        }while(Input != 1 && Input != 2);
        

        if (Input == 1){
            printf("Input Task name :- ");
            fgets(Task,20,stdin);
            printf("Task entered : %s",Task);
            time_t a = start();
            fgets(enter,5,stdin);
            printf("%.2f",stop(a));
        }
        else if (Input ==  2){
            return 0;
        }

    
}
