#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	unsigned int a = argc > 2 ? atoi(argv[2]) : 1;
	unsigned int a0 = a, a1 = a, a2 = a, a3 = a;

	n /= 40;
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
		x(100); x(101); x(102); x(103); x(104);
		x(105); x(106); x(107); x(108); x(109);
		x(110); x(111); x(112); x(113); x(114);
		x(115); x(116); x(117); x(118); x(119);
		x(120); x(121); x(122); x(123); x(124);
		x(125); x(126); x(127); x(128); x(129);
		x(130); x(131); x(132); x(133); x(134);
		x(135); x(136); x(137); x(138); x(139);
		x(140); x(141); x(142); x(143); x(144);
		x(145); x(146); x(147); x(148); x(149);
		x(150); x(151); x(152); x(153); x(154);
		x(155); x(156); x(157); x(158); x(159);
		x(160); x(161); x(162); x(163); x(164);
		x(165); x(166); x(167); x(168); x(169);
		x(170); x(171); x(172); x(173); x(174);
		x(175); x(176); x(177); x(178); x(179);
		x(180); x(181); x(182); x(183); x(184);
		x(185); x(186); x(187); x(188); x(189);
		x(190); x(191); x(192); x(193); x(194);
		x(195); x(196); x(197); x(198); x(199);
		x(200); x(201); x(202); x(203); x(204);
		x(205); x(206); x(207); x(208); x(209);
		x(210); x(211); x(212); x(213); x(214);
		x(215); x(216); x(217); x(218); x(219);
		x(220); x(221); x(222); x(223); x(224);
		x(225); x(226); x(227); x(228); x(229);
		x(230); x(231); x(232); x(233); x(234);
		x(235); x(236); x(237); x(238); x(239);
		x(240); x(241); x(242); x(243); x(244);
		x(245); x(246); x(247); x(248); x(249);
		x(250); x(251); x(252); x(253); x(254);
		x(255); x(256); x(257); x(258); x(259);
		x(260); x(261); x(262); x(263); x(264);
		x(265); x(266); x(267); x(268); x(269);
		x(270); x(271); x(272); x(273); x(274);
		x(275); x(276); x(277); x(278); x(279);
		x(280); x(281); x(282); x(283); x(284);
		x(285); x(286); x(287); x(288); x(289);
		x(290); x(291); x(292); x(293); x(294);
		x(295); x(296); x(297); x(298); x(299);
		x(300); x(301); x(302); x(303); x(304);
		x(305); x(306); x(307); x(308); x(309);
		x(310); x(311); x(312); x(313); x(314);
		x(315); x(316); x(317); x(318); x(319);
		x(320); x(321); x(322); x(323); x(324);
		x(325); x(326); x(327); x(328); x(329);
		x(330); x(331); x(332); x(333); x(334);
		x(335); x(336); x(337); x(338); x(339);
		x(340); x(341); x(342); x(343); x(344);
		x(345); x(346); x(347); x(348); x(349);
		x(350); x(351); x(352); x(353); x(354);
		x(355); x(356); x(357); x(358); x(359);
		x(360); x(361); x(362); x(363); x(364);
		x(365); x(366); x(367); x(368); x(369);
		x(370); x(371); x(372); x(373); x(374);
		x(375); x(376); x(377); x(378); x(379);
		x(380); x(381); x(382); x(383); x(384);
		x(385); x(386); x(387); x(388); x(389);
		x(390); x(391); x(392); x(393); x(394);
		x(395); x(396); x(397); x(398); x(399);
	}
	do {
		asm("DUMMY1:");
		L0:	a0 /= 2;
		L1:	a1 /= 2;
		L2:	a2 /= 2;
		L3:	a3 /= 2;
		L4:	a0 /= 2;
		L5:	a1 /= 2;
		L6:	a2 /= 2;
		L7:	a3 /= 2;
		L8:	a0 /= 2;
		L9:	a1 /= 2;
		L10:	a2 /= 2;
		L11:	a3 /= 2;
		L12:	a0 /= 2;
		L13:	a1 /= 2;
		L14:	a2 /= 2;
		L15:	a3 /= 2;
		L16:	a0 /= 2;
		L17:	a1 /= 2;
		L18:	a2 /= 2;
		L19:	a3 /= 2;
		L20:	a0 /= 2;
		L21:	a1 /= 2;
		L22:	a2 /= 2;
		L23:	a3 /= 2;
		L24:	a0 /= 2;
		L25:	a1 /= 2;
		L26:	a2 /= 2;
		L27:	a3 /= 2;
		L28:	a0 /= 2;
		L29:	a1 /= 2;
		L30:	a2 /= 2;
		L31:	a3 /= 2;
		L32:	a0 /= 2;
		L33:	a1 /= 2;
		L34:	a2 /= 2;
		L35:	a3 /= 2;
		L36:	a0 /= 2;
		L37:	a1 /= 2;
		L38:	a2 /= 2;
		L39:	a3 /= 2;
		L40:	a0 /= 2;
		L41:	a1 /= 2;
		L42:	a2 /= 2;
		L43:	a3 /= 2;
		L44:	a0 /= 2;
		L45:	a1 /= 2;
		L46:	a2 /= 2;
		L47:	a3 /= 2;
		L48:	a0 /= 2;
		L49:	a1 /= 2;
		L50:	a2 /= 2;
		L51:	a3 /= 2;
		L52:	a0 /= 2;
		L53:	a1 /= 2;
		L54:	a2 /= 2;
		L55:	a3 /= 2;
		L56:	a0 /= 2;
		L57:	a1 /= 2;
		L58:	a2 /= 2;
		L59:	a3 /= 2;
		L60:	a0 /= 2;
		L61:	a1 /= 2;
		L62:	a2 /= 2;
		L63:	a3 /= 2;
		L64:	a0 /= 2;
		L65:	a1 /= 2;
		L66:	a2 /= 2;
		L67:	a3 /= 2;
		L68:	a0 /= 2;
		L69:	a1 /= 2;
		L70:	a2 /= 2;
		L71:	a3 /= 2;
		L72:	a0 /= 2;
		L73:	a1 /= 2;
		L74:	a2 /= 2;
		L75:	a3 /= 2;
		L76:	a0 /= 2;
		L77:	a1 /= 2;
		L78:	a2 /= 2;
		L79:	a3 /= 2;
		L80:	a0 /= 2;
		L81:	a1 /= 2;
		L82:	a2 /= 2;
		L83:	a3 /= 2;
		L84:	a0 /= 2;
		L85:	a1 /= 2;
		L86:	a2 /= 2;
		L87:	a3 /= 2;
		L88:	a0 /= 2;
		L89:	a1 /= 2;
		L90:	a2 /= 2;
		L91:	a3 /= 2;
		L92:	a0 /= 2;
		L93:	a1 /= 2;
		L94:	a2 /= 2;
		L95:	a3 /= 2;
		L96:	a0 /= 2;
		L97:	a1 /= 2;
		L98:	a2 /= 2;
		L99:	a3 /= 2;
		L100:	a0 /= 2;
		L101:	a1 /= 2;
		L102:	a2 /= 2;
		L103:	a3 /= 2;
		L104:	a0 /= 2;
		L105:	a1 /= 2;
		L106:	a2 /= 2;
		L107:	a3 /= 2;
		L108:	a0 /= 2;
		L109:	a1 /= 2;
		L110:	a2 /= 2;
		L111:	a3 /= 2;
		L112:	a0 /= 2;
		L113:	a1 /= 2;
		L114:	a2 /= 2;
		L115:	a3 /= 2;
		L116:	a0 /= 2;
		L117:	a1 /= 2;
		L118:	a2 /= 2;
		L119:	a3 /= 2;
		L120:	a0 /= 2;
		L121:	a1 /= 2;
		L122:	a2 /= 2;
		L123:	a3 /= 2;
		L124:	a0 /= 2;
		L125:	a1 /= 2;
		L126:	a2 /= 2;
		L127:	a3 /= 2;
		L128:	a0 /= 2;
		L129:	a1 /= 2;
		L130:	a2 /= 2;
		L131:	a3 /= 2;
		L132:	a0 /= 2;
		L133:	a1 /= 2;
		L134:	a2 /= 2;
		L135:	a3 /= 2;
		L136:	a0 /= 2;
		L137:	a1 /= 2;
		L138:	a2 /= 2;
		L139:	a3 /= 2;
		L140:	a0 /= 2;
		L141:	a1 /= 2;
		L142:	a2 /= 2;
		L143:	a3 /= 2;
		L144:	a0 /= 2;
		L145:	a1 /= 2;
		L146:	a2 /= 2;
		L147:	a3 /= 2;
		L148:	a0 /= 2;
		L149:	a1 /= 2;
		L150:	a2 /= 2;
		L151:	a3 /= 2;
		L152:	a0 /= 2;
		L153:	a1 /= 2;
		L154:	a2 /= 2;
		L155:	a3 /= 2;
		L156:	a0 /= 2;
		L157:	a1 /= 2;
		L158:	a2 /= 2;
		L159:	a3 /= 2;
		L160:	a0 /= 2;
		L161:	a1 /= 2;
		L162:	a2 /= 2;
		L163:	a3 /= 2;
		L164:	a0 /= 2;
		L165:	a1 /= 2;
		L166:	a2 /= 2;
		L167:	a3 /= 2;
		L168:	a0 /= 2;
		L169:	a1 /= 2;
		L170:	a2 /= 2;
		L171:	a3 /= 2;
		L172:	a0 /= 2;
		L173:	a1 /= 2;
		L174:	a2 /= 2;
		L175:	a3 /= 2;
		L176:	a0 /= 2;
		L177:	a1 /= 2;
		L178:	a2 /= 2;
		L179:	a3 /= 2;
		L180:	a0 /= 2;
		L181:	a1 /= 2;
		L182:	a2 /= 2;
		L183:	a3 /= 2;
		L184:	a0 /= 2;
		L185:	a1 /= 2;
		L186:	a2 /= 2;
		L187:	a3 /= 2;
		L188:	a0 /= 2;
		L189:	a1 /= 2;
		L190:	a2 /= 2;
		L191:	a3 /= 2;
		L192:	a0 /= 2;
		L193:	a1 /= 2;
		L194:	a2 /= 2;
		L195:	a3 /= 2;
		L196:	a0 /= 2;
		L197:	a1 /= 2;
		L198:	a2 /= 2;
		L199:	a3 /= 2;
		L200:	a0 /= 2;
		L201:	a1 /= 2;
		L202:	a2 /= 2;
		L203:	a3 /= 2;
		L204:	a0 /= 2;
		L205:	a1 /= 2;
		L206:	a2 /= 2;
		L207:	a3 /= 2;
		L208:	a0 /= 2;
		L209:	a1 /= 2;
		L210:	a2 /= 2;
		L211:	a3 /= 2;
		L212:	a0 /= 2;
		L213:	a1 /= 2;
		L214:	a2 /= 2;
		L215:	a3 /= 2;
		L216:	a0 /= 2;
		L217:	a1 /= 2;
		L218:	a2 /= 2;
		L219:	a3 /= 2;
		L220:	a0 /= 2;
		L221:	a1 /= 2;
		L222:	a2 /= 2;
		L223:	a3 /= 2;
		L224:	a0 /= 2;
		L225:	a1 /= 2;
		L226:	a2 /= 2;
		L227:	a3 /= 2;
		L228:	a0 /= 2;
		L229:	a1 /= 2;
		L230:	a2 /= 2;
		L231:	a3 /= 2;
		L232:	a0 /= 2;
		L233:	a1 /= 2;
		L234:	a2 /= 2;
		L235:	a3 /= 2;
		L236:	a0 /= 2;
		L237:	a1 /= 2;
		L238:	a2 /= 2;
		L239:	a3 /= 2;
		L240:	a0 /= 2;
		L241:	a1 /= 2;
		L242:	a2 /= 2;
		L243:	a3 /= 2;
		L244:	a0 /= 2;
		L245:	a1 /= 2;
		L246:	a2 /= 2;
		L247:	a3 /= 2;
		L248:	a0 /= 2;
		L249:	a1 /= 2;
		L250:	a2 /= 2;
		L251:	a3 /= 2;
		L252:	a0 /= 2;
		L253:	a1 /= 2;
		L254:	a2 /= 2;
		L255:	a3 /= 2;
		L256:	a0 /= 2;
		L257:	a1 /= 2;
		L258:	a2 /= 2;
		L259:	a3 /= 2;
		L260:	a0 /= 2;
		L261:	a1 /= 2;
		L262:	a2 /= 2;
		L263:	a3 /= 2;
		L264:	a0 /= 2;
		L265:	a1 /= 2;
		L266:	a2 /= 2;
		L267:	a3 /= 2;
		L268:	a0 /= 2;
		L269:	a1 /= 2;
		L270:	a2 /= 2;
		L271:	a3 /= 2;
		L272:	a0 /= 2;
		L273:	a1 /= 2;
		L274:	a2 /= 2;
		L275:	a3 /= 2;
		L276:	a0 /= 2;
		L277:	a1 /= 2;
		L278:	a2 /= 2;
		L279:	a3 /= 2;
		L280:	a0 /= 2;
		L281:	a1 /= 2;
		L282:	a2 /= 2;
		L283:	a3 /= 2;
		L284:	a0 /= 2;
		L285:	a1 /= 2;
		L286:	a2 /= 2;
		L287:	a3 /= 2;
		L288:	a0 /= 2;
		L289:	a1 /= 2;
		L290:	a2 /= 2;
		L291:	a3 /= 2;
		L292:	a0 /= 2;
		L293:	a1 /= 2;
		L294:	a2 /= 2;
		L295:	a3 /= 2;
		L296:	a0 /= 2;
		L297:	a1 /= 2;
		L298:	a2 /= 2;
		L299:	a3 /= 2;
		L300:	a0 /= 2;
		L301:	a1 /= 2;
		L302:	a2 /= 2;
		L303:	a3 /= 2;
		L304:	a0 /= 2;
		L305:	a1 /= 2;
		L306:	a2 /= 2;
		L307:	a3 /= 2;
		L308:	a0 /= 2;
		L309:	a1 /= 2;
		L310:	a2 /= 2;
		L311:	a3 /= 2;
		L312:	a0 /= 2;
		L313:	a1 /= 2;
		L314:	a2 /= 2;
		L315:	a3 /= 2;
		L316:	a0 /= 2;
		L317:	a1 /= 2;
		L318:	a2 /= 2;
		L319:	a3 /= 2;
		L320:	a0 /= 2;
		L321:	a1 /= 2;
		L322:	a2 /= 2;
		L323:	a3 /= 2;
		L324:	a0 /= 2;
		L325:	a1 /= 2;
		L326:	a2 /= 2;
		L327:	a3 /= 2;
		L328:	a0 /= 2;
		L329:	a1 /= 2;
		L330:	a2 /= 2;
		L331:	a3 /= 2;
		L332:	a0 /= 2;
		L333:	a1 /= 2;
		L334:	a2 /= 2;
		L335:	a3 /= 2;
		L336:	a0 /= 2;
		L337:	a1 /= 2;
		L338:	a2 /= 2;
		L339:	a3 /= 2;
		L340:	a0 /= 2;
		L341:	a1 /= 2;
		L342:	a2 /= 2;
		L343:	a3 /= 2;
		L344:	a0 /= 2;
		L345:	a1 /= 2;
		L346:	a2 /= 2;
		L347:	a3 /= 2;
		L348:	a0 /= 2;
		L349:	a1 /= 2;
		L350:	a2 /= 2;
		L351:	a3 /= 2;
		L352:	a0 /= 2;
		L353:	a1 /= 2;
		L354:	a2 /= 2;
		L355:	a3 /= 2;
		L356:	a0 /= 2;
		L357:	a1 /= 2;
		L358:	a2 /= 2;
		L359:	a3 /= 2;
		L360:	a0 /= 2;
		L361:	a1 /= 2;
		L362:	a2 /= 2;
		L363:	a3 /= 2;
		L364:	a0 /= 2;
		L365:	a1 /= 2;
		L366:	a2 /= 2;
		L367:	a3 /= 2;
		L368:	a0 /= 2;
		L369:	a1 /= 2;
		L370:	a2 /= 2;
		L371:	a3 /= 2;
		L372:	a0 /= 2;
		L373:	a1 /= 2;
		L374:	a2 /= 2;
		L375:	a3 /= 2;
		L376:	a0 /= 2;
		L377:	a1 /= 2;
		L378:	a2 /= 2;
		L379:	a3 /= 2;
		L380:	a0 /= 2;
		L381:	a1 /= 2;
		L382:	a2 /= 2;
		L383:	a3 /= 2;
		L384:	a0 /= 2;
		L385:	a1 /= 2;
		L386:	a2 /= 2;
		L387:	a3 /= 2;
		L388:	a0 /= 2;
		L389:	a1 /= 2;
		L390:	a2 /= 2;
		L391:	a3 /= 2;
		L392:	a0 /= 2;
		L393:	a1 /= 2;
		L394:	a2 /= 2;
		L395:	a3 /= 2;
		L396:	a0 /= 2;
		L397:	a1 /= 2;
		L398:	a2 /= 2;
		L399:	a3 /= 2;
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a0 + a1 + a2 + a3);
	return 0;
}
