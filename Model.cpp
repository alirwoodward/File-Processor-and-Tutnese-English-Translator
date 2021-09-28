//Ali Woodward
//23857188
//alwoodward@chapman.edu
//CPSC 350-03
// Assignment 2


#include "Model.h"
#include "FileProcessor.h"
#include "Translator.h"


//default constructor
Model::Model(){
  //default constructor body - empty
}

// deconstructor
Model::~Model(){
  //deconstuctor - empty
}

//method to translate a single letter
// contains if statements to translate the letter accordingly
string Model::translateSingleCharacter(char letter){
  string newLetter = "";
  newLetter += letter;
  if(tolower(letter) == 'b' || tolower(letter) == 'p' || tolower(letter) == 'y' || tolower(letter) == 'z'){
    newLetter += "ub";
  }else if(tolower(letter) == 'c' || tolower(letter) == 'h'){
    newLetter += "ash";
  }else if(tolower(letter) == 'd'){
    newLetter += "ud";
  }else if(tolower(letter) == 'f'){
    newLetter += "uf";
  }else if(tolower(letter) == 'g' || tolower(letter) == 'r'){
    newLetter += "ug";
  }else if(tolower(letter) == 'j'){
    newLetter += "ay";
  }else if(tolower(letter) == 'k'){
    newLetter += "uck";
  }else if(tolower(letter) == 'l'){
    newLetter += "ul";
  }else if(tolower(letter) == 'm'){
    newLetter += "um";
  }else if(tolower(letter) == 'n'){
    newLetter += "un";
  }else if(tolower(letter) == 'q'){
    newLetter += "uack";
  }else if(tolower(letter) == 's'){
    newLetter += "us";
  }else if(tolower(letter) == 't'){
    newLetter += "ut";
  }else if(tolower(letter) == 'v'){
    newLetter += "uv";
  }else if(tolower(letter) == 'w'){
    newLetter += "ack";
  }else if(letter == 'X'){
    newLetter = "Ex";
  }else if(letter == 'x'){
    newLetter = "ex";
  }else{
    newLetter += "";
  }

  return newLetter;
}

//method to translate two of the same letters in a row
string Model::translateDoubleCharacter(char doubleLetter){
  string newDoubleLetter = "";

  string capitalConsonants = "BCDFGHJKLMNPQRSTVWXYZ";
  string capitalVowels = "AEIOU";

  for(int i = 0; i < capitalConsonants.size(); ++i){
    if(capitalConsonants[i] == doubleLetter){
      newDoubleLetter = "Squa" + translateSingleCharacter(tolower(doubleLetter));
    }

    if(tolower(capitalConsonants[i]) == doubleLetter){
      newDoubleLetter = "squa" + translateSingleCharacter(doubleLetter);
    }
  }

  for(int a = 0; a < capitalVowels.size(); ++a){
    if(capitalVowels[a] == doubleLetter){
      newDoubleLetter = "Squat" + translateSingleCharacter(tolower(doubleLetter));
    }

    if(tolower(capitalVowels[a]) == doubleLetter){
      newDoubleLetter = "squat" + translateSingleCharacter(doubleLetter);
    }
  }

  return newDoubleLetter;

}
