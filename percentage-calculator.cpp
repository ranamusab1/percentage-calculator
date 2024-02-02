#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    float sub1, sub2, sub3;
    float percentage;
    cout << "Enter the number to 1st subject: " << endl;
    cin >> sub1;
    cout << "Enter the number to 2nd subject: " << endl;
    cin >> sub2;
    cout << "Enter the number to 3rd subject: " << endl;
    cin >> sub3;
    // Add More Subjects As Per Your Need
    
    float total = sub1 + sub2 + sub3;
    percentage = (total/300)*100;
    cout << "The students percentage is = " << percentage;
    return 0;
}