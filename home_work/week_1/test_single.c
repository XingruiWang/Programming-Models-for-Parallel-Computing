#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    double count = 0;
    clock_t start, end;
    start = clock();
    for(int i = 0; i < 1000000000; i ++){
        count += i;
    }
    end = clock();
    double total_t = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Finish in %f seconds\n", total_t);
    printf("1 + 2 + ... + 1000000000 = %.0f\n",count);
    return 0;
}

