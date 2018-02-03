#include <stdio.h>

int sum_for(int list[]);
int sum_while(int list[]);
int sum_rec(int list[], int n);

int sum_for(int list[]){
  int total = 0;
  int n = (int)(sizeof(list)/sizeof(int));

  printf("FOR LOOP\n");
  printf("%i\n", n);
  for(int i = 0; i < n; i ++){
    total = total + list[i];
  }
  printf("%i\n", total);
  return total;
}

int sum_while(int list[]){
  int total = 0;
  int counter = 0;
  int n = (int)(sizeof(list)/sizeof(int));

  printf("WHILE LOOP\n");
  printf("%i\n", n);
  while(counter < n){
    total += list[counter];
    counter++;
  }
  printf("%i\n", total);
  return total;
}

int sum_rec(int list[], int n) {
  if (n < 0) {
    return 0;
  } else{
    return list[n] + sum_rec(list, n-1);
  }
}

int main(){
  int numbers[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = (int)(sizeof(numbers)/sizeof(int));

  printf("For loop total: %i\n", sum_for(numbers));
  printf("While loop total: %i\n", sum_while(numbers));
  printf("Recursion total: %i\n", sum_rec(numbers, 9));
  return 1;
}
