#include<iostream>
using namespace std;

int main(){
    int choice;
    string bevs[5];
    bevs[0] = "Cola";
    bevs[1] = "Sprite";
    bevs[2] = "Coke";
    bevs[3] = "Water";
    bevs[4] = "Beer";

    string Bevs = "Cola(1), Sprite(2), Coke(3), Water(4), Beer(5)";
    cout << endl;
    cout << "Available drinks: " << Bevs << endl;
    cout << endl;
    cout << "Choose a drink using numbers 1-5: ";
    cin >> choice;
    switch(choice)
    {
    case 5:
        cout << "Your favorite beverage is " << bevs[4] << endl;
        break;
    case 4:
        cout << "Your favorite beverage is " << bevs[3] << endl;
        break;
    case 3:
        cout << "Your favorite beverage is " << bevs[2] << endl;
        break;
    case 2:
        cout << "Your favorite beverage is " << bevs[1] << endl;
        break;
    case 1:
        cout << "Your favorite beverage is " << bevs[0] << endl;
        break;
    default:
        cout << "Invalid Choice. You have to pick a number from 1 to 5" << endl;
        break;
    }

    return 0;
}