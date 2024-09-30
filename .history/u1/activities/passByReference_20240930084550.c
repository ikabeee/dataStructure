#include <stdio.h>
void swap(int *pFirstVariable, int *pSecondVariable)
{
  int temp;

// using dereferenced pointers means the function is working with the values at the addresses that are passed in
  temp = *pFirstVariable;
  *pFirstVariable = *pSecondVariable;
  *pSecondVariable = temp;

  return;
}

int main(void)
{
  int a = 100;
  int b = 200;

  printf("before swap: value of a: %d \n", a);
  printf("before swap: value of b: %d \n", b);

  // call the function to swap values, using the 'address of' operator to pass in the address of each variable
  //Operador de dirección &=
  swap(&a, &b);

  // check values outside the function after swap function is run
  printf("after swap: value of a: %d \n", a);
  printf("after swap: value of b: %d \n", b);

  return 0;

}