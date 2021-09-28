// Ali Woodward
// 2385718
// alwoodward@chapman.edu
// CPSC 350-03
// Assignment 2

// main method
// This file contains the main method and includes all user defined header files

#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"

//main method that takes in input file and output file through the command line
int main(int argc, char** argv){

  FileProcessor fp;

  //sends input arguments to method 'processType' in the FileProcessor class to process the file based on argv[3]
  fp.processType(argv[1],argv[2],argv[3]);

  return 0;
}
