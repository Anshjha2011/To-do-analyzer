#include <stdio.h>
#include <time.h>

int main(){

     time_t r ;
     
     time(&r);
     struct tm* time = localtime(&r);
     printf("%s",asctime(time));



}
