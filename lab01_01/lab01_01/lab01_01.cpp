//********************************************
// Student Name: Linda Wang
// Student Number: XXXXXXXX
//
// SYDE 121 Lab: 1 Exercise: 1
// Filename: lab01_01.cpp
// Due Date: Friday, September 20, 2019
//********************************************

#include <iostream>
using namespace std;

int main() {
    // Constant variables declaration - optional
    const int WEIGHT_150 = 150;
    const int WEIGHT_50 = 50;
    const int WEIGHT_30 = 30;
    const int WEIGHT_15 = 15;
    const int WEIGHT_1 = 1;
    
    // variables declaration
    int weight_given = 1048;
    int weights150 = 0;
    int weights50 = 0;
    int weights30 = 0;
    int weights15 = 0;
    int weights1 = 0;
    
    // comments about logic
    // TO-DO: write logic to compute weights
    
    // output
    cout << "Number of 150 lb weights: " << weights150 << endl;
    cout << "Number of 50 lb weights: " << weights50 << endl;
    cout << "Number of 30 lb weights: " << weights30 << endl;
    cout << "Number of 15 lb weights: " << weights15 << endl;
    cout << "Number of 1 lb weights: " << weights1 << endl;
    
    return 0;
}
