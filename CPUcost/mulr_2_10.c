#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;
	int b = argc > 3 ? atoi(argv[3]) : 0;
	int a0 = a, a1 = a;

	n /= 2;
	switch (argc > 4 ? atoi(argv[4]) : 0) {
		x(0);   x(1);   x(2);   x(3);   x(4);
		x(5);   x(6);   x(7);   x(8);   x(9);
		x(10);  x(11);  x(12);  x(13);  x(14);
		x(15);  x(16);  x(17);  x(18);  x(19);
	}
	do {
		asm("DUMMY1:");
		L0:	a0 *= b;
		L1:	a1 *= b;
		L2:	a0 *= b;
		L3:	a1 *= b;
		L4:	a0 *= b;
		L5:	a1 *= b;
		L6:	a0 *= b;
		L7:	a1 *= b;
		L8:	a0 *= b;
		L9:	a1 *= b;
		L10:	a0 *= b;
		L11:	a1 *= b;
		L12:	a0 *= b;
		L13:	a1 *= b;
		L14:	a0 *= b;
		L15:	a1 *= b;
		L16:	a0 *= b;
		L17:	a1 *= b;
		L18:	a0 *= b;
		L19:	a1 *= b;
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a0 + a1);
	return 0;
}
