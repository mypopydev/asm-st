#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;
	int a0 = a, a1 = a, a2 = a;

	n /= 3;
	switch (argc > 3 ? atoi(argv[3]) : 0) {
		x(0);   x(1);   x(2);   x(3);   x(4);
		x(5);   x(6);   x(7);   x(8);   x(9);
		x(10);  x(11);  x(12);  x(13);  x(14);
		x(15);  x(16);  x(17);  x(18);  x(19);
		x(20);  x(21);  x(22);  x(23);  x(24);
		x(25);  x(26);  x(27);  x(28);  x(29);
	}
	do {
		asm("DUMMY1:");
		L0:	a0 *= 4;
		L1:	a1 *= 4;
		L2:	a2 *= 4;
		L3:	a0 *= 4;
		L4:	a1 *= 4;
		L5:	a2 *= 4;
		L6:	a0 *= 4;
		L7:	a1 *= 4;
		L8:	a2 *= 4;
		L9:	a0 *= 4;
		L10:	a1 *= 4;
		L11:	a2 *= 4;
		L12:	a0 *= 4;
		L13:	a1 *= 4;
		L14:	a2 *= 4;
		L15:	a0 *= 4;
		L16:	a1 *= 4;
		L17:	a2 *= 4;
		L18:	a0 *= 4;
		L19:	a1 *= 4;
		L20:	a2 *= 4;
		L21:	a0 *= 4;
		L22:	a1 *= 4;
		L23:	a2 *= 4;
		L24:	a0 *= 4;
		L25:	a1 *= 4;
		L26:	a2 *= 4;
		L27:	a0 *= 4;
		L28:	a1 *= 4;
		L29:	a2 *= 4;
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a0 + a1 + a2);
	return 0;
}
