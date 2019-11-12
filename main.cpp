#include <iostream>
#include <stdlib.h>
using namespace std;

int inputArraySize();
void inputArray(int[]);
void displayArray(int[]);
void selectarray(int[]);
int arrSize;

int main()
{
    int age[arrSize];
    inputArray(age);
    displayArray(age);

    return 0;
}
int inputArrSize(){
    int age [arrSize];

    cout << "Enter Array size 3-4: ";
    cin>> arrSize;

    return arrSize;
}

void inputArray(int age[]){

    inputArrSize();
    for(int i= 0; i<=arrSize-1; i++){
        cout << "Enter Value for position "<< i + 1 <<" : ";
        cin>> age[i];
    }
}
void displayArray(int age[]){

system("CLS");

    for(int i= 0; i<=arrSize-1; i++){
        cout << "The Value at position "<< i + 1 <<" is " << age[i]<< endl;

    }

selectarray(age);

}

void selectarray (int age[]){
    int choice;

    cout << "\n Select the Array that you want to call : ";
    cin>> choice;

    if (choice == 1){
        cout << "The value at position 1 is "<< age [0] << endl;
    }
    if (choice == 2){
        cout << "The value at position 2 is "<< age [1] << endl;
    }
    if (choice == 3){
        cout << "The value at position 3 is "<< age [2] << endl;
    }
    if (choice == 4){
        cout << "The value at position 4 is "<< age [3] << endl;
    }
}
