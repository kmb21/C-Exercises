#include <iostream>
using namespace std;


int main(){
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;
    switch(grade)
    {
    case 100:
        cout << "Perfect score. You have an A grade" <<endl;
        break;
    case 90 ... 99:
        cout << "You scored an A grade" << endl;
        break;
    case 80 ... 89:
        cout << "You scored a B grade" << endl;
        break;
    case 70 ... 79:
        cout << "You scored a C grade" << endl;
        break;
    case 60 ... 69:
        cout << "You scored a D grade" << endl;
        break;
    case 0 ... 59:
        cout << "You scored an F grade" << endl;
        break;

    default:
        cout << "Invalid grade. Grade must be in range 0-100" <<endl;
        break;
    }
    return 0;
}