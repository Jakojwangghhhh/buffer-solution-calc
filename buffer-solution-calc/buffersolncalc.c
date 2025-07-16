#include <stdio.h>
#include <math.h> // for math functions like log10()

int main(void)
{
  double pKa, concentration_acid, concentration_base;
  
  printf("Enter pKa of the acid: ");
  scanf("%lf", &pKa); // reads the double and & stores the variable

  printf("Enter concentration of the acid: ");
  scanf("%lf", &concentration_acid);

  printf("Enter concentration of the base: ");
  scanf("%lf", &concentration_base);

  if (concentration_acid <= 0 || concentration_base <= 0)
  {
    printf("Error! Concentrations must be greater than 0.\n");
    return 1;
  }

  double ratio = concentration_base / concentration_acid;
  double pH = (pKa + log10(ratio));

  printf("The pH of the buffer solution is %.2f\n", pH);

  return 0;
}


