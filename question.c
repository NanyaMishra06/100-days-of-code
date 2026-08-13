 // Q1 
// #include <stdio.h>
// int main()
// {
//     int a = 12;
//     int b = 8;
//     int sum = a + b;
//     printf("%d", sum);
//     return 0;
// }

// Q2 Write a program to input two numbers and display their sum, difference, product, and quotient. 
// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     int sum = num1 + num2;
//     int difference = num1 - num2;
//     int product = num1 * num2;
//     float quotient = (float)num1 / (float)num2;

//    printf("Sum: %d\n", sum);
//    printf("Difference: %d\n", difference);
//    printf("Product: %d\n", product);
//    printf("Quotient: %.2f\n", quotient);
//     return 0;
// }

// Q3  Write a program to calculate the area and circumference of a circle given its radius.

// #include <stdio.h>
// #define PI 3.14159
// int main()
// {
//     float radius;
//     printf("Enter the radius of the circle: ");
//     scanf("%f", &radius);

//     float area = PI * radius * radius;
//     float circumference = 2 * PI * radius;

//     printf("Area: %.2f\n", area);
//     printf("Circumference: %.2f\n", circumference);
//     return 0;
// }

// Q4 Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

// #include <stdio.h>
// int main()
// {
//     int length, breadth;
//     printf("Enter the length and breadth of the rectangle: ");
//     scanf("%d %d", &length, &breadth);

//     int area = length * breadth;
//     int perimeter = 2 * (length + breadth);

//     printf("Area: %d\n", area);
//     printf("Perimeter: %d\n", perimeter);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
// float celsius, fahrenheit;
// printf("Enter temperature in Celsius: ");
// scanf("%f", &celsius);
// fahrenheit = (celsius * 9/5) + 32;
// printf("Temperature in Fahrenheit: %f", fahrenheit);

// return 0;
// }

// Write a program to swap two numbers using a third variable.
// #include <stdio.h>
// int main()
// {
//     int a, b, temp;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     temp = a;
//     a = b;
//     b = temp;
//     printf("After swapping: a = %d, b = %d", a, b);
//     return 0;
// }

// Write a program to swap two numbers without using a third variable.
// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("After swapping: a = %d, b = %d", a, b);
//     return 0;
// }

// Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of first %d natural numbers: %d", n, sum);
    return 0;
}
