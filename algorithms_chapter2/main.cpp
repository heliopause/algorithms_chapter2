//
//  main.cpp
//  algorithms_ch2_insertion_sort
//
//  Insertion Sort
//  Introduction to Algorithms (3rd Edition) - CLRS
//  Chapter 2, page 39
//
//  Created by Justin on 2/2/13.
//  Copyright (c) 2013 Justin. All rights reserved.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[])
{
    std::vector<int> vectorToSort = { 5, 2, 4, 6, 1, 3 };
    
    std::cout << "Original vector\n";
    for( std::vector<int>::const_iterator iter = vectorToSort.begin();
        iter != vectorToSort.end(); ++iter ) {
        std::cout << *iter << std::endl; }
    
    // insertion sort algorithm
    for( int jj = 1; jj != vectorToSort.size(); ++jj ) {
        int keyElement = vectorToSort[jj];
        int ii = jj - 1;
        while( (ii >= 0) && (vectorToSort[ii] > keyElement) ) {
            vectorToSort[ii + 1] = vectorToSort[ii];
            --ii; }
        vectorToSort[ii + 1] = keyElement;
        for( std::vector<int>::const_iterator iter = vectorToSort.begin();
            iter != vectorToSort.end(); ++iter ) {
            std::cout << *iter << " "; }
        std::cout << std::endl; }
    
    std::cout << "Sorted vector\n";
    for( std::vector<int>::const_iterator iter = vectorToSort.begin();
        iter != vectorToSort.end(); ++iter ) {
        std::cout << *iter << std::endl; }
    
    return 0;
}

