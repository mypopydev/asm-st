#!/usr/bin/perl

$head1 = '#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

';
$head2 = '#define X	%d

int	b[%d * X];

';
$head3 = 'int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : %d;
	%sint a = argc > 2 ? atoi(argv[2]) : %d;
';
$body1 = '	for (i = %d * X; (i -= X) >= 0; ) {
		b[i] = 1;
	}
';
$body2 = '	switch (argc > %d ? atoi(argv[%d]) : 0) {
		x(0);   x(1);   x(2);   x(3);   x(4);
		x(5);   x(6);   x(7);   x(8);   x(9);
';
$body3 = '	}
	do {
		asm("DUMMY1:");
';
$tail1 = '		asm("DUMMY2:");
	} while (--n > 0);
';
$tail2 = '	return 0;
}
';

$rcp = shift @ARGV;
$stmt[0] = shift @ARGV;
$stmt[1] = $rcp ? shift @ARGV : $stmt[0];
($full, $n, $unsig, $na, $init_a, $type_b, $init_b) = @ARGV;
$nstm = $full ? 100 : 10;
$na = 1 if $na == 0;
$type_b = $type_b == 0 ? 0 : $type_b == 1 ? 1 : $type_b == 2 ? 2 : 3;
$unsig = $unsig ? 'unsigned ' : '';

printf $head1;
printf $head2, $type_b == 2 ? 1 : 8192, $na * $nstm if ($type_b & ~01) == 2;
printf $head3, $n, $unsig, $init_a;
printf "\t%sint b = argc > 3 ? atoi(argv[3]) : %d;\n", $unsig, $init_b
	if $type_b == 1;
printf "\tint i;\n" if ($type_b & ~01) == 2;
if ($na > 1) {
	printf "\t%sint a0 = a", $unsig;
	for ($i = 1; $i < $na; $i++) {
		print ", a$i = a";
	}
	print ";\n";
}
print "\n";
printf "\tn /= %d;\n", $nstm / 10 * $na if $nstm > 10 || $na > 1;
printf $body1, $na * $nstm if ($type_b & ~01) == 2;
printf $body2, ($type_b == 1) + 3, ($type_b == 1) + 3;
for ($i = 10; $i < $na * $nstm; $i += 5) {
	$s = $i < 100 ? ' ' : '';
	printf "\t\tx(%d);%s x(%d);%s x(%d);%s x(%d);%s x(%d);\n",
	       $i, $s, $i + 1, $s, $i + 2, $s, $i + 3, $s, $i + 4;
}
printf $body3;
$k = 0;
for ($i = 0; $i < $nstm; $i++) {
	for ($j = 0; $j < $na; $j++) {
		$A = $na > 1 ? "a$j" : "a";
		$s = $stmt[$k & 01];
		$s =~ s/\bA\b/$A/g;
		$s =~ s/\bI\b/$k/g;
		printf "\t\tL%d:\t$s\n", $k++, $s;
	}
}
print $tail1;
if ($na == 1) {
	print '	printf("a = %d\n", a);', "\n";
} else {
	print '	printf("a = %d\n", a0';
	map { print " + a$_" } (1 .. $na - 1);
	print ");\n";
}
print $tail2;
