
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


// numberOfValidResponses ==4 for ABCD and 5 for ABCDE.
extern char getValidatedAnswerAsUppercase(int numberOfValidResponses);



void printFL_UTv2018Question1(){
  cout << " Question #1 (1 point) Which of the following is true? " << endl;
  cout << endl;

  cout << "A. Usability deals with specified users achieving specified goals in a specified context of use with a software product; User experience deals with a person’s perceptions and responses resulting from using the software product. " << endl;
  cout << "B. Usability is measured in terms of effectiveness, efficiency and satisfaction; Accessibility deals with a person’s perceptions and responses resulting from using the software product. " << endl;
  cout << "C. User experience deals with specified users achieving specified goals in a specified context of use with a software product; Usability deals with a person’s perceptions and responses resulting from using the software product." << endl;
  cout << "D. User experience deals with a person’s perceptions and responses resulting from using the software product; accessibility deals with a person’s emotions, beliefs and perceptions. " << endl;
  cout << endl;
}

int processFL_UTv2018Question1(){
  cout << endl << endl << endl << endl << endl;

  printFL_UTv2018Question1();

  cout << endl;
  char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer == 'A')   
    return 1;
  else return 0;  
}

void processFL_UTv2018Question1Incorrect(){
  printFL_UTv2018Question1();

  cout << "1 A A is correct. B is incorrect. The usability definition is correct, but the second part refers to user experience, not accessibility. C is incorrect. The first part is Usability and the second part is user experience. D is incorrect. Both parts refer to user experience. UTFL-1.1.1 "<< endl;
  cout << endl;
}











void printFL_UTv2018Question2(){
  cout << " Question #2 (1 point) Which of the following is a reasonable goal of accessibility evaluation? " << endl;
  cout << endl;

  cout << "A. To ensure that within a specific context of use, anyone can use the software " << endl;
  cout << "B. To verify that the external influencing factors, such as presentation, are working effectively for the overall user experience" << endl;
  cout << "C. To ensure learnability of the software" << endl;
  cout << "D. To verify that the software is usable by people with specific disabilities" << endl;
  cout << endl;
}


int processFL_UTv2018Question2(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question2();

  char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer == 'D')   
    return 1;
  else return 0;  

}

void processFL_UTv2018Question2Incorrect(){
   printFL_UTv2018Question2();

  cout << "2 D D is correct. A is not correct, this is a usability test. B is not correct, this is a factor in user experience. C is not correct, this is a factor in user experience. UTFL-1.1.2 "<< endl;
  cout << endl;
}








void printFL_UTv2018Question3(){
  cout << " Question #3 (1 point) You are conducting an evaluation that includes the online purchase, the download and installation, the actual use, and the support the customer receives from the call center for a given product. What type of evaluation are you conducting? " << endl;
  cout << endl;

  cout << "A.Usability " << endl;
  cout << "B.User experience" << endl;
  cout << "C.Accessibility" << endl;
  cout << "D.Usability and User experience" << endl;
  cout << endl;
}


int processFL_UTv2018Question3(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question3();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  
}
void processFL_UTv2018Question3Incorrect(){
  printFL_UTv2018Question3();

  cout << "3 B B is correct. These evaluation areas are included only for the user experience evaluation. UTFL-1.2.1"<< endl;
  cout << endl;
}









void printFL_UTv2018Question4(){
  cout << " Question #4 (1 point) You are asked to evaluate the usability of a specialized medical software application. Due to time and budget constraints, it is not possible to include users in the evaluation process. Which of the following is a valid approach for evaluating the usability in this case? " << endl;
  cout << endl;

  cout << "A.Accessibility Evaluation " << endl;
  cout << "B.Usability testing" << endl;
  cout << "C.User surveys" << endl;
  cout << "D.Usability Review" << endl;
  cout << endl;
}


int processFL_UTv2018Question4(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question4();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='D')   
    return 1;
  else return 0;  
}

void processFL_UTv2018Question4Incorrect(){
  printFL_UTv2018Question4();

  cout << "4 D D is correct. The usability review includes expert-based approaches, which do not necessarily require users to be involved. A is incorrect. An accessibility evaluation, just like a usability evaluation, may use one of the three other mentioned approaches. B is incorrect. Usability testing definitely needs users to be performed C is incorrect. User surveys, as the name states, needs users to answer the survey. UTFL-1.2.2"<< endl;
  cout << endl;
}









void printFL_UTv2018Question5(){
  cout << " Question #5 (1 point) In a project that is employing usability evaluation practices, which of the following should come first? " << endl;
  cout << endl;

  cout << "A.Formative testing " << endl;
  cout << "B.Summative testing" << endl;
  cout << "C.Formative and summative should occur at the same time during requirements gathering" << endl;
  cout << "D.Formative and summative should occur at the same time during design" << endl;
  cout << endl;


}




int processFL_UTv2018Question5(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question5();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='A')   
    return 1;
  else return 0;  

}



void processFL_UTv2018Question5Incorrect(){
   printFL_UTv2018Question5();

  cout << "5 A A is correct. Formative is designed to identify and analyze usability problems and is a qualitative technique that is used during design. Summative is focused on obtaining measurements and is quantitative in nature and is used after the product has been released to production (or near to release). UTFL-1.2.3"<< endl;
  cout << endl;
}







void printFL_UTv2018Question6(){
  cout << " Question #6 (1 point) Which of these basic approaches to a software development project follows all key elements of human- centered evaluation?  " << endl;
  cout << endl;

  cout << "A.Define requirements, develop the software, and perform acceptance test " << endl;
  cout << "B.Interview users, iteratively develop prototypes, and evaluate the software" << endl;
  cout << "C.Iteratively develop prototypes, perform expert reviews, and integrate found issues" << endl;
  cout << "D.Interview users, develop the software, and perform acceptance test" << endl;
  cout << endl;
}

int processFL_UTv2018Question6(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question6();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  
 
}

void processFL_UTv2018Question6Incorrect(){
  printFL_UTv2018Question6();

  cout << "6 B B is correct. This approach takes all three key elements into consideration: Users are included, prototypes are iteratively developed and evaluated. A is incorrect. Besides acceptance tests, this approach completely misses all three key elements: Users are only included at the end, no prototypes are developed, and no evaluation is happening. C is incorrect. Although this approach takes the prototyping aspect and the evaluation into consideration, no users are included in the process D is incorrect. This approach may take the users and evaluation aspects into consideration, but no prototyping is happening. UTFL-1.3.1"<< endl;
  cout << endl;
}








void printFL_UTv2018Question7(){
  cout << " Question #7 (1 point) What is the purpose of the evaluation step in the human-centered design process? " << endl;
  cout << endl;

  cout << "A.To reduce the need for requirements analysis " << endl;
  cout << "B.To simplify the design process" << endl;
  cout << "C.To allow the user to see and use versions of the software as it evolves" << endl;
  cout << "D.To implement feedback and improve the product until the usability requirements are achieved" << endl;
  cout << endl;
}

int processFL_UTv2018Question7(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question7();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='C')   
    return 1;
  else return 0;  
}

void processFL_UTv2018Question7Incorrect(){
  printFL_UTv2018Question7();

  cout << "7 C C is correct per the syllabus. The human-centered design process requires that the user be involved in all phases. They should see the software as it evolves and provide feedback that can be UTFL-1.3.2 incorporated into the design."<< endl;
  cout << endl;
}









void printFL_UTv2018Question8(){
  cout << " Question #8 (1 point) Which of the following are the best usability evaluation approaches for an agile software development lifecycle? " << endl;
  cout << endl;

  cout << "A.RITE, discount, weekly testing " << endl;
  cout << "B.RAD, informal and quick, monthly cycle testing" << endl;
  cout << "C.RUP, usability reviews, usability acceptance criteria" << endl;
  cout << "D.REST, formative, daily usability labs" << endl;
  cout << endl;
}

int processFL_UTv2018Question8(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question8();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='A')   
    return 1;
  else return 0;  
}

void processFL_UTv2018Question8Incorrect(){
  printFL_UTv2018Question8();

  cout << "8 A A is correct. Rapid Iterative Testing and Evaluation (RITE), informal and quick (discount) usability testing and usability testing conducted consistently on a weekly basis are evaluation approaches that are particularly well-suited for an agile environment. B is not correct because monthly cycle testing would not be fast enough for agile and RAD is a development process. C is not correct because the Rational Unified Process is a development process rather than a usability evaluation approach. D is not correct. REST is a communication protocol and not a usability evaluation approach. UTFL-1.3.3"<< endl;
  cout << endl;

}





void printFL_UTv2018Question9(){
  cout << " Question #9 (1 point) You have just purchased a new defect tracking tool but you are having some problems with the installation. You have called the customer support number and they helped you install the software but also said that you should have been able to figure it out yourself and told you to read the manual before you call them again. Given your experience, what type of risk has been realized? " << endl;
  cout << endl;

  cout << "A.Accessibility risk " << endl;
  cout << "B.User experience risk" << endl;
  cout << "C.Usability risk" << endl;
  cout << "D.Support risk" << endl;
  cout << endl;
}

int processFL_UTv2018Question9(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question9();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  
}

void processFL_UTv2018Question9Incorrect(){
  printFL_UTv2018Question9();

  cout << "9 B B is correct. This is a problem with the user experience which includes the entire user experience around the product, not just working with the product itself. A is not correct because this is not an accessibility risk. C is not correct because this is a user experience risk dealing with entire user experience, not just usability. D is not correct because the risk is not related to the supportability of the product but rather the people in the support department. UTFL-2.2.1"<< endl;
  cout << endl;
}








void printFL_UTv2018Question10(){
  cout << " Question #10 (1 point) Your company has developed a new printer that is meant to automatically configure itself when installed. Previous versions of the printer have had installation issues resulting in the printer either failing to install or installing incorrectly and disabling the color printing capability. When this occurred most people brought the printer back and demanded a refund even though the printer itself functioned correctly. Given this experience, what is a reasonable usability risk that should be tracked for the new printer release? " << endl;
  cout << endl;

  cout << "A. Users cannot figure out the installation issues and as a result they report their dissatisfaction to their friends on social media creating a negative image of the company " << endl;
  cout << "B. The user documentation is not sufficient to help with the installation issues and the support team is slow in answering the phone" << endl;
  cout << "C. The lack of color printing capability causes an accessibility issue for people who need color printing to be able to read certain medical forms" << endl;
  cout << "D. The lack of time available for the design team is causing poor usability design and analysis" << endl;
  cout << endl;
}


int processFL_UTv2018Question10(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question10();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='A')   
    return 1;
  else return 0;  
}

void processFL_UTv2018Question10Incorrect(){
  printFL_UTv2018Question10();

  cout << "10 A A is correct. This is risk in that the users cannot figure out how to install the software and spread their dissatisfaction to their friends. B is not correct because this is actually a user experience risk rather than a usability risk. C is not correct because this is an accessibility risk rather than a usability risk. D is not correct because this is a project risk. UTFL-2.2.2 "<< endl;
  cout << endl;
}








void printFL_UTv2018Question11(){
  cout << " Question #11 (1 point) Which of the following is a valid example of a user interface guideline? " << endl;
  cout << endl;

  cout << "A. The company logo must appear in the upper left corner of each page. Its position must be exactly the same as on the home page. Clicking the logo must cause the home page to be displayed. " << endl;
  cout << "B. Error messages must be constructive, precise, comprehensible and polite." << endl;
  cout << "C. Errors must be handled in a polite and tolerant way, never blaming the user for an error." << endl;
  cout << "D. The user interface must be suitable for the task." << endl;
  cout << endl;

}

int processFL_UTv2018Question11(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question11();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='A')   
    return 1;
  else return 0;  
 
}





void processFL_UTv2018Question11Incorrect(){
  printFL_UTv2018Question11();

  cout << "11 A A is correct. This example appears in the Syllabus, section 3.1. B is incorrect. This is a heuristic, not a user interface guideline. C is incorrect. This is the dialogue principle “Error tolerance”, it is not a user interface guideline. D is incorrect. This is the dialogue principle “Suitability for the task”, it is not a user interface guideline. UTFL-3.1.1"<< endl;
  cout << endl;

}








void printFL_UTv2018Question12(){
  cout << "  Question #12 (1 point) AWCAG guideline 1.1.1 says “Text Alternatives: Provide text alternatives for any non-text content so that it can be changed into other forms people need, such as large print, braille, speech, symbols or simpler language.” " << endl;
  cout << endl;
  cout << "Which of the following suggestions best illustrates the WCAG guideline?" << endl;
  cout << endl;

  cout << "A. Users should be able to easily magnify text up to 300%. " << endl;
  cout << "B. Images should include equivalent alternative text in the markup/code" << endl;
  cout << "C. Braille (embossed text for blind people) equivalents should be available for all text." << endl;
  cout << "D. For all text that is difficult to understand, a simplified text alternative should be offered." << endl;
  cout << endl;

}


int processFL_UTv2018Question12(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question12();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  
 
}


void processFL_UTv2018Question12Incorrect(){
  printFL_UTv2018Question12();

  cout << "12 B B is correct. This suggestion addresses images – that is, non-text content. The example is included in the Syllabus, section 3.2.2. It originates from http://www.w3.org/standards/webdesign/accessibility. A is incorrect. This suggestion addresses text, not “non-text content”. C is incorrect. This suggestion addresses text, not “non-text content”. D is incorrect. This suggestion addresses text, not “non-text content”. UTFL-3.2.1"<< endl;
  cout << endl;

 }
 





void printFL_UTv2018Question13(){
  cout << " Question #13 (1 point) Which of the following laws specifically requires private websites to be accessible to blind or visually impaired Internet users? " << endl;
  cout << endl;

  cout << "A.The Equality Act " << endl;
  cout << "B.The Americans with Disabilities Act" << endl;
  cout << "C.The Rehabilitation Act" << endl;
  cout << "D.Section 508" << endl;
  cout << endl;

}





int processFL_UTv2018Question13(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question13();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  

}
void processFL_UTv2018Question13Incorrect(){
  printFL_UTv2018Question13();

  cout << " 13 B B is correct. This is highlighted in the ADA regarding private websites. A is not correct. It does not specifically reference web sites. C is not correct. This act was enacted in 1973 and refers to Federal agencies. D is not correct because it has a more general focus that everyone should have the same access to information. UTFL-3.2.2 "<< endl;
  cout << endl;

}




void printFL_UTv2018Question14(){
  cout << " Question #14 (1 point) What is an important component of an effective usability review? " << endl;
  cout << endl;

  cout << "A.A detailed design document " << endl;
  cout << "B.Screen layouts and narrative descriptions" << endl;
  cout << "C.A visible user interface, either real or simulated" << endl;
  cout << "D.A list of known usability issues" << endl;
  cout << endl;

}

int processFL_UTv2018Question14(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question14();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='C')   
    return 1;
  else return 0;  
}


void processFL_UTv2018Question14Incorrect(){
   printFL_UTv2018Question14();

  cout << "14 C C is correct. The more realistic the UI, the more accurate and effective the review will be. A is not correct because a detailed design document doesn’t provide the look and feel that a real UI does. B is not correct for the same reason as A. D is not correct. This might help in testing, but not during the usability review since that review is usually conducted by experts and those familiar with how the software must work. UTFL-4.1.1"<< endl;
  cout << endl;

}




void printFL_UTv2018Question15(){
  cout << " Question #15 (1 point) If a planned usability review is being conducted and the most experienced person in the review has six months of usability testing experience, what type of review is this?  " << endl;
  cout << endl;

  cout << "A.A formal usability review " << endl;
  cout << "B.An informal usability review" << endl;
  cout << "C.An expert usability review" << endl;
  cout << "" << endl;
  cout << endl;
}

int processFL_UTv2018Question15(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question15();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  
}


void processFL_UTv2018Question15Incorrect(){
  printFL_UTv2018Question15();

  cout << "15 B B is correct. This is an informal usability review with people who may have some awareness of usability, but are not recognized experts. A is not correct because a formal usability review requires usability experts. C is not correct because six months would not constitute an expert. D is not correct because this review has been planned and prepared. UTFL-4.2.1"<< endl;
  cout << endl;

}









void printFL_UTv2018Question16(){
  cout << " Question #16 (1 point) You are conducting usability testing on software that is used by people to register for a driver’s license. This software gathers the user’s information and assigns a driver’s license number. The user is then taken to another page where they are asked about car insurance information. On that page they are required to enter their newly acquired driver’s license number. Given this information, which heuristic should be used to identify a problem with the software ? " << endl;
  cout << endl;

  cout << "A.User control and freedom " << endl;
  cout << "B.Error prevention" << endl;
  cout << "C.Visibility of system status" << endl;
  cout << "D.Recognition rather than recall" << endl;
  cout << endl;

}


int processFL_UTv2018Question16(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question16();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='D')   
    return 1;
  else return 0;  
}

void processFL_UTv2018Question16Incorrect(){
  printFL_UTv2018Question16();

  cout << "16 D D is correct. The user is being asked to remember the driver’s license number and re-enter it. The software should supply the number (since it just assigned it) rather than requiring the user to recall it. A, B, and C are checklist items but are not applicable to this scenario. UTFL-4.2.2"<< endl;
  cout << endl;
}





void printFL_UTv2018Question17(){
  cout << " Question #17 (1 point) Gathering comments from the users is a part of which principal step in usability testing? " << endl;
  cout << endl;

  cout << "A.Preparing the usability test " << endl;
  cout << "B.Conducting the usability test session" << endl;
  cout << "C.Communicating the findings from the test session" << endl;
  cout << "D.Conducting the retrospective after the testing has completed" << endl;
  cout << endl;

}

int processFL_UTv2018Question17(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question17();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  
}


void processFL_UTv2018Question17Incorrect(){
   printFL_UTv2018Question17();

  cout << "17 B B is correct. The post-session interview is part of the test session and is used to get the user’s feedback and impressions. UTFL-5.2.1"<< endl;
  cout << endl;

}








void printFL_UTv2018Question18(){
  cout << " Question #18 (1 point) Which of the following actions should be taken as part of usability test planning? " << endl;
  cout << endl;

  cout << "A.Selecting the moderator for the tests " << endl;
  cout << "B.Determining how to analyze the results of previous usability tests" << endl;
  cout << "C.Deciding where to document known defects in the software" << endl;
  cout << "D.Presenting the briefing instructions to the users" << endl;
  cout << endl;






}

int processFL_UTv2018Question18(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question18();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='A')   
    return 1;
  else return 0;  
}

void processFL_UTv2018Question18Incorrect(){
  printFL_UTv2018Question18();

  cout << "18 A A is correct. The moderator’s name is normally included in the test plan so it is determined during the test planning. B and C are not correct because they refer to previous tests and defects that may not be relevant for this testing. Known defects could change though if testing is on-going. D is not correct because these details are not usually known at the time the test plan is written and are likely to change. The briefing instructions are included in the usability test scripts which are prepared after planning is complete. UTFL-5.3.1"<< endl;
  cout << endl;
}




void printFL_UTv2018Question19(){
  cout << " Question #19 (1 point) Questions that are asked of the user at the conclusion of the usability session are included in which usability testing documentation? " << endl;
  cout << endl;

  cout << "A.The usability test plan " << endl;
  cout << "B.The usability risk register" << endl;
  cout << "C.The usability checklist" << endl;
  cout << "D.The usability test script" << endl;
  cout << endl;


}


int processFL_UTv2018Question19(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question19();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='D')   
    return 1;
  else return 0;  

}

void processFL_UTv2018Question19Incorrect(){
  printFL_UTv2018Question19();

  cout << "19 D D is correct. The pre-session and post-session interview questions to be used by the moderator are included in the usability test script. UTFL-5.3.2 "<< endl;
  cout << endl;
}









void printFL_UTv2018Question20(){
  cout << " Question #20 (1 point) You are creating tasks to be completed during a usability test. The software is used for people to register for a driver’s license. This software gathers the user’s information and assigns a driver’s license number. Once the person has their number, they are then given a series of questions regarding their insurance information. Given this information, what would be a good first task for the usability testers? " << endl;
  cout << endl;

  cout << "A.To conduct some exploratory testing and get a general impression of the software " << endl;
  cout << "B.To write down their impressions of the home page" << endl;
  cout << "C.To enter their name and address into the application" << endl;
  cout << "D.To take the simplest path all the way through the software including answering the insurance questions" << endl;
  cout << endl;


}

int processFL_UTv2018Question20(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question20();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='C')   
    return 1;
  else return 0;  

}


void processFL_UTv2018Question20Incorrect(){
  printFL_UTv2018Question20();

  cout << "20 C C is correct. The first task should be simple and easy for the user. Entering their name and address should be straightforward and should allow them to have a good experience with their first use of the software. A is not correct because we want them to follow a script rather than explore. B is not correct because this will be gathered in the post-session interview. D is not correct because this isn’t a simple task. UTFL-5.3.3"<< endl;
  cout << endl;
}





void printFL_UTv2018Question21(){
  cout << " Question #21 (1 point) When considering a location for a usability test, what requirements do observers have? " << endl;
  cout << endl;

  cout << "A.They should be able to come and go as needed " << endl;
  cout << "B.They should be constrained and focused on the users during the entire test" << endl;
  cout << "C.They should not have access to refreshments in the observation room" << endl;
  cout << "D.They should be able to interact with the user during the test" << endl;
  cout << endl;

}

int processFL_UTv2018Question21(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question21();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='A')   
    return 1;
  else return 0;  
 
}


void processFL_UTv2018Question21Incorrect(){
  printFL_UTv2018Question21();

  cout << "21 A A is correct. Observers should be able to come and go without interfering with the test. B is not correct because mobility in the observers is often necessary, particularly for long sessions. C is not correct because it is a regulation that limits the observers. D is not correct because the moderator interacts with the user at the beginning and end of the session, not the observers. UTFL-5.3.4 "<< endl;
  cout << endl;
}







void printFL_UTv2018Question22(){
  cout << " Question #22 (1 point) Which of the following is a disadvantage to using a usability lab? " << endl;
  cout << endl;

  cout << "A.Observers are restricted to a specific area " << endl;
  cout << "B.The room may feel unrealistic to the user" << endl;
  cout << "C.Each test will be conducted in a similar environment" << endl;
  cout << "D.Observers can come and go during the session" << endl;
  cout << endl;












}


int processFL_UTv2018Question22(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question22();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  
 
}






void processFL_UTv2018Question22Incorrect(){
  printFL_UTv2018Question22();

  cout << "22 B B is correct. This is a risk with a usability lab because it may not be representative of the real environment. A is not a disadvantage because observers can collaborate with each other without disturbing the test. C and D are all advantages to using a usability lab. UTFL-5.3.5"<< endl;
  cout << endl;

}










void printFL_UTv2018Question23(){
  cout << " Question #23 (1 point) If a user has become confused and frustrated during a test session, what actions should the moderator take? " << endl;
  cout << endl;

  cout << "A. The moderator should help the user and provide instructions as needed to get them back on track " << endl;
  cout << "B. The moderator should point the user to the documentation but should not help" << endl;
  cout << "C. The moderator should wait until the user is blocked before helping the user move to the next test task" << endl;
  cout << "D. The moderator should have no interaction with the user regardless of how confused or frustrated the user gets" << endl;
  cout << endl;

}


int processFL_UTv2018Question23(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question23();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='C')   
    return 1;
  else return 0;  

}

void processFL_UTv2018Question23Incorrect(){
  printFL_UTv2018Question23();

  cout << "23 C C is correct. The moderator should only step in if the user is completely stuck and then should help by directing the user to the next task. The point of the moderator is to observe and encourage the user to think aloud, not to help the user. UTFL-5.4.1"<< endl;
  cout << endl;

}









void printFL_UTv2018Question24(){
  cout << " Question #24 (1 point) Which of the following is an example of a positive usability finding?" << endl;
  cout << endl;

  cout << "A.A user found a defect that will need to be fixed prior to release " << endl;
  cout << "B.A user complimented the easy to use help feature" << endl;
  cout << "C.A user was able to follow the steps of the scenario" << endl;
  cout << "D.The moderator did not have to redirect the user at any point" << endl;
  cout << endl;

}




int processFL_UTv2018Question24(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question24();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  
}

void processFL_UTv2018Question24Incorrect(){
  printFL_UTv2018Question24();

  cout << "24 B B is correct because the user liked this feature. A is incorrect because a defect is not a positive find. C & D are incorrect because it does not indicate the user liked or disliked anything. UTFL-5.5.2"<< endl;
  cout << endl;
}





void printFL_UTv2018Question25(){
  cout << " Question #25 (1 point) You have written a usability test report and have included the detailed findings and recommendations, the objectives of the test, the purpose of the test, and a description of the evaluation method that was used during the testing. You have included a single page executive summary. Your findings list includes the 35 defects that were found including a proposed resolution for each defect and the stakeholder’s description of the problem. What should you change to align the report with best practices for this type of report?" << endl;
  cout << endl;

  cout << "A.Remove the stakeholder’s descriptions of the problems and use a technical description " << endl;
  cout << "B.Remove the proposed solutions and leave that to the developer to figure out" << endl;
  cout << "C.Remove the less important defects from the list to keep the list to no more than 25 defects" << endl;
  cout << "D.Remove the executive summary because that should be written as a separate document" << endl;
  cout << endl;












}




int processFL_UTv2018Question25(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question25();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='C')   
    return 1;
  else return 0;  

}







void processFL_UTv2018Question25Incorrect(){
  printFL_UTv2018Question25();

  cout << "25 C C is correct, no more than 25 defects should be included on the report per the syllabus. A is not correct because the stakeholder descriptions may give good insight into the problems. B is not correct because sometimes it helps the developer to understand what the stakeholder wants to see. D is not correct because the executive summary is an important part of the report. UTFL-5.6.1"<< endl;
  cout << endl;

}





void printFL_UTv2018Question26(){
  cout << " Question #26 (1 point) In what way does the Agile software development methodology help reduce internal resistance to usability findings? " << endl;
  cout << endl;

  cout << "A. Because the software is evolving all the time, no one is really invested in its design so changes are accepted easily " << endl;
  cout << "B. Because the whole-team approach is used, the team is accustomed to exchanging views freely" << endl;
  cout << "C. Because the scrum master guides the project, he will be able to determine which usability issues are valid" << endl;
  cout << "D. Because multiple users are a part of the team, they can be involved in the design and usability decisions" << endl;
  cout << endl;












}



int processFL_UTv2018Question26(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question26();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  

}





void processFL_UTv2018Question26Incorrect(){
  printFL_UTv2018Question26();

  cout << "26 B B is correct. A is not correct because developers are usually invested in their design, even in agile projects. C is not correct because this is not the role of the scrum master. D is not correct because the product owner represents the users. UTFL-5.6.2"<< endl;
  cout << endl;

}









void printFL_UTv2018Question27(){
  cout << " Question #27 (1 point) You have conducted several usability lab sessions and it is becoming clear that the software is quite difficult to use. The users can’t figure out what to do and end up frustrated with the software when trying to complete fairly simple tasks. You have shared these results with the developers but they don’t think there is a problem. What approach should you take to convince the developers that an issue exists? " << endl;
  cout << endl;

  cout << "A. Write defect reports for each issue and give each a high severity rating " << endl;
  cout << "B. Explain to the developer the issue is likely design-related" << endl;
  cout << "C. Have the developers sit with the users and walk them through the software so the users don’t get frustrated" << endl;
  cout << "D. Have the developers observe a usability session to better understand where the users are getting confused" << endl;
  cout << endl;










}



int processFL_UTv2018Question27(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question27();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='D')   
    return 1;
  else return 0;  

}






void processFL_UTv2018Question27Incorrect(){
  printFL_UTv2018Question27();

  cout << "27 D D is correct. This is the best way to get the developers to understand the problems that the users are experiencing and to UTFL-5.6.3 get them to understand that the users aren’t just being stupid but that they are legitimately confused. A will not help because it won’t create the understanding that’s needed from the developers. B is not correct because an open confrontation won’t build understanding. C is not correct because the developers need to observe not instruct."<< endl;
  cout << endl;

}









void printFL_UTv2018Question28(){
  cout << " Question #28 (1 point) When conducting quality control activities for a usability test, why should you observe the first two or three test sessions? " << endl;
  cout << endl;

  cout << "A.To ensure the sessions are conducted in accordance with the usability test script " << endl;
  cout << "B.To ensure the sessions are conducted in accordance with the usability test plan" << endl;
  cout << "C.To ensure the sessions are conducted by a test manager" << endl;
  cout << "D.To ensure the sessions are documented properly in the test management system " << endl;
  cout << endl;










}



int processFL_UTv2018Question28(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question28();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='A')   
    return 1;
  else return 0;  
 
}





void processFL_UTv2018Question28Incorrect(){
  printFL_UTv2018Question28();

  cout << "28 A A is correct. The usability test script describes how usability test sessions should be run. B is not correct because the plan does not describe the test sessions at the appropriate level. C is not correct because the sessions should be conducted by a moderator. D is not correct because the sessions are usually documented in reports rather than in the test management system. UTFL-5.7.1 "<< endl;
  cout << endl;
}








void printFL_UTv2018Question29(){
  cout << " Question #29 (1 point) Which of the following is the most common problem that occurs when the usability tests are scheduled too late? " << endl;
  cout << endl;

  cout << "A. The test team does not have time to support the test effort as they are busy with the final release testing " << endl;
  cout << "B. The management is not interested in the results of the test because they do not understand the goals of usability testing" << endl;
  cout << "C. The results may be received when the development team does not have time to address the issues" << endl;
  cout << "D. The system testing schedule will be delayed waiting for the completion of usability testing" << endl;
  cout << endl;












  
}








int processFL_UTv2018Question29(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question29();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='C')   
    return 1;
  else return 0;  

}




void processFL_UTv2018Question29Incorrect(){
  printFL_UTv2018Question29();

  cout << "29 C C is correct. The biggest issue is that the results may arrive too late for the developers to be able to make the changes. A is not correct because, although the testers may be time compressed as well, it doesn’t matter because the developers don’t have time to make the changes. B is not correct because, although this may be true, it’s not a problem that’s isolated to the usability testing happening late in the schedule. This can be a problem regardless of when the tests are run. D is not correct because usability testing is usually done during or after system testing and would not delay system testing. UTFL-5.8.1"<< endl;
  cout << endl;

}






void printFL_UTv2018Question30(){
  cout << " Question #30 (1 point) If a company has just launched a new mobile application, what information would they expect to get from a usability evaluation? " << endl;
  cout << endl;

  cout << "A.An understanding of the users’ satisfaction with the software " << endl;
  cout << "B.An understanding of any learnability issues with the software" << endl;
  cout << "C.An assessment of the efficiency and effectiveness of the software" << endl;
  cout << "D.An assessment of the market reception of the software and predictive sales information" << endl;
  cout << endl;
  












  
}





int processFL_UTv2018Question30(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question30();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='A')   
    return 1;
  else return 0;  
 
}







void processFL_UTv2018Question30Incorrect(){
  printFL_UTv2018Question30();

  cout << "30 A A is correct. Evaluating the level of user satisfaction is the primary goal of a usability evaluation. UTFL-6.2.1"<< endl;
  cout << endl;
}






void printFL_UTv2018Question31(){
  cout << " Question #31 (1 point) Your company has recently released software that supports an ultrasound medical device and is interested in how the usability is perceived by the end users. Marketing wants to use a short questionnaire that will allow the user to respond subjectively to a small set of statements. Which questionnaire would be most appropriate to use to gather this information? " << endl;
  cout << endl;

  cout << "A.SUMI " << endl;
  cout << "B.WAMMI" << endl;
  cout << "C.SUS" << endl;
  cout << "D.RITE" << endl;
  cout << endl;

}




int processFL_UTv2018Question31(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question31();


    char Answer = getValidatedAnswerAsUppercase(4);
   if (Answer =='C')   
    return 1;
  else return 0;  
 
}



void processFL_UTv2018Question31Incorrect(){
  printFL_UTv2018Question31();

  cout << "31 C C is correct. SUS is the System Usability Scale and uses a 10 item questionnaire to provide a high-level subjective assessment of usability. A is not correct because SUMI has 50 questions so is not “short”. B is not correct because WAMMI is focused on web software and this is not web software. RITE it not a standardized questionnaire. It is a test method. UTFL-6.3.1"<< endl;
  cout << endl;

}










void printFL_UTv2018Question32(){
  cout << " Question #32 (1 point) While doing the usability re-design, the developers asked several user representatives for early feedback. However, feedback was inconsistent. When they implemented the code, the developers ignored some of the feedback. Given this information, what is the best approach to use to verify the usability?" << endl;
  cout << endl;

  cout << "A.A usability review should be used to ensure that the design is optimal " << endl;
  cout << "B.A usability test should be conducted to ensure the feedback is not dismissed as opinion" << endl;
  cout << "C.A usability maturity assessment should be conducted to ensure the team is using best practices" << endl;
  cout << "D.A formative usability analysis should be conducted to ensure the design contains important usability characteristics" << endl;
  cout << endl;
  











}


int processFL_UTv2018Question32(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question32();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  
  
}




void processFL_UTv2018Question32Incorrect(){
  printFL_UTv2018Question32();

  cout << "32 B B is correct. This is a team with a low usability maturity and they are most likely to value feedback from real users now that the code has been developed. A is not correct because the results from the review are likely to be dismissed by this immature team. C is not correct because that assessment is not really needed at this point. It’s clear that they have a low level of maturity because they asked a few users and then picked and chose which comments they wanted to take. D is not correct because a UTFL-7.1.1 formative analysis should be done during design, not after implementation. "<< endl;
  cout << endl;

}









void printFL_UTv2018Question33(){
   cout << " Question #33 (1 point) Your organization needs to create a usability survey that will gather the information needed to evaluate and improve the usability of your new product. Who should be responsible for these tasks? " << endl;
  cout << endl;

  cout << "A.The usability test moderator " << endl;
  cout << "B.The usability tester" << endl;
  cout << "C.The test manager" << endl;
  cout << "D.The project manager" << endl;
  cout << endl;

}




int processFL_UTv2018Question33(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question33();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  

}


void processFL_UTv2018Question33Incorrect(){
  printFL_UTv2018Question33();

  cout << " 33 B B is correct. This is a principle task of the usability tester, including creating the survey plan, selecting the questionnaire, analyzing the responses and reporting the results. UTFL-8.1.1 "<< endl;
  cout << endl;
}




void printFL_UTv2018Question34(){
  cout << " Question #34 (1 point) At the end of the usability session, the users will be interviewed to gather their opinions on what worked and what didn’t work, what they liked and what they found difficult to use. Who should conduct this interview? " << endl;
  cout << endl;

  cout << "A.The usability test moderator" << endl;
  cout << "B.The usability tester" << endl;
  cout << "C.The test manager" << endl;
  cout << "D.The project manager" << endl;
  cout << endl;


}

int processFL_UTv2018Question34(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question34();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='A')   
    return 1;
  else return 0;  

}


void processFL_UTv2018Question34Incorrect(){
  printFL_UTv2018Question34();

  cout << "34 A A is correct. Conducting the post-session interview is the responsibility of the moderator of the usability test. UTFL-8.2.1"<< endl;
  cout << endl;

}



void printFL_UTv2018Question35(){
  cout << " Question #35 (1 point) What is “think aloud” usability testing?" << endl;
  cout << endl;

  cout << "A. It is testing conducted by a pair of usability testers who discuss the tests as they execute them " << endl;
  cout << "B. It is a form of post-session review where the usability tester discusses what they were thinking as they ran the tests" << endl;
  cout << "C. It is a method used during formative evaluation to “talk through” the proposed user interface" << endl;
  cout << "D. It is a method used to encourage the user to voice their thoughts as they are conducting their tests" << endl;
  cout << endl;










}




int processFL_UTv2018Question35(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question35();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='D')   
    return 1;
  else return 0;  

}




void processFL_UTv2018Question35Incorrect(){
  printFL_UTv2018Question35();

  cout << "35 D D is correct. The think aloud method is used for the moderator to understand what the user is thinking as they are conducting their tests. Term"<< endl;
  cout << endl;
}









void printFL_UTv2018Question36(){
  cout << "Question #36 (1 point) You are in a café and have 10-15 minutes available with potential mobile application users. What is your best option regarding usability testing? " << endl;
  cout << endl;

  cout << "A.Perform an informal test session where the potential users try to use the product " << endl;
  cout << "B.Perform a survey-based test" << endl;
  cout << "C.Perform a questionnaire-based test" << endl;
  cout << "D.Perform formative testing for 15 minutes" << endl;
  cout << endl;












}



int processFL_UTv2018Question36(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question36();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='A')   
    return 1;
  else return 0;  

}






void processFL_UTv2018Question36Incorrect(){
   printFL_UTv2018Question36();

  cout << "36 A A is correct. This form of usability testing is both informal and quick. It is done in an informal environment, such as a café, and is usually conducted in short time periods such as 15 minutes. B is not correct because although it may be inexpensive, it is not survey-based. C is not correct because although it may be effective, it is not questionnaire-based. D is not correct because although it may be efficient, it’s not formative. Term"<< endl;
  cout << endl;

}











void printFL_UTv2018Question37(){
  cout << " Question #37 (1 point) What is accessibility? " << endl;
  cout << endl;

  cout << "A. Usability of a software product by everyone regardless of capabilities or disabilities " << endl;
  cout << "B. Usability of a software product by people with limited vision, hearing, dexterity, cognition or physical mobility" << endl;
  cout << "C. Usability of a software product by people of different nationalities and languages" << endl;
  cout << "D. Usability of the software product focusing on the direct interaction of the software with the user" << endl;
  cout << endl;











}



int processFL_UTv2018Question37(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question37();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  
 
}


void processFL_UTv2018Question37Incorrect(){
  printFL_UTv2018Question37();

  cout << "37 B B is correct per the syllabus. A is not correct because the syllabus specifies that the target users have a disability of some type. C is referring to localization testing in some form. D is usability. Term"<< endl;
  cout << endl;


}







void printFL_UTv2018Question38(){
  cout << " Question #38 (1 point) If you are evaluating the services that a user receives prior to using the software, what type of evaluation are you doing? " << endl;
  cout << endl;

  cout << "A.Usability" << endl;
  cout << "B.User experience" << endl;
  cout << "C.Accessibility" << endl;
  cout << "D.User services" << endl;
  cout << endl;












}






int processFL_UTv2018Question38(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question38();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='B')   
    return 1;
  else return 0;  

}




void processFL_UTv2018Question38Incorrect(){
  printFL_UTv2018Question38();

  cout << "38 B B is correct. The services a user receives both before and after actually using the software is a part of the user experience evaluation. Term"<< endl;
  cout << endl;

}







void printFL_UTv2018Question39(){
   cout << " Question #39 (1 point) Which of the following is the correct description of the user interface?" << endl;
  cout << endl;

  cout << "A. The user interface consists of all components of a software product that provide information and controls for the user to accomplish specific tasks with the software product " << endl;
  cout << "B. The user interface is a software defect which results in difficulty for the user when using the software product" << endl;
  cout << "C. The user interface describes a person’s perceptions and responses that result from the use and/or anticipated use of a product, system or service" << endl;
  cout << "D. The user interface is a process through which information about the usability of a software product is gathered in order to improve the software product or to assess the value of the software product’s usability." << endl;
  cout << endl;

}

int processFL_UTv2018Question39(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question39();


    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='A')   
    return 1;
  else return 0;  
}

void processFL_UTv2018Question39Incorrect(){
  printFL_UTv2018Question39();

  cout << "39 A A is correct. This is the definition of the user interface. B is describing a usability defect. C is the definition of the user experience. D is the definition of usability evaluation. Term "<< endl;
  cout << endl;
}







void printFL_UTv2018Question40(){
  cout << " Question #40 (1 point) If the users are made uncomfortable by the software when they use it, what type of issue is this?" << endl;
  cout << endl;

  cout << "A.Efficiency " << endl;
  cout << "B.Functional" << endl;
  cout << "C.Effectiveness" << endl;
  cout << "" << endl;
  cout << endl;
}


int processFL_UTv2018Question40(){
  cout << endl<< endl<< endl<< endl<< endl;

  printFL_UTv2018Question40();

    char Answer = getValidatedAnswerAsUppercase(4);
  if (Answer =='D')   
    return 1;
  else return 0;  
 
}

void processFL_UTv2018Question40Incorrect(){
  printFL_UTv2018Question40();

  cout << "40 D D is correct. Factors that make the users uncomfortable with the software are satisfaction issues. Term"<< endl;
  cout << endl;

}



























int  processFL_UTv2018Exam(){
    int pointsScoredForQuestion =0;
    int scoreTotal = 0;
    int scoreByQuestion[40];
    for (int i =0; i< 40; i++)
      scoreByQuestion[i] = 0;
      
      
    cout << "Questions used in this program were sourced from the ISTQB Certified Tester Foundation Level Usability Testing Sample Exam version 2018 "<< endl;
    cout << "There are 40 questions, each worth one point. The Sample Exam has a time limit of 60 minutes, but this is not enforced by this software"<< endl;
    cout << "Uppercase or lowercase answers are acceptable "<< endl;
      
    pointsScoredForQuestion = processFL_UTv2018Question1();
    scoreByQuestion[0] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;
    
    pointsScoredForQuestion = processFL_UTv2018Question2();
    scoreByQuestion[1] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question3();
    scoreByQuestion[2] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question4();
    scoreByQuestion[3] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question5();
    scoreByQuestion[4] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processFL_UTv2018Question6();
    scoreByQuestion[5] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question7();
    scoreByQuestion[6] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question8();
    scoreByQuestion[7] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question9();
    scoreByQuestion[8] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question10();
    scoreByQuestion[9] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;





    pointsScoredForQuestion = processFL_UTv2018Question11();
    scoreByQuestion[10] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question12();
    scoreByQuestion[11] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question13();
    scoreByQuestion[12] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question14();
    scoreByQuestion[13] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question15();
    scoreByQuestion[14] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processFL_UTv2018Question16();
    scoreByQuestion[15] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question17();
    scoreByQuestion[16] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question18();
    scoreByQuestion[17] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question19();
    scoreByQuestion[18] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question20();
    scoreByQuestion[19] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;





    pointsScoredForQuestion = processFL_UTv2018Question21();
    scoreByQuestion[20] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question22();
    scoreByQuestion[21] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question23();
    scoreByQuestion[22] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question24();
    scoreByQuestion[23] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question25();
    scoreByQuestion[24] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processFL_UTv2018Question26();
    scoreByQuestion[25] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question27();
    scoreByQuestion[26] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question28();
    scoreByQuestion[27] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question29();
    scoreByQuestion[28] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question30();
    scoreByQuestion[29] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;





    pointsScoredForQuestion = processFL_UTv2018Question31();
    scoreByQuestion[30] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question32();
    scoreByQuestion[31] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question33();
    scoreByQuestion[32] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question34();
    scoreByQuestion[33] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question35();
    scoreByQuestion[34] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processFL_UTv2018Question36();
    scoreByQuestion[35] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question37();
    scoreByQuestion[36] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question38();
    scoreByQuestion[37] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question39();
    scoreByQuestion[38] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_UTv2018Question40();
    scoreByQuestion[39] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;




    cout <<"All Questions Complete, you scored " << scoreTotal  << " out of 40. Details of incorrectly answered questions are below" << endl;




    if (scoreByQuestion[0] == 0)  processFL_UTv2018Question1Incorrect();
    if (scoreByQuestion[1] == 0)  processFL_UTv2018Question2Incorrect();
    if (scoreByQuestion[2] == 0)  processFL_UTv2018Question3Incorrect();
    if (scoreByQuestion[3] == 0)  processFL_UTv2018Question4Incorrect();
    if (scoreByQuestion[4] == 0)  processFL_UTv2018Question5Incorrect();

    if (scoreByQuestion[5] == 0)  processFL_UTv2018Question6Incorrect();
    if (scoreByQuestion[6] == 0)  processFL_UTv2018Question7Incorrect();
    if (scoreByQuestion[7] == 0)  processFL_UTv2018Question8Incorrect();
    if (scoreByQuestion[8] == 0)  processFL_UTv2018Question9Incorrect();
    if (scoreByQuestion[9] == 0)  processFL_UTv2018Question10Incorrect();


    if (scoreByQuestion[10] == 0)  processFL_UTv2018Question11Incorrect();
    if (scoreByQuestion[11] == 0)  processFL_UTv2018Question12Incorrect();
    if (scoreByQuestion[12] == 0)  processFL_UTv2018Question13Incorrect();
    if (scoreByQuestion[13] == 0)  processFL_UTv2018Question14Incorrect();
    if (scoreByQuestion[14] == 0)  processFL_UTv2018Question15Incorrect();

    if (scoreByQuestion[15] == 0)  processFL_UTv2018Question16Incorrect();
    if (scoreByQuestion[16] == 0)  processFL_UTv2018Question17Incorrect();
    if (scoreByQuestion[17] == 0)  processFL_UTv2018Question18Incorrect();
    if (scoreByQuestion[18] == 0)  processFL_UTv2018Question19Incorrect();
    if (scoreByQuestion[19] == 0)  processFL_UTv2018Question20Incorrect();


    if (scoreByQuestion[20] == 0)  processFL_UTv2018Question21Incorrect();
    if (scoreByQuestion[21] == 0)  processFL_UTv2018Question22Incorrect();
    if (scoreByQuestion[22] == 0)  processFL_UTv2018Question23Incorrect();
    if (scoreByQuestion[23] == 0)  processFL_UTv2018Question24Incorrect();
    if (scoreByQuestion[24] == 0)  processFL_UTv2018Question25Incorrect();

    if (scoreByQuestion[25] == 0)  processFL_UTv2018Question26Incorrect();
    if (scoreByQuestion[26] == 0)  processFL_UTv2018Question27Incorrect();
    if (scoreByQuestion[27] == 0)  processFL_UTv2018Question28Incorrect();
    if (scoreByQuestion[28] == 0)  processFL_UTv2018Question29Incorrect();
    if (scoreByQuestion[29] == 0)  processFL_UTv2018Question30Incorrect();



    if (scoreByQuestion[30] == 0)  processFL_UTv2018Question31Incorrect();
    if (scoreByQuestion[31] == 0)  processFL_UTv2018Question32Incorrect();
    if (scoreByQuestion[32] == 0)  processFL_UTv2018Question33Incorrect();
    if (scoreByQuestion[33] == 0)  processFL_UTv2018Question34Incorrect();
    if (scoreByQuestion[34] == 0)  processFL_UTv2018Question35Incorrect();

    if (scoreByQuestion[35] == 0)  processFL_UTv2018Question36Incorrect();
    if (scoreByQuestion[36] == 0)  processFL_UTv2018Question37Incorrect();
    if (scoreByQuestion[37] == 0)  processFL_UTv2018Question38Incorrect();
    if (scoreByQuestion[38] == 0)  processFL_UTv2018Question39Incorrect();
    if (scoreByQuestion[39] == 0)  processFL_UTv2018Question40Incorrect();


    return scoreTotal;

}

