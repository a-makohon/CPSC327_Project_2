/*
 * fileio.h
 *
 *  Created on: Sep 23, 2020
 *      Author: austin
 */

#ifndef INCLUDES_FILEIO_H_
#define INCLUDES_FILEIO_H_

#include <vector>
#include "constants.h"


int loadData(const std::string filename, std::vector<process> &myProcesses);
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif /* INCLUDES_FILEIO_H_ */
