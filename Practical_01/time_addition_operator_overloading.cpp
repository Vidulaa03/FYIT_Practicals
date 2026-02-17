#include <iostream>
 using namespace std;
 class Time
 {
    int hours, minutes;
 public:
    void getTime()
    {
        cout << "Enter hours and minutes: ";
        cin >> hours >> minutes;
    }
    void display()
    {
        cout << hours << " hr " << minutes << " min" << endl;
    }
    Time operator + (Time t2)
    {
        Time t;
        t.minutes = minutes + t2.minutes;
        t.hours = hours + t2.hours + t.minutes / 60;
        t.minutes = t.minutes % 60;
        return t;
    }
 };
 int main()
 {
    Time t1, t2, t3;
    cout << "Enter first time:\n";
    t1.getTime();
    cout << "Enter second time:\n";
    t2.getTime();
    t3 = t1 + t2;
    cout << "Sum of times: ";
    t3.display();
    return 0;
 }
