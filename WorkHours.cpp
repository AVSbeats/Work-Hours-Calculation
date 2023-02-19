#include <iostream>
#include <iomanip>

// This is a program to know your paycheck status (Work Calculator)

using namespace std;

int main()
{
    double wages, rate, hours;

    cout << fixed << showpoint << setprecision(2);
    cout << endl;
    cout << endl;
    cout << "Enter The Amount of Work Hours: ";
    cin >> hours;

    cout << "Enter Your Pay Rate: ";
    cin >> rate;

    if (hours > 40.0)
        wages = 40.0 * rate + 1.5 * rate * (hours - 40.0);
    else
        wages = hours * rate;
    cout << endl;
    cout << "The Total Paycheck is $" << wages << endl;
    cout << endl;

    return 0;
}
