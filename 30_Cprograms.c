#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void program1() {
    int a=10;
    int b=20;
    int c=30;

    printf("\na=%d b=%d c=%d\n", a, b, c);
}

void program2() {

    printf("C language is a powerful programming language.\n");
}

void program3() {
    int x, y;

    printf("Enter first integer (x): ");
    scanf("%d", &x);

    printf("\nEnter second integer (y): ");
    scanf("%d", &y);

    int tmp = x;
    x = y;
    y = tmp;

    printf("\nAfter interchange: x=%d y=%d\n", x, y);
}

void program4() {
    int year;

    printf("Enter number of years: ");
    scanf("%d", &year);

    int months = year * 12;

    printf("\n%d years = %d months\n", year, months);
}

void program5() {
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("\nEnter second integer: ");
    scanf("%d", &b);

    printf("\nSum = %d\n", a + b);
    printf("Product = %d\n", a * b);
}

void program6() {
    int years;

    printf("Enter age in years: ");
    scanf("%d", &years);

    printf("\nAge in months = %d\n", years * 12);
}

void program7() {
    int roll, m1, m2, m3;

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("\nEnter marks for subject PF: ");
    scanf("%d", &m1);

    printf("\nEnter marks for subject FE: ");
    scanf("%d", &m2);

    printf("\nEnter marks for subject ICP: ");
    scanf("%d", &m3);

    int total = m1 + m2 + m3;
    double avg = total / 3.0;

    printf("\nRoll: %d\nTotal: %d\nAverage: %.2f\n", roll, total, avg);
}

void program8() {
    double f;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &f);

    double c = (5.0 / 9.0) * (f - 32.0);

    printf("\nTemperature in Celsius = %.2f\n", c);
}

void program9() {
    int a, b, c, d;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("\nEnter second integer: ");
    scanf("%d", &b);

    printf("\nEnter third integer: ");
    scanf("%d", &c);

    printf("\nEnter fourth integer: ");
    scanf("%d", &d);

    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    if (d > m) m = d;

    printf("\nMaximum = %d\n", m);
}

void program10() {
    double miles;
    miles = 2.5;
    double km = miles * 1.609;

    printf("\n%.4f miles = %.4f kilometers\n", miles, km);
}

void program11() {
    int x=7, y=13;

    double avg = (x + y) / 2.0;

    printf("\nAverage = %.2f\n", avg);
}

void program12() {
    const double PI = 3.141592653589793;
    double r=2.0, h=5.0;

    double volume = PI * r * r * h;

    printf("\nVolume of cylinder = %.4f\n", volume);
}

void program13() {
    const double PI = 3.141592653589793;
    double r=3.0;
    double area = PI * r * r;

    printf("\nArea = %.4f\n", area);
}

void program14() {
    double mm=50.8;
    
    double inches = mm / 25.4;

    printf("\n%.4f mm = %.4f inches\n", mm, inches);
}

void program15() {
    int a, b;

    printf("Enter first integer (a): ");
    scanf("%d", &a);

    printf("\nEnter second integer (b): ");
    scanf("%d", &b);

    int tmp = a;
    a = b;
    b = tmp;

    printf("\nAfter interchange: a=%d b=%d\n", a, b);
}

void program16() {
    int a, b, c;

    printf("Enter value a: ");
    scanf("%d", &a);

    printf("\nEnter value b: ");
    scanf("%d", &b);

    printf("\nEnter value c: ");
    scanf("%d", &c);

    int product = a * b * c;

    printf("\nProduct = %d\n", product);
}

void program17() {
    double num=15.58971;

    int integral = (int)num;
    double fractional = num - integral;

    printf("\nIntegral part = %d\n", integral);
    printf("Fractional part = %.5f\n", fractional);
}

void program18() {
    double vi=3.6, t=4.2,a=3.0;

    double s = (vi * t) + (0.5 * a * t * t);

    printf("\ns = %.4f\n", s);
}

void program19() {
    int years=23;

    int months = years * 12;
    int days = years * 365;

    printf("\n%d years = %d months = %d days (approx)\n", years, months, days);
}

void program20() {

    printf("C:\\Windows>\n");
    printf("'P' \t 'A' \t 'K'\n");
    printf("\"Pakistan\"\n");
}
void program21() {
    printf("XXXXX\nXXXXX\nXXX\nXXX\nX\n");
}

void program22() {
    char Name[10];
    int age;
    double height;
    char gender;

    printf("Enter name: ");
    scanf("%9s", Name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter height (m): ");
    scanf("%lf", &height);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Name: %s\nAge: %d\nHeight: %.2f\n", Name, age, height);
    if(gender == 'M' ||gender == 'm'|| gender=='F' ||gender=='f'){
        printf("Gender: %c\n",gender);
    }
    else{
        printf("invalid gender");
}
}
void program23() {
    const double PI = 3.141592653589793;
    double r;

    printf("Enter radius: ");
    scanf("%lf", &r);

    double area = PI * r * r;
    double circ = 2 * PI * r;

    printf("\nArea = %.4f\nCircumference = %.4f\n", area, circ);
}

void program24() {
    int marks[5];
    int total = 0;

    for (int i = 0; i < 5; i++) {

        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];
    }

    double avg = total / 5.0;

    printf("\nTotal = %d\nAverage = %.2f\n", total, avg);
}

void program25() {
    double a, b, c;

    printf("Enter side a in decimal point: ");
    scanf("%lf", &a);

    printf("\nEnter side b in decimal point: ");
    scanf("%lf", &b);

    printf("\nEnter side c in decimal point: ");
    scanf("%lf", &c);

    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("\nArea = %.4f\n", area);
}

void program26() {
    double rupees=4000;

    double dollars = rupees / 280.0;

    printf("\nRs. %.2f = $%.2f\n", rupees, dollars);
}

void program27() {
    int h, m, s;

    printf("Enter hours: ");
    scanf("%d", &h);

    printf("\nEnter minutes: ");
    scanf("%d", &m);

    printf("\nEnter seconds: ");
    scanf("%d", &s);

    long totalseconds = (long)h * 3600 + (long)m * 60 + s;

    printf("\nTotal seconds = %ld\n", totalseconds);
}

void program28() {
    double a, b, c;

    printf("Enter a: ");
    scanf("%lf", &a);

    printf("\nEnter b: ");
    scanf("%lf", &b);

    printf("\nEnter c: ");
    scanf("%lf", &c);

    double disc = (b * b )- 4 * a * c;

    printf("\nDisc = %.4f\n", disc);
}

void program29() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n > 100)
        printf("\nn is greater than 100\n");
    else
        printf("\nn is not greater than 100\n");
}

void program30() {
    int n;

    printf("Enter integer: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("\n%d is even\n", n);
    else
        printf("\n%d is odd\n", n);
}

void showMenu() {
    printf("\n--- MENU ---\n");
    printf(" 1  - Assign values to three variables and print them\n");
    printf(" 2  - Print message\n");
    printf(" 3  - Assign two variables, interchange and print\n");
    printf(" 4  - Year to months\n");
    printf(" 5  - Sum and product of two numbers\n");
    printf(" 6  - Age in months\n");
    printf(" 7  - Total and average of 3 marks\n");
    printf(" 8  - Fahrenheit to Celsius\n");
    printf(" 9  - Maximum of four numbers\n");
    printf(" 10 - Convert miles to kilometers\n");
    printf(" 11 - Average of two ints\n");
    printf(" 12 - Volume of cylinder\n");
    printf(" 13 - Area of circle\n");
    printf(" 14 - Millimeters to inches\n");
    printf(" 15 - Interchange two values\n");
    printf(" 16 - Product of three numbers\n");
    printf(" 17 - Integral and fractional parts\n");
    printf(" 18 - Compute s from vi and t\n");
    printf(" 19 - Age months and days\n");
    printf(" 20 - Print special output (escape sequences)\n");
    printf(" 21 - Print X pattern\n");
    printf(" 22 - Input and print name, age, height, gender\n");
    printf(" 23 - Area and circumference of circle\n");
    printf(" 24 - Total & average of 5 marks\n");
    printf(" 25 - Triangle area (Heron's formula)\n");
    printf(" 26 - Rupees to dollars\n");
    printf(" 27 - Time to seconds\n");
    printf(" 28 - Discriminant b^2 - 4ac\n");
    printf(" 29 - Check if n > 100\n");
    printf(" 30 - Odd or even test\n");
    printf(" 0  - Exit\n");

    printf("\nEnter your choice: ");
}

int main() {
    int choice = -1;

    while (1) {
        showMenu();

        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 0: printf("Exiting program. Goodbye!\n"); return 0;
            case 1: program1(); break;
            case 2: program2(); break;
            case 3: program3(); break;
            case 4: program4(); break;
            case 5: program5(); break;
            case 6: program6(); break;
            case 7: program7(); break;
            case 8: program8(); break;
            case 9: program9(); break;
            case 10: program10(); break;
            case 11: program11(); break;
            case 12: program12(); break;
            case 13: program13(); break;
            case 14: program14(); break;
            case 15: program15(); break;
            case 16: program16(); break;
            case 17: program17(); break;
            case 18: program18(); break;
            case 19: program19(); break;
            case 20: program20(); break;
            case 21: program21(); break;
            case 22: program22(); break;
            case 23: program23(); break;
            case 24: program24(); break;
            case 25: program25(); break;
            case 26: program26(); break;
            case 27: program27(); break;
            case 28: program28(); break;
            case 29: program29(); break;
            case 30: program30(); break;
            default: printf("Invalid choice. Please enter a number between 0 and 30.\n");
        }

        printf("\nPress Enter to continue...");
        getchar();
        getchar();
    }

    return 0;
}
