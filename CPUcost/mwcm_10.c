#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

#define X	8192

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
		L0:	b[0 * X] = a;
		L1:	b[1 * X] = a;
		L2:	b[2 * X] = a;
		L3:	b[3 * X] = a;
		L4:	b[4 * X] = a;
		L5:	b[5 * X] = a;
		L6:	b[6 * X] = a;
		L7:	b[7 * X] = a;
		L8:	b[8 * X] = a;
		L9:	b[9 * X] = a;
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a);
	return 0;
}
