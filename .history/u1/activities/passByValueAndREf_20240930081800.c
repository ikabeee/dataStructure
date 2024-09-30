#include <stdio.h>
int firstVariable = 0, secondVariable = 0;
void swap(int firsVariable, int secondVariable){
  tempVariable = firstVariable;  /* temporarily save the value of the first variable */
  firstVariable = secondVariable;  /* swap the vale of the first variable with the value of the second variable */
  secondVariable = tempVariable;  /* put the value of the first variable into the second variable */
  return;
}

int main(void){

    return 0;
}