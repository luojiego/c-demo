#include <stdio.h>

int main() {
	int x = 3; 
	float f = 3.2;
	double d = 34.1808329832;
	printf("x = %d\n", x);
	printf("f = %f\n", f);
	printf("d = %lf\n", d);
	printf("x == (int)(double)x -> %d\n", x == (int)(double)x);
	printf("x == (int)(float)x -> %d\n", x == (int)(float)x);
	printf("d == (double)(float)d -> %d\n", d == (double)(float)d);
	printf("f == (float)(double)f -> %d\n", f == (float)(double)f);
	printf("f == -(-f) -> %d\n", f == -(-f));
	printf("1.0/2 == 1/2.0 -> %d\n", 1.0/2 == 1/2.0);
	printf("d*d >= 0.0 -> %d\n", d*d >= 0.0);
	printf("(f+d)-f == d -> %d\n", (f+d)-f == d);
}
