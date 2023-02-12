#include <iostream>
using namespace std;

int main(){
    int grade;
    cout << "Enter your grade";
    cin >> grade;
    if (grade == 100){
        cout << "You got a perfect score. Keep up the good work!" << endl;
    }
    else if (90<=grade<100){
        cout << "You scored an A grade" << endl;
    }
    else if (80<=grade<90){
        cout << "You scored a B grade" << endl;
    }
    else if (70<=grade<80){
        cout << "You scored a C grade" << endl;
    }
    else if (60<=grade<70){
        cout << "You scored a D grade" << endl;
    }
    else if (0<=grade<60){
        cout << "You scored an F grade" << endl;
    }
    else {
        cout << "Invalid grade. Grade should be in range 0-100" << endl;
        return 1;
    }

    return 0;
}