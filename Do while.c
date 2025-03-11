#include<stdio.h>
int main(){
  int i=1;

// Using do while loop
do {
    printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
    i++;
} while (i <= 100);
}
