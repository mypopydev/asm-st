#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;

	switch (argc > 3 ? atoi(argv[3]) : 0) {
		x(0);   x(1);   x(2);   x(3);   x(4);
		x(5);   x(6);   x(7);   x(8);   x(9);
	}
	do {
		asm("DUMMY1:");
		L0:	func(a, a, a, a, a);
		L1:	func(a, a, a, a, a);
		L2:	func(a, a, a, a, a);
		L3:	func(a, a, a, a, a);
		L4:	func(a, a, a, a, a);
		L5:	func(a, a, a, a, a);
		L6:	func(a, a, a, a, a);
		L7:	func(a, a, a, a, a);
		L8:	func(a, a, a, a, a);
		L9:	func(a, a, a, a, a);
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a);
	return 0;
}
