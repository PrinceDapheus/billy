

// pass by pointer 

#include <iostream>

using namespace std;

#include <algorithm>
#include <cstdlib>

class make {


public:
int size = 3;

int *dArray = new int [3];

int change (int *ptr){

for (int x = 0 ; x < size ; x++){

    dArray[x]= 1;

 cout << dArray[x] <<" ";

}




};




int main (){

int size = 3;
int *myPointer = new int [size];

make m1;
m1.change(myPointer);

    return 0;

}