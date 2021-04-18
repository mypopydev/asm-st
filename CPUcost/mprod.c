#include <stdlib.h>
#include <stdio.h>

typedef int	TYPE;

#if X == 0
void
prod(TYPE *a, int ax, TYPE *b, int bx, TYPE *c, int cx, int n, int p, int m)
{
	int i, j, k;

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			for (k = 0; k < p; k++) {
				c[cx * i + j] += a[ax * i + k] * b[bx * k + j];
			}
		}
	}
}
#elif X == 1
void
prod(TYPE *a, int ax, TYPE *b, int bx, TYPE *c, int cx, int n, int p, int m)
{
	int i, j, k;

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			int sum = 0;
			for (k = 0; k < p; k++) {
				sum += a[ax * i + k] * b[bx * k + j];
			}
			c[cx * i + j] = sum;
		}
	}
}
#elif X == 2
void
prod(TYPE *a, int ax, TYPE *b, int bx, TYPE *c, int cx, int n, int p, int m)
{
	int i, j, k;

	for (i = 0; i < n; i++) {
		for (k = 0; k < p; k++) {
			for (j = 0; j < m; j++) {
				c[cx * i + j] += a[ax * i + k] * b[bx * k + j];
			}
		}
	}
}
#elif X == 3
void
prod(TYPE *a, int ax, TYPE *b, int bx, TYPE *c, int cx, int n, int p, int m)
{
	int i, j, k;

	for (i = 0; i < n; i++) {
		for (k = 0; k < p; k++) {
			int a_i_k = a[ax * i + k];
			for (j = 0; j < m; j++) {
				c[cx * i + j] += a_i_k * b[bx * k + j];
			}
		}
	}
}
#elif X == 4
void
prod(TYPE *a, int ax, TYPE *b, int bx, TYPE *c, int cx, int n, int p, int m)
{
	int i, j, k;

	for (i = 0; i < n; i++) {
		for (k = 0; k < p; k++) {
			int a_i_k = a[ax * i + k];
			for (j = 0; j < m; j += 4) {
				c[cx * i + j + 0] += a_i_k * b[bx * k + j + 0];
				c[cx * i + j + 1] += a_i_k * b[bx * k + j + 1];
				c[cx * i + j + 2] += a_i_k * b[bx * k + j + 2];
				c[cx * i + j + 3] += a_i_k * b[bx * k + j + 3];
			}
		}
	}
}
#elif X == 5
typedef int v4si __attribute__ ((vector_size (16)));

void
prod(TYPE *a, int ax, TYPE *b, int bx, TYPE *c, int cx, int n, int p, int m)
{
	int i, j, k;

	for (i = 0; i < n; i++) {
		for (k = 0; k < p; k++) {
			int a_i_k = a[ax * i + k];
			int aa[4] = { a_i_k, a_i_k, a_i_k, a_i_k };
			v4si va = *(v4si *)aa;
			v4si *bp = (v4si *)(b + bx * k), *cp = (v4si *)(c + cx * i);
			for (j = 0; j < m; j += 4) {
				*cp++ += va * *bp++;
			}
		}
	}
}
#endif

#if 1 // DEBUG
#include <string.h>

void
init(TYPE *a, TYPE *b, TYPE *c)
{
	a[0 * 4 + 0] = b[0 * 4 + 0] = 1;
	a[0 * 4 + 1] = b[0 * 4 + 1] = 2;
	a[0 * 4 + 2] = b[0 * 4 + 2] = 3;
	a[0 * 4 + 3] = b[0 * 4 + 3] = 4;
	a[1 * 4 + 0] = b[1 * 4 + 0] = 5;
	a[1 * 4 + 1] = b[1 * 4 + 1] = 6;
	a[1 * 4 + 2] = b[1 * 4 + 2] = 7;
	a[1 * 4 + 3] = b[1 * 4 + 3] = 8;
	a[2 * 4 + 0] = b[2 * 4 + 0] = 9;
	a[2 * 4 + 1] = b[2 * 4 + 1] = 10;
	a[2 * 4 + 2] = b[2 * 4 + 2] = 11;
	a[2 * 4 + 3] = b[2 * 4 + 3] = 12;
	a[3 * 4 + 0] = b[3 * 4 + 0] = 13;
	a[3 * 4 + 1] = b[3 * 4 + 1] = 14;
	a[3 * 4 + 2] = b[3 * 4 + 2] = 15;
	a[3 * 4 + 3] = b[3 * 4 + 3] = 16;
	memset(c, 0, 4 * 4 * sizeof(TYPE));
}
#endif

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 500;
	int p = argc > 2 ? atoi(argv[2]) : 500;
	int m = argc > 3 ? atoi(argv[3]) : 500;
	TYPE *a = calloc(n * p, sizeof(TYPE));
	TYPE *b = calloc(p * m, sizeof(TYPE));
	TYPE *c = calloc(n * m, sizeof(TYPE));

#if DEBUG
	init(a, b, c);
#endif
	prod(a, p, b, m, c, m, n, p, m);
#if DEBUG
	printf("%3d %3d %3d %3d\n", c[0 * 4 + 0], c[0 * 4 + 1], c[0 * 4 + 2], c[0 * 4 + 3]);
	printf("%3d %3d %3d %3d\n", c[1 * 4 + 0], c[1 * 4 + 1], c[1 * 4 + 2], c[1 * 4 + 3]);
	printf("%3d %3d %3d %3d\n", c[2 * 4 + 0], c[2 * 4 + 1], c[2 * 4 + 2], c[2 * 4 + 3]);
	printf("%3d %3d %3d %3d\n", c[3 * 4 + 0], c[3 * 4 + 1], c[3 * 4 + 2], c[3 * 4 + 3]);
#endif
	return 0;
}

