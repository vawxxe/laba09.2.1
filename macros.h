
#pragma once

// Значення z задається перед компіляцією
#define Z 10

// Макроси математичних операцій
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(a) ((a) < 0 ? -(a) : (a))
#define SQR(a) ((a) * (a))
#define ROOT(a) sqrt(a)

// Логічний вираз для вибору гілки
#define CONDITION(z) ((z) >= 1 && (z) < 10)

// Макрос виведення результату
#define PRINT_RESULT(a) printf("Result: %.6f\n", (double)(a))
#pragma once

