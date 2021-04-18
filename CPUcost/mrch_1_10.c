#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

#define X	1

int	b[10 * X];

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;
	int i;

	for (i = 10 * X; (i -= X) >= 0; ) {
		b[i] = 1;
	}
	switch (argc > 3 ? atoi(argv[3]) : 0) {
		x(0);   x(1);   x(2);   x(3);   x(4);
		x(5);   x(6);   x(7);   x(8);   x(9);
	}
	do {
		asm("DUMMY1:");
		L0:	a += b[0 * X];
		L1:	a += b[1 * X];
		L2:	a += b[2 * X];
		L3:	a += b[3 * X];
		L4:	a += b[4 * X];
		L5:	a += b[5 * X];
		L6:	a += b[6 * X];
		L7:	a += b[7 * X];
		L8:	a += b[8 * X];
		L9:	a += b[9 * X];
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a);
	return 0;
}
