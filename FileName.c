
#include <stdio.h>
#include <math.h>  

int main()
{
   
    float a = 2.61, b = 3.43, x = 5.54;

    double y = pow(2 - x, 1.0 / 4); 
    double z = b * log(2 * x); 
    double r = pow(a, y) + exp (z) + cos(a * x);

    
    printf("Result: %.5f\n", r);
  
    return 0;
}