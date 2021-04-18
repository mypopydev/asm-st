#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	unsigned int a = argc > 2 ? atoi(argv[2]) : 1;
	unsigned int a0 = a, a1 = a, a2 = a, a3 = a;

	n /= 4;
	switch (argc > 3 ? atoi(argv[3]) : 0) {
		x(0);   x(1);   x(2);   x(3);   x(4);
		x(5);   x(6);   x(7);   x(8);   x(9);
		x(10);  x(11);  x(12);  x(13);  x(14);
		x(15);  x(16);  x(17);  x(18);  x(19);
		x(20);  x(21);  x(22);  x(23);  x(24);
		x(25);  x(26);  x(27);  x(28);  x(29);
		x(30);  x(31);  x(32);  x(33);  x(34);
		x(35);  x(36);  x(37);  x(38);  x(39);
	}
	do {
		asm("DUMMY1:");
		L0:	a0 /= 4;
		L1:	a1 /= 4;
		L2:	a2 /= 4;
		L3:	a3 /= 4;
		L4:	a0 /= 4;
		L5:	a1 /= 4;
		L6:	a2 /= 4;
		L7:	a3 /= 4;
		L8:	a0 /= 4;
		L9:	a1 /= 4;
		L10:	a2 /= 4;
		L11:	a3 /= 4;
		L12:	a0 /= 4;
		L13:	a1 /= 4;
		L14:	a2 /= 4;
		L15:	a3 /= 4;
		L16:	a0 /= 4;
		L17:	a1 /= 4;
		L18:	a2 /= 4;
		L19:	a3 /= 4;
		L20:	a0 /= 4;
		L21:	a1 /= 4;
		L22:	a2 /= 4;
		L23:	a3 /= 4;
		L24:	a0 /= 4;
		L25:	a1 /= 4;
		L26:	a2 /= 4;
		L27:	a3 /= 4;
		L28:	a0 /= 4;
		L29:	a1 /= 4;
		L30:	a2 /= 4;
		L31:	a3 /= 4;
		L32:	a0 /= 4;
		L33:	a1 /= 4;
		L34:	a2 /= 4;
		L35:	a3 /= 4;
		L36:	a0 /= 4;
		L37:	a1 /= 4;
		L38:	a2 /= 4;
		L39:	a3 /= 4;
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a0 + a1 + a2 + a3);
	return 0;
}
