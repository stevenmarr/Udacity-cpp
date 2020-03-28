#include <iostream>
using std::cout;

int main() {
    // for loops
    for (int i=0; i < 5; i++) {
      cout << i << "\n";
    }
}

#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    // Creating a 2D vector.
    vector<vector<int>> v {{1,2}, {3,4}};
    cout << "Great! A 2D vector has been created." << "\n";
}

#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    // Declare and initialize v using auto here.
    vector v = {7, 8, 9, 10};
}

#include <iostream>
using std::cout;

int main() {
    // Add your code here.
    for (int i = -3; i < 11; i++) {
        cout << i << "\n";
    }
}

//1-16
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    // Add your code here.
    vector<vector<int>> b {{1, 2},
                           {3, 4},
                           {5, 6}};
    int heigth_b = b.size() - 1;// determine "height" of vector
    for (int i = 0; i <= heigth_b; i++)// use height value to create first for loop
        {
        int width_b = b[i].size() - 1;// determine "width" of vector
        for (int j = 0; j <= width_b; j++)// use width value to iterate through second vector
            {
            cout << b[i][j] << "\n";
            }
        }
    // Write your double loop here.
}
//INSTRUCTOR SOLUTION
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    // Add your code here.
    vector<vector<int>> b {{1, 2},
                           {3, 4},
                           {5, 6}};

    // Write your double loop here.
    for(auto v : b) {
        for(int i : v) {
            cout << i << " ";
        }
        cout << "\n";
    }
}
//1-17

#include <iostream>
#include <vector>
using std::cout;
using std::vector;


int AdditionFunction(vector<int> v)
{
    int sum = 0;
    for (int i : v)
    {
        sum = sum + i; // sum += i;
    }
    return sum;
}
// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.


int main() 
{
    vector<int> v {1, 2, 3};
    
    // Uncomment the following line to call your function:
    cout << AdditionFunction(v) << "\n";
}
//INSTRUCTOR SOLUTION - USING ITERATOR POINTER
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.
int AdditionFunction(const vector<int> &v)
{
    int sum = 0;
    for(auto i = v.begin(); i != v.end(); ++i) // i is an iterator type object pointer not a value
        sum += *i; //de reference the iterator to return its value
    return sum;
}

int main() 
{
    vector<int> v {1, 2, 3};
    
    // Uncomment the following line to call your function:
    cout << AdditionFunction(v) << "\n";
}

//ACCUMULATE METHOD
#include <iostream>
#include <vector>
#include <numeric>
using std::cout;
using std::vector;

// Define a function "AdditionFunction" here.
// Instead of just two ints, this function should accept a vector<int> 
// as the argument, and it should return the sum of all the ints in the vector.
int AdditionFunction(const vector<int> &v)
{
    return std::accumulate(v.begin(), v.end(), 0); //Vector begin, plus end with ,starting accumulator of 0
}

int main() 
{
    vector<int> v {1, 2, 3};
    
    // Uncomment the following line to call your function:
    cout << AdditionFunction(v) << "\n";
}
//1-19
#include <iostream>
using std::cout;

int main() 
{
    auto i = 1;
    while (i <=10){
        i++;
        if (i % 2 == 0){
            cout << i << "\n";
        }
    }
    // Write your code here.

}
// FILE OPEN AND READ
#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream my_file;
    my_file.open("files/1.board");
    if (my_file) {
        std::cout << "The file stream has been created!" << "\n";
        std::string line;
        while (getline(my_file, line)) {
            std::cout << line << "\n";
        }
    }
}

