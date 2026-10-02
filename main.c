#include <stdio.h>

int x[3] = {1,2,3};
double w[3] = {0.5,0.25,0.1};

double result = 0.0;

int main(void) {

  for (int i = 0; i < 3; i++)
    {
	  result +=  w[i] * x[i];

    }

  printf("%f\n", result);

return 0;

}
