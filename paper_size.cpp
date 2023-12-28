#include<iostream>
using namespace std;
int main()
{
	int A0_a,A0_b,A1_b,A1_a,A2_a,A2_b,A3_a,A3_b,A4_a,A4_b,A5_a,A5_b,A6_a,A6_b,A7_a,A7_b,A8_a,A8_b,dimensions;
	A0_a = 1189;
	A0_b = 841;
	printf("\nA0 : %dmm x %dmm ", A0_a, A0_b);
	
	A1_a = A0_b;
	A1_b = A0_a/2;
	printf("\nA1 : %dmm x %dmm ", A1_a, A1_b);
	
	A2_a = A1_b;
	A2_b = A1_a/2;
	printf("\nA2 : %dmm x %dmm", A2_a, A2_b);
	
	A3_a = A2_b;
	A3_b = A2_a/2;
	printf("\nA3 : %dmm x %dmm", A3_a, A3_b);
	
	A4_a = A3_b;
	A4_b = A3_a/2;
	printf("\nA4 : %dmm x %dmm", A4_a, A4_b);
	
	A5_a = A4_b;
	A5_b = A4_a/2;
	printf("\nA5 : %dmm x %dmm", A5_a, A5_b);
	
	A6_a = A5_b;
	A6_b = A5_a/2;
	printf("\nA6 : %dmm x %dmm", A6_a, A6_b);
	
	A7_a = A6_b;
	A7_b = A6_a/2;
	printf("\nA7 : %dmm x %dmm", A7_a, A7_b);
	
	A8_a = A7_b;
	A8_b = A7_a/2;
	printf("\nA8 : %dmm x %dmm", A8_a, A8_b);
	
	getch();
    return 0;
}

	
	
}
