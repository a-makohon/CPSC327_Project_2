/*
 * utils.cpp
 *
 *  Created on: Sep 23, 2020
 *      Author: austin
 */
#include "../includes/utils.h"

using namespace std;

//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE

//sorts vector inplace based on mySortOrder (inplace means the vector is modified)
//returns nothing
void sortData(const SORT_ORDER &mySortOrder,vector<process> &myProcesses){

}

//gets the next process from the vector, then removes it from the vector
//returns removed process
process getNext(vector<process> &myProcesses){
	process p;
	return p;
}

//returns the number of entries in the vector
int getSize(vector<process> &myProcesses){
	return UNIMPLEMENTED;
}

//attempt to correct missing data
//if cannot correct, then drop row
//return number of rows in myProcesses
int handleMissingData(vector<process> &myProcesses){
	return NO_DATA_TO_WORK_ON;
}
