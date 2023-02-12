/*Write a program that continues to asks the user to enter any number other than 5 until the user enters the number 5.
Then tell the user "Hey! you weren't supposed to enter 5!" and exit the program.*/

#include<iostream>
using namespace std;

int main(){
    int number, iterations, n;
    n = 0;
    cout << "Enter any number other than " << n << ": ";
    cin >> number;
    iterations = 1;

    while (number!=n){
        n += 1;
        if (iterations == 5){
            cout << endl;
            cout << "Wow, you're more patient then I am, you win." << endl;
            return 0;
        }
        iterations+=1;
        cout << endl;
        cout << "Enter any number other than " << n << ": ";
        cin >> number; 
           
    }
    cout << endl;
    cout << "Hey! you weren't supposed to enter 5!" << endl;

    return 0;
}