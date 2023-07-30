# include<stdio.h>
# include<time.h>

int main() {
clock_t start, end;
double execution_time;
start = clock();

/* Put your code here */

end = clock();
execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
return 0;
}