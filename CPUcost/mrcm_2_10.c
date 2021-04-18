#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

#define X	8192

int	b[20 * X];

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;
	int i;
	int a0 = a, a1 = a;

	n /= 2;
	for (i = 20 * X; (i -= X) >= 0; ) {
		b[i] = 1;
	}
	switch (argc > 3 ? atoi(argv[3]) : 0) {
		x(0);   x(1);   x(2);   x(3);   x(4);
		x(5);   x(6);   x(7);   x(8);   x(9);
		x(10);  x(11);  x(12);  x(13);  x(14);
		x(15);  x(16);  x(17);  x(18);  x(19);
	}
	do {
		asm("DUMMY1:");
		L0:	a0 += b[0 * X];
		L1:	a1 += b[1 * X];
		L2:	a0 += b[2 * X];
		L3:	a1 += b[3 * X];
		L4:	a0 += b[4 * X];
		L5:	a1 += b[5 * X];
		L6:	a0 += b[6 * X];
		L7:	a1 += b[7 * X];
		L8:	a0 += b[8 * X];
		L9:	a1 += b[9 * X];
		L10:	a0 += b[10 * X];
		L11:	a1 += b[11 * X];
		L12:	a0 += b[12 * X];
		L13:	a1 += b[13 * X];
		L14:	a0 += b[14 * X];
		L15:	a1 += b[15 * X];
		L16:	a0 += b[16 * X];
		L17:	a1 += b[17 * X];
		L18:	a0 += b[18 * X];
		L19:	a1 += b[19 * X];
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a0 + a1);
	return 0;
}
