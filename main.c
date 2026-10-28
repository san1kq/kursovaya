#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "rus");

    printf("--- КТ1: Вариант 15 ---\n\n");

    float log_x[6] = { 0.0f, 45.5f, 46.0f, 46.5f, 47.0f, 52.9f };
    float que_x[6] = { 0.0f, 55.6f, 53.6f, 57.0f, -1.0f, 53.0f };
    float tls_x[6] = { 0.0f, 33.9f, -1.0f, 32.4f, 31.6f, 30.9f };

    printf("LOG Q в момент 4 = %.4f\n", logf(log_x[4]) - logf(log_x[4 - 3]));
    printf("LOG Q в момент 5 = %.4f\n\n", logf(log_x[5]) - logf(log_x[5 - 3]));

    printf("QUE Q в момент 4 = пропуск (нет данных)\n");
    printf("QUE Q в момент 5 = %.4f\n\n", logf(que_x[5]) - logf(que_x[5 - 3]));

    printf("TLS Q в момент 4 = %.4f\n", logf(tls_x[4]) - logf(tls_x[4 - 3]));
    printf("TLS Q в момент 5 = пропуск (нет данных)\n\n");

    return 0;
}
