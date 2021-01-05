// size_capacity.cpp
// Vector size versus capacity

#include <vector>
#include <iostream>

using namespace std;

int main()
{
//Exercise 2.1
/* Difference between vector's size and vector's capacitor:
1. Vector's size: is that the vec.size() function returns the current number of
                  elements in the container vec.
2. Vector's capacity: is that the vec.capacity() function returns the maximum number of elements that can
                    be inserted into the container vec without reallocation.
*/

/*The vector's capacity grows "double way" depending on the given data type. The
the capacity of the vector will first be zero then grow double everytime as when the vector is full and memory is needed
(memory allocation).
*/
    vector<int> vec;
    cout << "vec: size: " << vec.size()
         << " capacity: " << vec.capacity() << endl;

    for(int i = 0; i < 24; i++) {
        vec.push_back(i);
        cout << "vec: size: " << vec.size()
             << " capacity: " << vec.capacity() << endl;
    }

    return 0;
}
