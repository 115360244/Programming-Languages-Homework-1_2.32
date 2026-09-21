#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    double weight; 
    double height; 
    double bmi;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "\nYour BMI is: " << bmi << "\n\n";

    cout << "BMI VALUES\n";
    cout << "Underweight: less than 18.5\n";
    cout << "Normal:      between 18.5 and 24.9\n";
    cout << "Overweight:  between 25 and 29.9\n";
    cout << "Obese:       30 or greater\n";
    system("pause");
    return 0;
}