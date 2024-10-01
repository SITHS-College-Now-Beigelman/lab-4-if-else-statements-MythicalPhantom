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
    int low, medium, high;
    low = medium = high = 0;

    //While Loop, Must Have At Least 1 of Every Sugar Level
    while (low < 1 || medium < 1 || high < 1) {
        //User Input for Name of Fruits and Grams of Sugar
        cout << "Name of Fruit: ";
        cin >> fruit;
        cout << "Grams of Sugar: ";
        cin >> sugar;

        //If Statement with Outputs Relative to the Amount of Sugar
        if (sugar < 10) {
            cout << fruit << " LOW SUGAR FRUIT\n" << endl;
            low++;
        } else if (10 <= sugar and sugar <= 14) {
            cout << fruit << " MEDIUM SUGAR FRUIT\n" << endl;
            medium++;
        } else {
            cout << fruit << " HIGH SUGAR FRUIT\n" << endl;
            high++;
        }
    }

    //Exits Successfully
    return 0;
}

/*
Name of Fruit: grapes
Grams of Sugar: 23.37
grapes HIGH SUGAR FRUIT

Name of Fruit: avocado
Grams of Sugar: .99
avocado LOW SUGAR FRUIT

Name of Fruit: strawberries
Grams of Sugar: 7
strawberries LOW SUGAR FRUIT

Name of Fruit: grapefruit
Grams of Sugar: 10.6
grapefruit MEDIUM SUGAR FRUIT
*/