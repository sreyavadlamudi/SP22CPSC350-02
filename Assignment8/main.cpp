//This is the main program

#include "Bubble.h"
#include "Selection.h"
#include "Merge.h"
#include <iostream>
#include <chrono>



using namespace std::chrono;
using namespace std;
//
// /*
// Main
// The main method calls all the functions in order to execute them
// @param it takes in argc and argv in order to allow the user to add input as the command line arguments
// @return the return type is void so the function does not return anything
// */



int main(int argc, char **argv){
    Merge converter3;
    converter3.ArrayMaker(argv[argc-1]);
    cout<<endl;


    Bubble converter;
    auto begin1 = high_resolution_clock::now();
    converter.bubbleSort(argv[argc-1]);
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(end1 - begin1);
    cout << "Start time of Bubble Sort: " << duration_cast<microseconds>(begin1.time_since_epoch()).count() << endl;
    cout << "End time of Bubble Sort: " << duration_cast<microseconds>(end1.time_since_epoch()).count() << endl;
    cout << "Time taken by Bubble sort: " << duration1.count() << " microseconds" << endl;
    cout<<endl;

    Selection converter2;
    auto begin2 = high_resolution_clock::now();
    converter2.selectionMethod(argv[argc-1]);
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(end2 - begin2);
    cout << "Start time of Selection Sort: " << duration_cast<microseconds>(begin2.time_since_epoch()).count() << endl;
    cout << "End time of Selection Sort: " << duration_cast<microseconds>(end2.time_since_epoch()).count() << endl;
    cout << "Time taken by Selection sort: " << duration2.count() << " microseconds" << endl;
    cout<<endl;

  return 0;
}
