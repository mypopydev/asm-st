#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 1;

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
		L0:	a /= 5;
		L1:	a /= 5;
		L2:	a /= 5;
		L3:	a /= 5;
		L4:	a /= 5;
		L5:	a /= 5;
		L6:	a /= 5;
		L7:	a /= 5;
		L8:	a /= 5;
		L9:	a /= 5;
		L10:	a /= 5;
		L11:	a /= 5;
		L12:	a /= 5;
		L13:	a /= 5;
		L14:	a /= 5;
		L15:	a /= 5;
		L16:	a /= 5;
		L17:	a /= 5;
		L18:	a /= 5;
		L19:	a /= 5;
		L20:	a /= 5;
		L21:	a /= 5;
		L22:	a /= 5;
		L23:	a /= 5;
		L24:	a /= 5;
		L25:	a /= 5;
		L26:	a /= 5;
		L27:	a /= 5;
		L28:	a /= 5;
		L29:	a /= 5;
		L30:	a /= 5;
		L31:	a /= 5;
		L32:	a /= 5;
		L33:	a /= 5;
		L34:	a /= 5;
		L35:	a /= 5;
		L36:	a /= 5;
		L37:	a /= 5;
		L38:	a /= 5;
		L39:	a /= 5;
		L40:	a /= 5;
		L41:	a /= 5;
		L42:	a /= 5;
		L43:	a /= 5;
		L44:	a /= 5;
		L45:	a /= 5;
		L46:	a /= 5;
		L47:	a /= 5;
		L48:	a /= 5;
		L49:	a /= 5;
		L50:	a /= 5;
		L51:	a /= 5;
		L52:	a /= 5;
		L53:	a /= 5;
		L54:	a /= 5;
		L55:	a /= 5;
		L56:	a /= 5;
		L57:	a /= 5;
		L58:	a /= 5;
		L59:	a /= 5;
		L60:	a /= 5;
		L61:	a /= 5;
		L62:	a /= 5;
		L63:	a /= 5;
		L64:	a /= 5;
		L65:	a /= 5;
		L66:	a /= 5;
		L67:	a /= 5;
		L68:	a /= 5;
		L69:	a /= 5;
		L70:	a /= 5;
		L71:	a /= 5;
		L72:	a /= 5;
		L73:	a /= 5;
		L74:	a /= 5;
		L75:	a /= 5;
		L76:	a /= 5;
		L77:	a /= 5;
		L78:	a /= 5;
		L79:	a /= 5;
		L80:	a /= 5;
		L81:	a /= 5;
		L82:	a /= 5;
		L83:	a /= 5;
		L84:	a /= 5;
		L85:	a /= 5;
		L86:	a /= 5;
		L87:	a /= 5;
		L88:	a /= 5;
		L89:	a /= 5;
		L90:	a /= 5;
		L91:	a /= 5;
		L92:	a /= 5;
		L93:	a /= 5;
		L94:	a /= 5;
		L95:	a /= 5;
		L96:	a /= 5;
		L97:	a /= 5;
		L98:	a /= 5;
		L99:	a /= 5;
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a);
	return 0;
}
