#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 1;

	switch (argc > 3 ? atoi(argv[3]) : 0) {
		x(0);   x(1);   x(2);   x(3);   x(4);
		x(5);   x(6);   x(7);   x(8);   x(9);
	}
	do {
		asm("DUMMY1:");
		L0:	a /= 4;
		L1:	a /= 4;
		L2:	a /= 4;
		L3:	a /= 4;
		L4:	a /= 4;
		L5:	a /= 4;
		L6:	a /= 4;
		L7:	a /= 4;
		L8:	a /= 4;
		L9:	a /= 4;
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a);
	return 0;
}
