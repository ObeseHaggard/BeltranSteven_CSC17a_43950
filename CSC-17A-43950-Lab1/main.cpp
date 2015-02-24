/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Lab1
 * Created on February 24, 2015, 8:28 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
const int SIZE=100;

//Function Prototypes
void filArray(int [],int );
void prntAry(int []);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int Array [SIZE];
    filArray(Array,SIZE);
    prntAry(Array);
    return 0;
}
//randomly fill the array with 2-digit numbers
void filArray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}
void prntAry(int a[]){
    for(int i=0;i<SIZE;i++){
        cout<<a[i]<<endl;
    }
}