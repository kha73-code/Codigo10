#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    clock_t start, end;
    long cpu_time_used;

    start=clock();

    system("libreoffice --writer");

    end=clock();

    cpu_time_used= (long) (end-start);

    printf("La aplicacion toma estos ciclos: %ld clock cycles\n",cpu_time_used);

    return 0;
}