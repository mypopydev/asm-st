#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	unsigned int a = argc > 2 ? atoi(argv[2]) : 1;

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
		L0:	a /= 2;
		L1:	a /= 2;
		L2:	a /= 2;
		L3:	a /= 2;
		L4:	a /= 2;
		L5:	a /= 2;
		L6:	a /= 2;
		L7:	a /= 2;
		L8:	a /= 2;
		L9:	a /= 2;
		L10:	a /= 2;
		L11:	a /= 2;
		L12:	a /= 2;
		L13:	a /= 2;
		L14:	a /= 2;
		L15:	a /= 2;
		L16:	a /= 2;
		L17:	a /= 2;
		L18:	a /= 2;
		L19:	a /= 2;
		L20:	a /= 2;
		L21:	a /= 2;
		L22:	a /= 2;
		L23:	a /= 2;
		L24:	a /= 2;
		L25:	a /= 2;
		L26:	a /= 2;
		L27:	a /= 2;
		L28:	a /= 2;
		L29:	a /= 2;
		L30:	a /= 2;
		L31:	a /= 2;
		L32:	a /= 2;
		L33:	a /= 2;
		L34:	a /= 2;
		L35:	a /= 2;
		L36:	a /= 2;
		L37:	a /= 2;
		L38:	a /= 2;
		L39:	a /= 2;
		L40:	a /= 2;
		L41:	a /= 2;
		L42:	a /= 2;
		L43:	a /= 2;
		L44:	a /= 2;
		L45:	a /= 2;
		L46:	a /= 2;
		L47:	a /= 2;
		L48:	a /= 2;
		L49:	a /= 2;
		L50:	a /= 2;
		L51:	a /= 2;
		L52:	a /= 2;
		L53:	a /= 2;
		L54:	a /= 2;
		L55:	a /= 2;
		L56:	a /= 2;
		L57:	a /= 2;
		L58:	a /= 2;
		L59:	a /= 2;
		L60:	a /= 2;
		L61:	a /= 2;
		L62:	a /= 2;
		L63:	a /= 2;
		L64:	a /= 2;
		L65:	a /= 2;
		L66:	a /= 2;
		L67:	a /= 2;
		L68:	a /= 2;
		L69:	a /= 2;
		L70:	a /= 2;
		L71:	a /= 2;
		L72:	a /= 2;
		L73:	a /= 2;
		L74:	a /= 2;
		L75:	a /= 2;
		L76:	a /= 2;
		L77:	a /= 2;
		L78:	a /= 2;
		L79:	a /= 2;
		L80:	a /= 2;
		L81:	a /= 2;
		L82:	a /= 2;
		L83:	a /= 2;
		L84:	a /= 2;
		L85:	a /= 2;
		L86:	a /= 2;
		L87:	a /= 2;
		L88:	a /= 2;
		L89:	a /= 2;
		L90:	a /= 2;
		L91:	a /= 2;
		L92:	a /= 2;
		L93:	a /= 2;
		L94:	a /= 2;
		L95:	a /= 2;
		L96:	a /= 2;
		L97:	a /= 2;
		L98:	a /= 2;
		L99:	a /= 2;
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a);
	return 0;
}
