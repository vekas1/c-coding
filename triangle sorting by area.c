#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n) {
    double *areas = (double*)malloc(n * sizeof(double));

    for (int i = 0; i < n; i++) {
        double p = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        areas[i] = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (areas[j] > areas[j + 1]) {
                double temp_area = areas[j];
                areas[j] = areas[j + 1];
                areas[j + 1] = temp_area;

                triangle temp = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = temp;
            }
        }
    }

    free(areas);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}