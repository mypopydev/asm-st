#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	 register int a asm("ebx") = argc > 2 ? atoi(argv[2]) : 0;
	 register int b asm("ecx") = argc > 3 ? atoi(argv[3]) : -1;

	switch (argc > 4 ? atoi(argv[4]) : 0) {
		x(0);   x(1);   x(2);   x(3);   x(4);
		x(5);   x(6);   x(7);   x(8);   x(9);
	}
	do {
		asm("DUMMY1:");
		L0:	if (b < 0) a++;
		L1:	if (b < 0) a++;
		L2:	if (b < 0) a++;
		L3:	if (b < 0) a++;
		L4:	if (b < 0) a++;
		L5:	if (b < 0) a++;
		L6:	if (b < 0) a++;
		L7:	if (b < 0) a++;
		L8:	if (b < 0) a++;
		L9:	if (b < 0) a++;
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a);
	return 0;
}
