#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

#define X	8192

int	b[40 * X];

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;
	int i;
	int a0 = a, a1 = a, a2 = a, a3 = a;

	n /= 4;
	for (i = 40 * X; (i -= X) >= 0; ) {
		b[i] = 1;
	}
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
		L0:	a0 += b[0 * X];
		L1:	a1 += b[1 * X];
		L2:	a2 += b[2 * X];
		L3:	a3 += b[3 * X];
		L4:	a0 += b[4 * X];
		L5:	a1 += b[5 * X];
		L6:	a2 += b[6 * X];
		L7:	a3 += b[7 * X];
		L8:	a0 += b[8 * X];
		L9:	a1 += b[9 * X];
		L10:	a2 += b[10 * X];
		L11:	a3 += b[11 * X];
		L12:	a0 += b[12 * X];
		L13:	a1 += b[13 * X];
		L14:	a2 += b[14 * X];
		L15:	a3 += b[15 * X];
		L16:	a0 += b[16 * X];
		L17:	a1 += b[17 * X];
		L18:	a2 += b[18 * X];
		L19:	a3 += b[19 * X];
		L20:	a0 += b[20 * X];
		L21:	a1 += b[21 * X];
		L22:	a2 += b[22 * X];
		L23:	a3 += b[23 * X];
		L24:	a0 += b[24 * X];
		L25:	a1 += b[25 * X];
		L26:	a2 += b[26 * X];
		L27:	a3 += b[27 * X];
		L28:	a0 += b[28 * X];
		L29:	a1 += b[29 * X];
		L30:	a2 += b[30 * X];
		L31:	a3 += b[31 * X];
		L32:	a0 += b[32 * X];
		L33:	a1 += b[33 * X];
		L34:	a2 += b[34 * X];
		L35:	a3 += b[35 * X];
		L36:	a0 += b[36 * X];
		L37:	a1 += b[37 * X];
		L38:	a2 += b[38 * X];
		L39:	a3 += b[39 * X];
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a0 + a1 + a2 + a3);
	return 0;
}
