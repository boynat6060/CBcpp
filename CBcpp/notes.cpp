#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    //for loop for printing an array
    int myNum[7] = {5,7,6,4,0,1,8};
    for (int i = 0; i < 7; i++) {
        //FOR loop increments i, so you use i as the index number.
        cout << myNum[i] << endl;
    }
    cout << "\n" << "clear\n" << "\n";
    for (int i : myNum) {
        //FOREACH loop puts the value of each index on I.  You just print i, not array[i].
        cout << i << endl;
    }

    //arrays can be defined with a given length - array[5] OR without a lengh - array[].  
    //if you do not define a length, you can not assign values to indexes later, it must be done at declaration.
    //the curly brace comma list is called an Array Literal.
    //remember index begins at 0
    //these are the same:
    int testNum[5] = {1,2,3,4,5};
    int testNum2[] = {1,2,3,4,5};

    //sizeof(array) returns the number of bytes in that array, not the number of elements.
    //divide sizeof(array) by sizeof(array[0]) to get number of elements.
    //this works because you are dividing the total btyes by the amount of bytes in one element.
    int sizeTest1 = sizeof(testNum);
    int arrayLength = sizeof(testNum) / sizeof(testNum[0]);
    cout << "testNum is " << sizeTest1 << ".  The array has " << arrayLength << " elements." << endl;

    /*
    Multi-dimension arrays:  array[numRow][numCol]
    You can have more than 2 dimensions:  array[numLay][numRow][numCol]...
    Each array literal contains its own array literal.
    see following ex:
    */
    int twoDimArr[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
    };
    int threeDimArr[3][2][4] {
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    },
    {
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    },
    {
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    }
    };

    //you must use an index for every dimension to access an element.
    //remember index begins at 0
    cout << twoDimArr[0][1] << endl;
    cout << threeDimArr[2][1][3] << endl;

    cout << endl << endl << endl;
    
    //you can loop thru a multi dimension array with nested loops

    for (int i = 0; i < 2; i++) {
        for (int e = 0; e < 3; e++) {
            cout << twoDimArr[i][e];
        }
        cout << endl;
    }



    //main func should end with return 0.
    return 0;
    }