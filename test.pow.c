#include <stdio.h>
#include <math.h>


int main()
{
	int a = 5;
	int b = 7;

	double result = pow(a, b);

	printf("%d the answer is %d\n", a, b, (int) result);
	
	return(0);

}

/*#include <stdio.h>
#include <math.h>

int main() {
    int base = 5;
    int exponent = 7;

    double result = pow(base, exponent);

    printf("%d raised to the power of %d is %d\n", base, exponent, (int)result);

    return 0;
}*/

