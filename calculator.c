#include <stdio.h>

int main() {
    int choice;
    float a, b, result = 0;

    // Memory
    float memory = 0;

    // History (last 10 results)
    float history[10];
    int count = 0;

    while (1) {
        printf("\n===== CALCULATOR =====\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Power (x^y)\n");
        printf("6. Modulus (%%)\n");
        printf("7. Show Memory\n");
        printf("8. Clear Memory\n");
        printf("9. Show History\n");
        printf("10. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a + b;
                printf("Result = %.2f\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a - b;
                printf("Result = %.2f\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a * b;
                printf("Result = %.2f\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if (b != 0) {
                    result = a / b;
                    printf("Result = %.2f\n", result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;

            case 5: {
                int i;
                float power = 1;
                printf("Enter base and exponent: ");
                scanf("%f %f", &a, &b);

                for (i = 0; i < (int)b; i++) {
                    power *= a;
                }

                result = power;
                printf("Result = %.2f\n", result);
                break;
            }

            case 6: {
                int x, y;
                printf("Enter two integers: ");
                scanf("%d %d", &x, &y);

                if (y != 0) {
                    result = x % y;
                    printf("Result = %d\n", (int)result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            }

            case 7:
                printf("Stored Memory = %.2f\n", memory);
                break;

            case 8:
                memory = 0;
                printf("Memory Cleared!\n");
                break;

            case 9:
                printf("History:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d: %.2f\n", i + 1, history[i]);
                }
                break;

            case 10:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }

        memory = result;

        if (count < 10) {
            history[count++] = result;
        } else {
            for (int i = 0; i < 9; i++) {
                history[i] = history[i + 1];
            }
            history[9] = result;
        }
    }

    return 0;
}
