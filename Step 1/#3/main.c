#include <stdio.h>
#include <math.h>

int main() {
  const float PI = 3.14;
  float  D, P, S, r;

  printf("Entrez le rayon : ");
  scanf("%f", &r);
  
  D = 2 * r;
  P = D * PI;
  S = pow(r, 2) * PI;


  
  printf("Un cercle de rayon %f a pour diamètre %f, pour périmetre %f et pour surface %f.", r, D, P, S);

  return 0;
}