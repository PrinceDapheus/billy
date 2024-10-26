
// demostrate the usage of overlaoding operator +
//



#include <iostream>
using namespace std;
#include <vector>


class computer{



    public:
     
    // declare vector and size

    vector<int>list;
    int size = 3;
  



  

    //parameterized constructor

    computer (int value = 0){


        for (int x = 0 ; x < size; x++ ){

            //list[x] = v
            list.push_back(value);
        }

    }

    //copy constructor


    computer (computer const & obj1){

        list = obj1.list;
        size = obj1.size;
    


    }



 

    void print (){


     for(auto i : list){

        cout << i << " ";
     }

     cout<< endl;

     cout << "------------" <<endl;

    }


    computer operator+ (computer const &obj2){
 
    computer result(0);

    for (int x = 0 ; x < size ; x++){

       result.list[x]=  list[x] + obj2.list[x];

    }
        return result;

    }




};





int main() {

    computer c1 (5);
    computer c2 (1);
    computer c3;

    c3 = c1 + c2;

    c1.print();
    c2.print();
    c3.print();



    return 0;

}


