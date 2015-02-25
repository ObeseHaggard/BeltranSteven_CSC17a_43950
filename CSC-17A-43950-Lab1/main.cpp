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
void bblSort(int [], int);
int binarySearch(const int [],int, int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int Array [SIZE];
    filArray(Array,SIZE);
    prntAry(Array);
    cout<<"\nBubble Sort: \n";
    bblSort(Array,SIZE);
    return 0;
}
//randomly fill the array with 2-digit numbers
void filArray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}
//Print the Arrray
void prntAry(int a[]){
    for(int i=0;i<SIZE;i++){
        cout<<a[i]<<endl;
    }
}
//Sort the Array
void bblSort(int list[], int n){
    int  d, t;
    for (int c=0;c<(n-1);c++){
        for (d=0;d<n-c-1;d++){
            if (list[d]>list[d+1]){
                //Swap 
                t=list[d];
                list[d]=list[d+1];
                list[d+1]=t;
            }
        }
    }
    prntAry(list);
}
int binarySearch(const int [],int, int){
    int first,last,middle,position;
}