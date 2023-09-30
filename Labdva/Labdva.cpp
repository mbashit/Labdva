// Labdva.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"

int main()
{
    TList myList;
    init(myList);

    // Add elements to the list
    addToHead(myList, 10.5);
    addToHead(myList, 20.7);
    addToHead(myList, 30.5);
    addToHead(myList, 20.7);
    addToHead(myList, 40.2);

    // Print the list
    print(myList);

    // Count the maximum elements in the list
    int maxCount = countMaxElements(myList);
    std::cout << "Number of maximum elements in the list: " << maxCount << std::endl;

    // Clean up the list
    clear(myList);

    return 0;
}
