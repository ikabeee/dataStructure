#include <stdio.h>
int firstVariable = 0, secondVariable = 0;
void swap(int firstVariable, int secondVariable){
    
  int tempVariable;
  tempVariable = firstVariable;  /* temporarily save the value of the first variable */
  firstVariable = secondVariable;  /* swap the vale of the first variable with the value of the second variable */
  secondVariable = tempVariable;  /* put the value of the first variable into the second variable */
  return;
}

int main(void){

  int a = 100;
  int b = 200;

  printf("before swap: value of a: %d \n", a);
  printf("before swap: value of b: %d \n", b);

  // call function to swap values
  swap(a, b);

  // check values outside the function after swap function is run
  printf("after swap: value of a: %d \n", a);
  printf("after swap: value of b: %d \n", b);

  return 0;

}