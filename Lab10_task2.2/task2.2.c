#include <stdio.h>
#include <math.h>
#include <locale.h>
double sin_x(double x, int N) {
    double sum = 1; 
    double term = 1; 
    for (int n = 1; n < N; n++) {
        term *= -x * x / ((2 * n) * (2 * n + 1));
        sum += term;
    }
    return sum;
}
int main() {
    setlocale(LC_ALL, "RUS");
    double x;
    int N;
    printf("������� �������� x: ");
    scanf_s("%lf", &x);
    printf("������� ���������� ������ ���� N: ");
    scanf_s("%d", &N);
    double result_series = sin_x(x, N);
    printf("sin x / x: %.10lf\n", result_series);
}