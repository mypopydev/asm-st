#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;
	int a0 = a, a1 = a;

	n /= 2;
	switch (argc > 3 ? atoi(argv[3]) : 0) {
		x(0);   x(1);   x(2);   x(3);   x(4);
		x(5);   x(6);   x(7);   x(8);   x(9);
		x(10);  x(11);  x(12);  x(13);  x(14);
		x(15);  x(16);  x(17);  x(18);  x(19);
	}
	do {
		asm("DUMMY1:");
		L0:	a0 += 3;
		L1:	a1 += 3;
		L2:	a0 += 3;
		L3:	a1 += 3;
		L4:	a0 += 3;
		L5:	a1 += 3;
		L6:	a0 += 3;
		L7:	a1 += 3;
		L8:	a0 += 3;
		L9:	a1 += 3;
		L10:	a0 += 3;
		L11:	a1 += 3;
		L12:	a0 += 3;
		L13:	a1 += 3;
		L14:	a0 += 3;
		L15:	a1 += 3;
		L16:	a0 += 3;
		L17:	a1 += 3;
		L18:	a0 += 3;
		L19:	a1 += 3;
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a0 + a1);
	return 0;
}
