#include <stdlib.h>
#include <stdio.h>

typedef int	TYPE;

#define	N 	1000

#if DEBUG
#undef N
#define N	4
#endif

TYPE	a[N][N], b[N][N], c[N][N];

#if X == 0
void
prod(void)
{
	int i, j, k;

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			for (k = 0; k < N; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
#elif X == 1
void
prod(void)
{
	int i, j, k;

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			int sum = 0;
			for (k = 0; k < N; k++) {
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
}
#elif X == 2
void
prod(void)
{
	int i, j, k;

	for (i = 0; i < N; i++) {
		for (k = 0; k < N; k++) {
			for (j = 0; j < N; j++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
#elif X == 3
void
prod(void)
{
	int i, j, k;

	for (i = 0; i < N; i++) {
		for (k = 0; k < N; k++) {
			int a_i_k = a[i][k];
			for (j = 0; j < N; j++) {
				c[i][j] += a_i_k * b[k][j];
			}
		}
	}
}
#elif X == 4
void
prod(void)
{
	int i, j, k;

	for (i = 0; i < N; i++) {
		for (k = 0; k < N; k++) {
			int a_i_k = a[i][k];
			for (j = 0; j < N; j += 4) {
				c[i][j + 0] += a_i_k * b[k][j + 0];
				c[i][j + 1] += a_i_k * b[k][j + 1];
				c[i][j + 2] += a_i_k * b[k][j + 2];
				c[i][j + 3] += a_i_k * b[k][j + 3];
			}
		}
	}
}
#elif X == 5
typedef int v4si __attribute__ ((vector_size (16)));

void
prod(void)
{
	int i, j, k;

	for (i = 0; i < N; i++) {
		for (k = 0; k < N; k++) {
			int a_i_k = a[i][k];
			int aa[4] = { a_i_k, a_i_k, a_i_k, a_i_k };
			v4si va = *(v4si *)aa;
			v4si *bp = (v4si *)(&b[k]), *cp = (v4si *)(&c[i]);
			for (j = 0; j < N; j += 4) {
				*cp++ += va * *bp++;
			}
		}
	}
}
#endif

#if 1 // DEBUG
#include <string.h>

void
init(void)
{
	a[0][0] = b[0][0] = 1;
	a[0][1] = b[0][1] = 2;
	a[0][2] = b[0][2] = 3;
	a[0][3] = b[0][3] = 4;
	a[1][0] = b[1][0] = 5;
	a[1][1] = b[1][1] = 6;
	a[1][2] = b[1][2] = 7;
	a[1][3] = b[1][3] = 8;
	a[2][0] = b[2][0] = 9;
	a[2][1] = b[2][1] = 10;
	a[2][2] = b[2][2] = 11;
	a[2][3] = b[2][3] = 12;
	a[3][0] = b[3][0] = 13;
	a[3][1] = b[3][1] = 14;
	a[3][2] = b[3][2] = 15;
	a[3][3] = b[3][3] = 16;
	memset(c, 0, 4 * 4 * sizeof(TYPE));
}
#endif

int
main(int argc, char **argv)
{
#if DEBUG
	init();
#endif
	prod();
#if DEBUG
	printf("%3d %3d %3d %3d\n", c[0][0], c[0][1], c[0][2], c[0][3]);
	printf("%3d %3d %3d %3d\n", c[1][0], c[1][1], c[1][2], c[1][3]);
	printf("%3d %3d %3d %3d\n", c[2][0], c[2][1], c[2][2], c[2][3]);
	printf("%3d %3d %3d %3d\n", c[3][0], c[3][1], c[3][2], c[3][3]);
#endif
	return 0;
}

