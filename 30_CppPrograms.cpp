#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void program1() {
    int a = 5;
    int b = 10;
    int c = 15;

    cout << "a = " << a << "\n b = " << b << "\n c = " << c << "\n";
}

void program2() {
    cout << "C language is a powerful programming language." << endl;
}

void program3() {
    int x, y;

    cout << "Enter first integer (x): ";
    cin >> x;

    cout << "Enter second integer (y): ";
    cin >> y;

    int tmp = x;
    x = y;
    y = tmp;

    cout << "After interchange: x = " << x << " y = " << y << "\n";
}

void program4() {
    int year;

    cout << "Enter number of years: ";
    cin >> year;

    int months = year * 12;

    cout << year << " years = " << months << " months\n";
}

void program5() {
    int a, b;

    cout << "Enter first integer: ";
    cin >> a;

    cout << "Enter second integer: ";
    cin >> b;

    cout << "Sum = " << (a + b) << "\n";
    cout << "Product = " << (a * b) << "\n";
}

void program6() {
    int years;

    cout << "Enter age in years: ";
    cin >> years;

    cout << "Age in months = " << (years * 12) << "\n";
}

void program7() {
    int roll, m1, m2, m3;

    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter marks for subject PF: ";
    cin >> m1;

    cout << "Enter marks for subject FE: ";
    cin >> m2;

    cout << "Enter marks for subject ICP: ";
    cin >> m3;

    int total = m1 + m2 + m3;
    double avg = total / 3.0;

    cout << "Roll: " << roll << "\n";
    cout << "Total: " << total << "\n";
    cout << "Average: " << avg << "\n";
}

void program8() {
    double f;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;

    double c = (5.0 / 9.0) * (f - 32.0);

    cout << "Temperature in Celsius = " << c << "\n";
}

void program9() {
    int a, b, c, d;

    cout << "Enter first integer: ";
    cin >> a;

    cout << "Enter second integer: ";
    cin >> b;

    cout << "Enter third integer: ";
    cin >> c;

    cout << "Enter fourth integer: ";
    cin >> d;

    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    if (d > m) m = d;

    cout << "Maximum = " << m << "\n";
}

void program10() {
    double miles = 2.5;
    double km = miles * 1.609;

    cout << miles << " miles = " << km << " kilometers\n";
}

void program11() {
    int x = 8;
    int y = 11;

    double avg = (x + y) / 2.0;

    cout << "Average = " << avg << "\n";
}

void program12() {
    const double PI = 3.141592653589793;
    double r=2.0, h=5.0;

    double volume = PI * r * r * h;

    cout << "Volume of cylinder = " << volume << "\n";
}

void program13() {
    const double PI = 3.141592653589793;
    double r=3.0;

    double area = PI * r * r;

    cout << "Area = " << area << "\n";
}

void program14() {
    double mm=50.7;

    double inches = mm / 25.4;

    cout << mm << " mm = " << inches << " inches\n";
}

void program15() {
    int a, b;

    cout << "Enter first integer (a): ";
    cin >> a;

    cout << "Enter second integer (b): ";
    cin >> b;

    int tmp = a;
    a = b;
    b = tmp;

    cout << "After interchange: a = " << a << " b = " << b << "\n";
}

void program16() {
    int a = 3, b = 3, c = 3;
    int product = a * b * c;

    cout << "Product = " << product << "\n";
}

void program17() {
    double num = 15.58971;

    int integral = static_cast<int>(num);
    double fractional = num - integral;

    cout << "Integral part = " << integral << "\n";
    cout << "Fractional part = " << fractional << "\n";
}

void program18() {
    double vi=3.6, t=4.2,a=3.0;

    double s = (vi * t) + (0.5 * a * t * t);

    cout << "s = " << s << "\n";
}

void program19() {
    int years=19;

    int months = years * 12;
    int days = years * 365;

    cout << years << " years = " << months << " months = " << days << " days (approx)\n";
}

void program20() {
    cout << "C:\\Windows>" << "\n";
    cout << "'P' \t 'A' \t 'K'" << "\n";
    cout << "\"Pakistan\"" << "\n";
}

void program21() {
    cout << "XXXXX\nXXXXX\nXXX\nXXX\nX\n";                      
}

void program22() {
    string name;
    int age;
    double height;
    char gender;

    cout << "Enter first name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter height (m): ";
    cin >> height;

    cout << "Enter gender (M/F): ";
    cin >> gender;


    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Height: " << height << "\n";

    if (gender == 'M' || gender == 'm' || gender == 'F' || gender == 'f') {
        cout << "Gender: " << gender << "\n";
    }
    else {
        cout << "Invalid gender\n";
    }
}

void program23() {
    const double PI = 3.141592653589793;
    double r;

    cout << "Enter radius: ";
    cin >> r;

    double area = PI * r * r;
    double circ = 2 * PI * r;

    cout << "Area = " << area << "\n";
    cout << "Circumference = " << circ << "\n";
}

void program24() {
    int marks[5];
    int total = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> marks[i];
        total+=marks[i];
    }                   

    
    double avg = total / 5.0;

    cout << "Total = " << total << "\n";
    cout << "Average = " << avg << "\n";
}

void program25() {
    double a, b, c;

    cout << "Enter side a: ";
    cin >> a;

    cout << "Enter side b: ";
    cin >> b;

    cout << "Enter side c: ";
    cin >> c;

    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Area = " << area << "\n";
}

void program26() {
    double rupees=1500.0;

    double dollars = rupees / 60.0;

    cout << "Rs. " << rupees << " = $" << dollars << "\n";
}

void program27() {
    int h, m, s;

    cout << "Enter hours: ";
    cin >> h;

    cout << "Enter minutes: ";
    cin >> m;

    cout << "Enter seconds: ";
    cin >> s;

    int total_seconds = h * 3600 + m * 60 + s;

    cout << "Total seconds = " << total_seconds << "\n";
}

void program28() {
    double a, b, c;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    double disc = (b * b) - 4 * a * c;

    cout << "Discriminant = " << disc << "\n";
}

void program29() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    if (n > 100)
        cout << "n is greater than 100\n";
        else
        cout << "n is not greater than 100\n";
}

void program30() {
    int n;

    cout << "Enter integer: ";
    cin >> n;

    if (n % 2 == 0)
        cout << n << " is even\n";
    else
        cout << n << " is odd\n";
}

void showMenu() {
    cout << "\n--- MENU ---\n";
    cout << " 1  - Assign values to three variables and print them\n";
    cout << " 2  - Print message\n";
    cout << " 3  - Assign two variables, interchange and print\n";
    cout << " 4  - Year to months\n";
    cout << " 5  - Sum and product of two numbers\n";
    cout << " 6  - Age in months\n";
    cout << " 7  - Total and average of 3 marks\n";
    cout << " 8  - Fahrenheit to Celsius\n";
    cout << " 9  - Maximum of four numbers\n";
    cout << " 10 - Convert 2.5 miles to kilometers\n";
    cout << " 11 - Average of two ints\n";
    cout << " 12 - Volume of cylinder\n";
    cout << " 13 - Area of circle\n";
    cout << " 14 - Millimeters to inches\n";
    cout << " 15 - Interchange two values\n";
    cout << " 16 - Product of three numbers (3,3,3)\n";
    cout << " 17 - Integral and fractional parts of 15.58971\n";
    cout << " 18 - Compute s from vi and t\n";
    cout << " 19 - Age months and days\n";
    cout << " 20 - Print special output (escape sequences)\n";
    cout << " 21 - Print X pattern\n";
    cout << " 22 - Input and print name, age, height, gender\n";
    cout << " 23 - Area and circumference of circle\n";
    cout << " 24 - Total & average of 5 marks\n";
    cout << " 25 - Triangle area (Heron's formula)\n";
    cout << " 26 - Rupees to dollars\n";
    cout << " 27 - Time to seconds\n";
    cout << " 28 - Discriminant b^2 - 4ac\n";
    cout << " 29 - Check if n > 100\n";
    cout << " 30 - Odd or even test\n";
    cout << " 0  - Exit\n";

    cout << "\nEnter your choice: ";
}

int main() {
    int choice = -1;

    while (true) {
        showMenu();

        cin >> choice;

        cout << "\n";

        switch (choice) {
            case 0:
                cout << "Exiting program. Goodbye!\n";
                return 0;

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

            default:
                cout << "Invalid choice. Please enter a number between 0 and 30.\n";
        }
            cin.ignore();
            cout << "\nPress Enter to continue...";
            cin.get();

    }

    return 0;
}
