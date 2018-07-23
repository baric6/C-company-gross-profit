/*
By Baric
may 28 18
This program takes in 3 companys and the total profit 
and outputs the total profit of all companys together.
*/
#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    const int diviton = 3;//rows 
    const int quarter = 4;// col
    double sales[diviton][quarter] = {0};//2d array
    double total_sales = 0;//quarterly add up

    cout << "This program calulates the total sales of " << endl;
    cout << "all the companys diviton " << endl;
    cout << "Enter the following sales information " << endl; 

    for (int div = 0; div < diviton; div++){
        for(int qrt = 0; qrt < quarter; qrt++){
            cout << "Division " << (div +1) << ": ";//store 1-3
            cout << " Quarter " << (qrt +1) << ": ";//store profit
            cin >> sales[div][qrt];//entering store profit
        }
        cout << endl;
    }
    
    for (int div = 0; div < diviton; div++){
        for (int qrt = 0; qrt < quarter; qrt++){
            total_sales += sales[div][qrt];//adding up all quarters
        }
    }
    cout << fixed << showpoint << setprecision(2);
    cout << "The total sales for the company is $" << total_sales << endl;
    return 0;
}
