#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void (*swap)(int* a, int* b);
void regswap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void xorswap(int* a, int* b)
{
    *a^=*b^=*a^=*b;
}


int main(int argc, char **argv)
{
    unsigned array_size = 131072;
    int *data;
    struct timeval time_start, time_end;
    array_size = atoi(argv[1]);
    if(argc > 2 && atoi(argv[2])==1)
        swap = xorswap;
    else
        swap = regswap;
    data = (int *)malloc(sizeof(int)*array_size);
    for (unsigned i = 0; i < array_size; ++i)
        data[i] = rand();
   gettimeofday(&time_start, NULL);
   for (unsigned i = 0; i < array_size; i++)
   {
        swap(&data[i],&data[array_size-1-i]);
   }
   gettimeofday(&time_end, NULL);
   fprintf(stderr, "data[array_size/2] = %d\t", data[rand()%131072]);
   fprintf(stderr, "flipped %lf seconds\n",((time_end.tv_sec * 1000000 + time_end.tv_usec) - (time_start.tv_sec * 1000000 + time_start.tv_usec))/1000000.0);
   return 0;
}