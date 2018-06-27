#include <iostream>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

vector<int> numList;

int NumGenerator(int max, int min){
     int n = (max - min + 1);
     int random = rand()%n + 1;

     return random;
}

void arrayFiller(int max, int min, vector<int> &numList){

    numList.resize(NumGenerator(max, min));

    for (int i = 0; i < numList.size(); i++){

        numList [i] = NumGenerator(max, min);
    }


}

void arrayFiller2(int max, int min, vector<int> &numList){

    while (NumGenerator(1, 1000)%50 != 0){
        numList.push_back (NumGenerator(max, min));
    }
}

void popArrayFiller (int max, int min, vector<int> &numList){

    while (numList.size()!=0){
            cout << numList.back() << endl;
            numList.pop_back();
    }

}

void printArray (const vector<int> &numList){

    vector<int>::const_iterator itr;

    for (itr = numList.begin(); itr != numList.end(); itr++){
        cout << *itr << endl;

    }
}

void printArrayEleven (const vector<int> &numList){

    for (const int& i:numList){
        cout << i << endl;
    }
}

void insertValues (int max, int min, vector<int> &numList){

    vector<int>::iterator itr;

    for (itr = numList.begin(); itr != numList.end(); itr++ ){

        if (NumGenerator(3,1) == 1){
                numList.insert (itr, NumGenerator(max, min));

        }
    }
}

void deleteValues (int max, int min, vector<int> &numList){

    vector<int>::iterator itr;

    for (itr = numList.begin(); itr!= numList.end(); itr++){

        if (NumGenerator(1,2) == 2){
            numList.erase(itr);
        }
    }
}

void replaceValues (int max, int min, vector<int> &numList){

    vector<int>::iterator itr;

    for (itr = numList.begin(); itr != numList.end(); itr++){

        if (NumGenerator(1,3) == 1){

            *itr = NumGenerator(max, min);
        }
    }

}


int main(){

    srand(time(NULL));
    vector<int> numList;
    vector<int> numList2;
    int max;
    int min;

    // asks for user input
    cout << "Enter Minimum value: ";
    cin >> min;

    cout << "Enter Maximum value: ";
    cin >> max;

    //prints the first array values using using first function
    cout << endl << endl << "first array values" << endl;

    arrayFiller(max, min, numList);
    printArray (numList);

    //print second array values using second function
    cout << endl << endl << "Array 2 values: " << endl;

    arrayFiller2 (max, min, numList2);
    printArray (numList2);

    //prints the first arrrays with different values (chyanged by insert function)
    cout << endl << endl << "new array 1 values: " << endl;

    insertValues(max, min, numList);
    printArray(numList);


    return 0;

}




