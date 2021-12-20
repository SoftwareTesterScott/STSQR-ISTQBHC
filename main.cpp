
/*****************************************************************************
Software licenced under GPL v3 with an additional restriction any modified
code must maintain attribution of sources of Quizes to ISTQB

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

******************************************************************************/


using namespace std;
#include <iostream>
#include <iomanip>




/*
// TODO Future release: Add parameters ask questions to check valid answers as int: 4 = ABCD 5 = ABCDE

//TODO: Make getAnswerAsUppercase, NOTE: changing will make dead code


/*

Changelog

v1.1.0
  MAT Exam Added with justifications
  CTFL A Justifications added
  Exams split into seperate files

v1.0.0 initial release
*/


// Advanced Level Test Automation Exam version 2016
extern int  processAL_TAEv2016Exam(); 

// Foundation Level Sample Exam A version 1.6
extern int  processCTFL_A_v1p6Exam();

// Foundation Level Mobile Application Tester v1.1
extern int  processFL_MATv1p1Exam();

// Advanced Level Security Tester version GA March 2016
extern int  processAL_SECv2016Exam();

// Foundation Level Usability Tester version 2018
extern int processFL_UTv2018Exam();

/*
   Program Requirements

  1) Shall allow a user to sit ISTQB (Internation Software Testing Qualification
  Board) sample exams

   1.1) CTFL Sample Exam A v1.6     ----------------[Done]
   1.2) CTFL Sample Exam B v1.3
   1.3) CTFL Sample Exam C v1.2
   1.4) Test Automation Engineer    ----------------[Done]
   1.5) Mobile Application Tester   ----------------[Done]
   1.6) Security                    ----------------[Done]
   1.7) Gambling Industry Tester Specialist
   1.8) Foundation level usability tester
   1.9) Acceptance
   1.10) ALTA  v1.3
   1.11) ALTTA
   1.12) ATLM
   1.13) Automotive


  2) Should not have undue dependencies on packages when building code
     (This is implemented in the command line, it is assumed a user will
      have a console with scrollable screen and can display around 110 (subject
      to change) characters wide
    2.1) The terminal may print a size guide to allow users to configure screen
         before sitting exam in case there are ASCII drawings that do not wrap

  3) To allow student to efficiently study mistakes, should print relevant
     information on questions which were answered incorrectly
    3.1) Question number which was incorrect
    3.2) Learning Objective for the incorrect questions
    3.3) Justification to the correct answer

  4) Published exams shall be taken as correct. One question i found, i felt another
     answer was better than the one published and the document appeared inconsistent.
     This software will be made to match the exam, so someone sitting will have the same
     questions and answers as if the documents were downloaded and printed.


*/




/*
 Program Design
 
 main.cpp holds all the logic for main menu, licence, common areas

 control is handed to the above functions for them to present their
 exam, print out any details of questions answered incorrectly and
 return control



*/


// A getAnswer Method with 



char getAnswer(){
  string s;
  char answer = ' ';
  cout << "?";
  cin >> s;
  return s.at(0);
}

// return any lowercase letters as uppercase. TODO: use addition to modify char
char getAnswerAsUppercase(){
  char answer = getAnswer();
  
  switch (answer) {
    case 'a': return 'A';
    case 'b': return 'B';
    case 'c': return 'C';
    case 'd': return 'D';
    case 'e': return 'E';
    case 'f': return 'F';
    case 'g': return 'G';
    case 'h': return 'H';
    case 'i': return 'I';
    case 'j': return 'J';
    case 'k': return 'K';
    case 'l': return 'L';
    case 'm': return 'M';
    case 'n': return 'N';
    case 'o': return 'O';
    case 'p': return 'P';
    case 'q': return 'Q';
    case 'r': return 'R';
    case 's': return 'S';
    case 't': return 'T';
    case 'u': return 'U';
    case 'v': return 'V';
    case 'w': return 'W';
    case 'x': return 'X';
    case 'y': return 'Y';
    case 'z': return 'Z';
  }
  return answer;
}

char getValidatedAnswerAsUppercase(int numberOfValidResponses){
// EG: if 4, only allow an A,B,C or D answer, if 5, only allow A,B,C,D or E.
  char answer = getAnswerAsUppercase();

  if (numberOfValidResponses == 4) {
    // While answer Not (A or B or C or D)
    while ( !((answer == 'A') || (answer == 'B') || (answer == 'C') || (answer == 'D'))){
     cout << "ABCD" ;
      answer = getAnswerAsUppercase();
    } 
    
  }
  
    // While answer Not (A or B or C or D)
  else if (numberOfValidResponses == 5){
    while ( !((answer == 'A') || (answer == 'B') || (answer == 'C') || (answer == 'D')|| (answer == 'E'))){
     cout << "ABCDE" ;
      answer = getAnswerAsUppercase();
    } 
  
  }
  else {
  cout << "XXXXXXXXXXXXXXXXXXX Attempting to getValidatedAnswerAsUppercase with wrong number of valid responses. Only 4 (ABCD) or 5(ABCDE) currently implemented" << endl;
  }
  return answer;
}







int processSampleSingleAnswerQuestion(){
  cout << endl<< endl<< endl<< endl<< endl;
    cout <<" This is a sample single answer question. The data input method allows multiple characters to be typed before enter, although only the first character counts. EG: AB<return> would count as A" << endl ; 

  
  cout << "Single Answer Question:"<< endl;
  cout << ""<< endl;
  cout << "How many letters are in the word 'Tester'?"<< endl;
  cout << ""<< endl;
  cout << "a) 1"<< endl;
  cout << "b) 2"<< endl;
  cout << "c) 9"<< endl;
  cout << "d) 6"<< endl;
  cout << ""<< endl;
  cout << "Type in A, B, C, or D and press enter. "<< endl;
    
  char Answer = getAnswer();
    
  if (Answer == 'D')
    return 1;
  else if (Answer == 'd')
    return 1;  
  else return 0;
}

int processSampleMultiAnswerQuestion(){
  cout << endl<< endl<< endl<< endl<< endl;
  cout <<"Now we we'll move onto a Multi answer Question. This requires giving two answers " << endl << endl;    
  cout <<" This is a multiple answer question. The data input method still allows multiple characters to be typed before enter, although only the first character counts. EG: \"AB\"<return> would count as \"A\". To answer using the choices A and B, type \"A\" <return> and then \"B\" <return> " << endl  ;
    cout << "Sample Multi Answer Question"<< endl;
  cout << ""<< endl;
  cout << "Choose the answers with numbers greater than 30 ?"<< endl;
  cout << ""<< endl;
  cout << "a) 35"<< endl;
  cout << "b) 40"<< endl;
  cout << "c) 14"<< endl;
  cout << "d) 2"<< endl;
  cout << ""<< endl;
  cout << "Type in A, B, C, or D and press enter to give the first answer, then Type in A, B, C or D and press enter to give the second answer. The Order of answers provided is not important. "<< endl;
    
  char Answer1 = getAnswer();
    
  char Answer2 = getAnswer();


  if (((Answer1 == 'A') || (Answer1 == 'a')) && ((Answer2 == 'B') || (Answer2 =='b')) || 
      ((Answer1 == 'B') || (Answer1 == 'b')) && ((Answer2 == 'A') || (Answer2 =='a')))
    return 1;
  else return 0;
}













  



void printShortLicenceInfo(){
// print same licencing info for startup and for licencing page.
  cout << "STSQR-ISTQBHC : SoftwareTesterScott QuizRunner - ISTQB Hardcoded. A program to assist students allowing sitting ISTQB sample exams electronically." << endl;
  cout << "Version 1.2.0 Released 5Dec2021:  Copyright (C) 2021 SoftwareTesterScott  SoftwareTesterScott@gmail.com" << endl;
  cout << "Software licenced under GPL v3 with an additional restriction any modified code must maintain attribution of sources of Quizes to ISTQB" << endl; 

  cout << "    This program comes with ABSOLUTELY NO WARRANTY; " << endl;
  cout << "    This is free software, and you are welcome to redistribute it " << endl;
  cout << "    under certain conditions; type `A' and press return for details. " << endl;
 


}


void printIntroduction(){
  printShortLicenceInfo();
  cout << "----------------------------------------------------------------------------------------------------------"<< endl;
  cout << " If this is your first run of the program, i highly recommending sitting the sample exam first to get used to the interface" << endl;
  cout << " Using a terminal window size atleast 107 x 30 is recommended. The line just above is 107 chars wide" << endl;
  cout << endl;
   
}


void printLicencingAndCopyright(){
  

  cout << "Program release under GPL v3 with additional restriction that the following text is displayed on program start, even on programs modified from this release \"Software licenced under GPL v3 with an additional restriction any modified code must maintain attribution of sources of Quizes to ISTQB\"" << endl;
  cout << "----------------------------------------------------------------------------------------------------------"<< endl;

  printShortLicenceInfo();
  
  
  cout << "" << endl;
  cout << "Copyright (C) 2021  SoftwareTesterScott. SoftwareTesterScott@gmail.com " << endl;

  cout << "    This program is free software: you can redistribute it and/or modify" << endl;
  cout << "    it under the terms of the GNU General Public License as published by" << endl;
  cout << "    the Free Software Foundation, either version 3 of the License, or" << endl;
  cout << "    (at your option) any later version." << endl;

  cout << "    This program is distributed in the hope that it will be useful," << endl;
  cout << "    but WITHOUT ANY WARRANTY; without even the implied warranty of" << endl;
  cout << "    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the" << endl;
  cout << "    GNU General Public License for more details." << endl;

  cout << "    You should have received a copy of the GNU General Public License" << endl;
  cout << "    along with this program.  If not, see <https://www.gnu.org/licenses/>. " << endl;
 
  cout << endl << "If you have found this program useful, please consider buying me a coffee as thanks via https://www.buymeacoffee.com/SoftwareTesterS " << endl;
    
}

void printMainMenu(){
  cout << "Menu" << endl;
  cout << "----------------------------------------------------------------------------------------------------------"<< endl;
  cout << "Choose an option to start" << endl;
  cout << "A Display Licencing and Copyright Statement" << endl; 
  cout << "B Sample Quiz" << endl; 
  cout << "C CTFL Exam A" << endl;
  cout << "D CTFL Exam B (not yet implemented)" << endl;
  cout << "E CTFL Exam C (not yet implemented)" << endl;
  cout << "F AL-TAE (Advanced Level - Test Automation Engineer)" << endl;
  cout << "G FL-MAT (Foundation Level - Mobile Application Tester)" << endl;
  cout << "H AL-SEC (Advanced Level - Security Tester)" << endl;
  cout << "I FL-UT (Foundation Level - Usability Tester)" << endl;
  
  cout << "Q Quit "<< endl;
  
}


int  processSampleQuiz(){

  int singleAnswerQuestionScore = processSampleSingleAnswerQuestion();




  if (singleAnswerQuestionScore == 1)
    cout << "You answered the single answer sample question correctly" << endl;    
  else
    cout << "You answered the single answer sample question incorrectly" << endl << endl;    




   int multiAnswerQuestionScore = processSampleMultiAnswerQuestion();
  if (multiAnswerQuestionScore == 1)
    cout << "You answered the multiple answer sample question correctly" << endl;    
  else
    cout << "You answered the multiple answer sample question incorrectly" << endl << endl;    


  return 0;
}


int main(int argc, char* argv[]) {

  printIntroduction();

  char input = ' ';
  
  while ((input != 'Q') && ( input != 'q')){
  cout << "Press \"M\" and then enter for main menu \"Q\" and then enter to quit" << endl;  
    input = getAnswer();
// A licencing and copyright statement.
    if ((input == 'A') || (input == 'a')) printLicencingAndCopyright();
    else if ((input == 'B') || (input == 'b')) processSampleQuiz();
    else if ((input == 'C') || (input == 'c')) processCTFL_A_v1p6Exam();
    else if ((input == 'F') || (input == 'f')) processAL_TAEv2016Exam();
    else if ((input == 'G') || (input == 'g')) processFL_MATv1p1Exam();
    else if ((input == 'H') || (input == 'h')) processAL_SECv2016Exam();
    else if ((input == 'I') || (input == 'i')) processFL_UTv2018Exam();
    
    else if ((input == 'M') || (input == 'm') || (input =='?')) printMainMenu();
    else if ((input == 'Q') || (input == 'q')) cout << "Quitting" << endl;
    else cout << "Unrecognised command. Press \"M\" and then enter for main menu \"Q\" and then enter to quit" << endl;
  }
  cout << "If you have found this program useful, please consider buying me a coffee as thanks via https://www.buymeacoffee.com/SoftwareTesterS " << endl;


}
