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
// #include <stdio.h>
// int main()
// {
//     int n, sum = 0;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     printf("Sum of first %d natural numbers: %d", n, sum);
//     return 0;
// }
// Q9 Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time, simple_interest, compound_interest;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;

    // Calculate compound interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}
// Q 10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
    int total_seconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("Time in hours:minutes:seconds format: %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
// Q 11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    return 0;
}
// Q 12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("The number is positive.\n");
    }
    else
    {
        if (num < 0)
        {
            printf("The number is negative.\n");
        }
        else
        {
            printf("The number is zero.\n");
        }
    }

    return 0;
}
// Q 13 : Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

// Q 14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//     {
//         printf("Vowel\n");
//     }
//     else
//     {
//         printf("Consonant\n");
//     }

//     return 0;
// }