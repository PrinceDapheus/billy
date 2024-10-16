
// vector
// String
// Algorithm
// Iterators




#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// class computer {





// };


int main(){



vector <int> num = { 3 , 76 , 0 , 60 , 25 };


    for ( auto i : num) {


        cout << i << " ";
    }

cout << "-------" <<endl;


auto maxNum = max_element (num.begin() , num.end());

cout << "Max Number is : "<< *maxNum <<endl;
 


    return 0;

}