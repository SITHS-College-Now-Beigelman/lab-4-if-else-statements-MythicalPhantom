//Jefferson Zheng
//October 1, 2024
//Lab 4

#include <iostream>
#include <string>

using namespace std;

int main() {
    //Creates Undefined Variables fruit and sugar
    string fruit;
    double sugar;

    //User Input for Name of Fruits and Grams of Sugar
    cout << "Name of Fruit: ";
    cin >> fruit;
    cout << "Grams of Sugar: ";
    cin >> sugar;

    //If Statement for With Outputs Relative to the Amount of Sugar
    if (sugar <  10) {
        cout << fruit << " LOW SUGAR FRUIT";
    } else if (10 <= sugar and sugar <= 14) {
        cout << fruit << " MEDIUM SUGAR FRUIT";
    } else {
        cout << fruit << " HIGH SUGAR FRUIT";
    }
    
    //Exits Successfully
    return 0;
}

/*
Name of Fruit: grapes
Grams of Sugar: 23.37
grapes HIGH SUGAR FRUIT
*/