#include <stdio.h>

double x[3] = {1,2,3};
double w[3] = {0.5,0.25,0.1};


double dot_product(double w[], double x[], int size) {
double result = 0.0;

  for (int i = 0; i < size; i++)
    {
	  result +=  w[i] * x[i];

    }

  return result;

}

int main(void) {

double total = dot_product(w, x, 3);	

printf("%f\n", total);

return 0;

}

