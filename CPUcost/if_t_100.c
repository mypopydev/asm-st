#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	 register int a asm("ebx") = argc > 2 ? atoi(argv[2]) : 0;
	 register int b asm("ecx") = argc > 3 ? atoi(argv[3]) : -1;

	n /= 10;
	switch (argc > 4 ? atoi(argv[4]) : 0) {
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
		L10:	if (b < 0) a++;
		L11:	if (b < 0) a++;
		L12:	if (b < 0) a++;
		L13:	if (b < 0) a++;
		L14:	if (b < 0) a++;
		L15:	if (b < 0) a++;
		L16:	if (b < 0) a++;
		L17:	if (b < 0) a++;
		L18:	if (b < 0) a++;
		L19:	if (b < 0) a++;
		L20:	if (b < 0) a++;
		L21:	if (b < 0) a++;
		L22:	if (b < 0) a++;
		L23:	if (b < 0) a++;
		L24:	if (b < 0) a++;
		L25:	if (b < 0) a++;
		L26:	if (b < 0) a++;
		L27:	if (b < 0) a++;
		L28:	if (b < 0) a++;
		L29:	if (b < 0) a++;
		L30:	if (b < 0) a++;
		L31:	if (b < 0) a++;
		L32:	if (b < 0) a++;
		L33:	if (b < 0) a++;
		L34:	if (b < 0) a++;
		L35:	if (b < 0) a++;
		L36:	if (b < 0) a++;
		L37:	if (b < 0) a++;
		L38:	if (b < 0) a++;
		L39:	if (b < 0) a++;
		L40:	if (b < 0) a++;
		L41:	if (b < 0) a++;
		L42:	if (b < 0) a++;
		L43:	if (b < 0) a++;
		L44:	if (b < 0) a++;
		L45:	if (b < 0) a++;
		L46:	if (b < 0) a++;
		L47:	if (b < 0) a++;
		L48:	if (b < 0) a++;
		L49:	if (b < 0) a++;
		L50:	if (b < 0) a++;
		L51:	if (b < 0) a++;
		L52:	if (b < 0) a++;
		L53:	if (b < 0) a++;
		L54:	if (b < 0) a++;
		L55:	if (b < 0) a++;
		L56:	if (b < 0) a++;
		L57:	if (b < 0) a++;
		L58:	if (b < 0) a++;
		L59:	if (b < 0) a++;
		L60:	if (b < 0) a++;
		L61:	if (b < 0) a++;
		L62:	if (b < 0) a++;
		L63:	if (b < 0) a++;
		L64:	if (b < 0) a++;
		L65:	if (b < 0) a++;
		L66:	if (b < 0) a++;
		L67:	if (b < 0) a++;
		L68:	if (b < 0) a++;
		L69:	if (b < 0) a++;
		L70:	if (b < 0) a++;
		L71:	if (b < 0) a++;
		L72:	if (b < 0) a++;
		L73:	if (b < 0) a++;
		L74:	if (b < 0) a++;
		L75:	if (b < 0) a++;
		L76:	if (b < 0) a++;
		L77:	if (b < 0) a++;
		L78:	if (b < 0) a++;
		L79:	if (b < 0) a++;
		L80:	if (b < 0) a++;
		L81:	if (b < 0) a++;
		L82:	if (b < 0) a++;
		L83:	if (b < 0) a++;
		L84:	if (b < 0) a++;
		L85:	if (b < 0) a++;
		L86:	if (b < 0) a++;
		L87:	if (b < 0) a++;
		L88:	if (b < 0) a++;
		L89:	if (b < 0) a++;
		L90:	if (b < 0) a++;
		L91:	if (b < 0) a++;
		L92:	if (b < 0) a++;
		L93:	if (b < 0) a++;
		L94:	if (b < 0) a++;
		L95:	if (b < 0) a++;
		L96:	if (b < 0) a++;
		L97:	if (b < 0) a++;
		L98:	if (b < 0) a++;
		L99:	if (b < 0) a++;
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a);
	return 0;
}
