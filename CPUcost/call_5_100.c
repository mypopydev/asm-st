#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;

	n /= 10;
	switch (argc > 3 ? atoi(argv[3]) : 0) {
		x(0);   x(1);   x(2);   x(3);   x(4);
		x(5);   x(6);   x(7);   x(8);   x(9);
		x(10);  x(11);  x(12);  x(13);  x(14);
		x(15);  x(16);  x(17);  x(18);  x(19);
		x(20);  x(21);  x(22);  x(23);  x(24);
		x(25);  x(26);  x(27);  x(28);  x(29);
		x(30);  x(31);  x(32);  x(33);  x(34);
		x(35);  x(36);  x(37);  x(38);  x(39);
		x(40);  x(41);  x(42);  x(43);  x(44);
		x(45);  x(46);  x(47);  x(48);  x(49);
		x(50);  x(51);  x(52);  x(53);  x(54);
		x(55);  x(56);  x(57);  x(58);  x(59);
		x(60);  x(61);  x(62);  x(63);  x(64);
		x(65);  x(66);  x(67);  x(68);  x(69);
		x(70);  x(71);  x(72);  x(73);  x(74);
		x(75);  x(76);  x(77);  x(78);  x(79);
		x(80);  x(81);  x(82);  x(83);  x(84);
		x(85);  x(86);  x(87);  x(88);  x(89);
		x(90);  x(91);  x(92);  x(93);  x(94);
		x(95);  x(96);  x(97);  x(98);  x(99);
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
		L10:	func(a, a, a, a, a);
		L11:	func(a, a, a, a, a);
		L12:	func(a, a, a, a, a);
		L13:	func(a, a, a, a, a);
		L14:	func(a, a, a, a, a);
		L15:	func(a, a, a, a, a);
		L16:	func(a, a, a, a, a);
		L17:	func(a, a, a, a, a);
		L18:	func(a, a, a, a, a);
		L19:	func(a, a, a, a, a);
		L20:	func(a, a, a, a, a);
		L21:	func(a, a, a, a, a);
		L22:	func(a, a, a, a, a);
		L23:	func(a, a, a, a, a);
		L24:	func(a, a, a, a, a);
		L25:	func(a, a, a, a, a);
		L26:	func(a, a, a, a, a);
		L27:	func(a, a, a, a, a);
		L28:	func(a, a, a, a, a);
		L29:	func(a, a, a, a, a);
		L30:	func(a, a, a, a, a);
		L31:	func(a, a, a, a, a);
		L32:	func(a, a, a, a, a);
		L33:	func(a, a, a, a, a);
		L34:	func(a, a, a, a, a);
		L35:	func(a, a, a, a, a);
		L36:	func(a, a, a, a, a);
		L37:	func(a, a, a, a, a);
		L38:	func(a, a, a, a, a);
		L39:	func(a, a, a, a, a);
		L40:	func(a, a, a, a, a);
		L41:	func(a, a, a, a, a);
		L42:	func(a, a, a, a, a);
		L43:	func(a, a, a, a, a);
		L44:	func(a, a, a, a, a);
		L45:	func(a, a, a, a, a);
		L46:	func(a, a, a, a, a);
		L47:	func(a, a, a, a, a);
		L48:	func(a, a, a, a, a);
		L49:	func(a, a, a, a, a);
		L50:	func(a, a, a, a, a);
		L51:	func(a, a, a, a, a);
		L52:	func(a, a, a, a, a);
		L53:	func(a, a, a, a, a);
		L54:	func(a, a, a, a, a);
		L55:	func(a, a, a, a, a);
		L56:	func(a, a, a, a, a);
		L57:	func(a, a, a, a, a);
		L58:	func(a, a, a, a, a);
		L59:	func(a, a, a, a, a);
		L60:	func(a, a, a, a, a);
		L61:	func(a, a, a, a, a);
		L62:	func(a, a, a, a, a);
		L63:	func(a, a, a, a, a);
		L64:	func(a, a, a, a, a);
		L65:	func(a, a, a, a, a);
		L66:	func(a, a, a, a, a);
		L67:	func(a, a, a, a, a);
		L68:	func(a, a, a, a, a);
		L69:	func(a, a, a, a, a);
		L70:	func(a, a, a, a, a);
		L71:	func(a, a, a, a, a);
		L72:	func(a, a, a, a, a);
		L73:	func(a, a, a, a, a);
		L74:	func(a, a, a, a, a);
		L75:	func(a, a, a, a, a);
		L76:	func(a, a, a, a, a);
		L77:	func(a, a, a, a, a);
		L78:	func(a, a, a, a, a);
		L79:	func(a, a, a, a, a);
		L80:	func(a, a, a, a, a);
		L81:	func(a, a, a, a, a);
		L82:	func(a, a, a, a, a);
		L83:	func(a, a, a, a, a);
		L84:	func(a, a, a, a, a);
		L85:	func(a, a, a, a, a);
		L86:	func(a, a, a, a, a);
		L87:	func(a, a, a, a, a);
		L88:	func(a, a, a, a, a);
		L89:	func(a, a, a, a, a);
		L90:	func(a, a, a, a, a);
		L91:	func(a, a, a, a, a);
		L92:	func(a, a, a, a, a);
		L93:	func(a, a, a, a, a);
		L94:	func(a, a, a, a, a);
		L95:	func(a, a, a, a, a);
		L96:	func(a, a, a, a, a);
		L97:	func(a, a, a, a, a);
		L98:	func(a, a, a, a, a);
		L99:	func(a, a, a, a, a);
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a);
	return 0;
}
