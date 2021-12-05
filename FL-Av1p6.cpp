
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

// TODO Future release: Add parameters ask questions to check valid answers as int: 4 = ABCD 5 = ABCDE
// TODO: Add parameters ask questions to give points weight to questions . create a single function for AskQuestion

  //TODO: Make getAnswerAsUppercase



extern char getAnswer();











void printCTFL_A_v1p6Introduction(){
  cout << "Questions used in this program were sourced from the ISTQB Certified Tester Foundation Level 2018 Sample Exam Aversion 1.6"<< endl;
  cout << "There are 40 questions, each worth one point. The Sample Exam has a time limit of 60 minutes, but this is not enforced by this software"<< endl;
  cout << "Uppercase or lowercase answers are acceptable "<< endl;
  cout << "---------------------------------------------------------------------------------------------------------------------------------------"<< endl;
}





  int  processCTFL_A_v1p6Question1(){
  cout << endl<< endl<< endl<< endl<< endl;
    cout << "  Question #1 (1 Point)" << endl;
    cout << "Which one of the following answers describes a test condition?" << endl;
    cout << " " << endl;
    cout << "a) A distinguishing characteristic of a component or system" << endl;
    cout << "b) A testable aspect of a component or system identified as a basis for testing" << endl;
    cout << "c) The degree to which a software product provides functions which meet stated and implied needs when the software is used under specified conditions" << endl;
    cout << "d) Test cases designed to execute combinations of conditions and actions resulting from them" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'B')
      return 1;
    else if (Answer == 'b')
      return 1;  
    else return 0;
  }


  int  processCTFL_A_v1p6Question2(){
  cout << endl<< endl<< endl<< endl<< endl;
    cout << "Question #2 (1 Point)" << endl;
    cout << " Which of the following statements is a valid objective for testing?" << endl;
    cout << " " << endl;
    cout << "a) The test should start as late as possible so that development had enough time to create a good product" << endl;
    cout << "b) To validate whether the test object works as expected by the users and other stakeholders" << endl;
    cout << "c) To prove that all possible defects are identified" << endl;
    cout << "d) To prove that any remaining defects will not cause any failures" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'B')
      return 1;
    else if (Answer == 'b')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question3(){
  cout << endl<< endl<< endl<< endl<< endl;
    cout << "  Question #3 (1 Point)" << endl;
    cout << "Which of the following statements correctly describes the difference between testing and debugging?" << endl;
    cout << "" << endl;
    cout << "a) Testing identifies the source of defects; debugging analyzes the defects and proposes prevention activities" << endl;
    cout << "b) Dynamic testing shows failures caused by defects; debugging eliminates the defects, which are the source of failures" << endl;
    cout << "c) Testing does not remove faults; but debugging removes defects that cause the faults" << endl;
    cout << "d) Dynamic testing prevents the causes of failures; debugging removes the failures" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'B')
      return 1;
    else if (Answer == 'b')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question4(){
   cout << endl<< endl<< endl<< endl<< endl;
 

    cout << "Question #4 (1 Point)" << endl;
    cout << "Which one of the statements below describes the most common situation for a failure discovered during testing or in production?" << endl;
    cout << "" << endl;

    cout << "a)The product crashed when the user selected an option in a dialog box " << endl;
    cout << "b)The wrong version of a compiled source code file was included in the build" << endl;
    cout << "c)The computation algorithm used the wrong input variables" << endl;
    cout << "d)The developer misinterpreted the requirement for the algorithm" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'A')
      return 1;
    else if (Answer == 'a')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question5(){
    cout << endl<< endl<< endl<< endl<< endl;

    cout << "Question #5 (1 Point)" << endl;
    cout << "Mr. Test has been testing software applications on mobile devices for a period of 5 years. He has a wealth of experience in testing mobile applications and achieves better results in a shorter time than others. Over several months, Mr. Test did not modify the existing automated test cases and did not create any new test cases. This leads to fewer and fewer defects being found by executing the tests. What principle of testing did Mr. Test not observe?" << endl;
    cout << "" << endl;

    cout << "a)Testing depends on the environment" << endl;
    cout << "b)Exhaustive testing is not possible" << endl;
    cout << "c)Repeating of same tests will not find new defects" << endl;
    cout << "d)Defects cluster together" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'C')
      return 1;
    else if (Answer == 'c')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question6(){
    cout << endl<< endl<< endl<< endl<< endl;


    cout << "Question #6 (1 Point)" << endl;
    cout << "In what way can testing be part of Quality Assurance?" << endl;
    cout << "" << endl;

    cout << "a)It ensures that requirements are detailed enough" << endl;
    cout << "b)Testing reduces the risk of poor software quality" << endl;
    cout << "c)It ensures that standards in the organization are followed" << endl;
    cout << "d)It measures the quality of software in terms of number of executed test cases" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'B')
      return 1;
    else if (Answer == 'b')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question7(){
  cout << endl<< endl<< endl<< endl<< endl;
      cout << "Question #7 (1 Point)" << endl;
    cout << "Which of the following activities is part of the main activity \"test analysis\" in the test process?" << endl;
    cout << "" << endl;

    cout << "a)Identifying any required infrastructure and tools" << endl;
    cout << "b)Creating test suites from test scripts" << endl;
    cout << "c)Analyzing lessons learned for process improvement" << endl;
    cout << "d)Evaluating the test basis for testability" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'D')
      return 1;
    else if (Answer == 'd')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question8(){
  cout << endl<< endl<< endl<< endl<< endl;





    cout << "  Question #8 (1 Point)" << endl;
    cout << "Match the following test work products (1-4) with the right description (A-D)." << endl;
    cout << "" << endl;
    cout << "1. Test suite" << endl;
    cout << "2. Test case" << endl;
    cout << "3. Test script" << endl;
    cout << "4. Test charter" << endl;
    cout << "" << endl;
    cout << "A. A set of test scripts to be executed in a specific test run " << endl;
    cout << "B. A set of instructions for the execution of a test " << endl;
    cout << "C. Contains expected results " << endl;
    cout << "D. Documentation of test activities in session-based exploratory testing " << endl;
    cout << "" << endl;
    cout << "" << endl;

    cout << "a) 1A, 2C, 3B, 4D" << endl;
    cout << "b) 1D, 2B, 3A, 4C" << endl;
    cout << "c) 1A, 2C, 3D, 4B" << endl;
    cout << "d) 1D, 2C, 3B, 4A" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'A')
      return 1;
    else if (Answer == 'a')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question9(){
  cout << endl<< endl<< endl<< endl<< endl;
    cout << "Question #9 (1 Point)" << endl;
    cout << "How can white-box testing be applied during acceptance testing?" << endl;
    cout << "" << endl;

    cout << "a)To check if large volumes of data can be transferred between integrated systems" << endl;
    cout << "b)To check if all code statements and code decision paths have been executed" << endl;
    cout << "c)To check if all work process flows have been covered" << endl;
    cout << "d)To cover all web page navigations" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'C')
      return 1;
    else if (Answer == 'c')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question10(){
   cout << endl<< endl<< endl<< endl<< endl;
 
    cout << "Question #10 (1 Point)" << endl;
    cout << "Which of the following statements comparing component testing and system testing is TRUE?" << endl;
    cout << "" << endl;

    cout << "a) Component testing verifies the functionality of software modules, program objects, and classes that are separately testable, whereas system testing verifies interfaces between components and interactions between different parts of the system " << endl;
    cout << "b) Test cases for component testing are usually derived from component specifications, design specifications, or data models, whereas test cases for system testing are usually derived from requirement specifications or use cases " << endl;
    cout << "c) Component testing only focuses on functional characteristics, whereas system testing focuses on functional and non-functional characteristics " << endl;
    cout << "d) Component testing is the responsibility of the testers, whereas system testing typically is the responsibility of the users of the system " << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'B')
      return 1;
    else if (Answer == 'b')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question11(){
  cout << endl<< endl<< endl<< endl<< endl;
    cout << "Question #11 (1 Point)" << endl;
    cout << "Which one of the following is TRUE?" << endl;
    cout << "" << endl;

    cout << "a) The purpose of regression testing is to check if the correction has been successfully implemented, while the purpose of confirmation testing is to confirm that the correction has no side effects " << endl;
    cout << "b) The purpose of regression testing is to detect unintended side effects, while the purpose of confirmation testing is to check if the system is still working in a new environment " << endl;
    cout << "c) The purpose of regression testing is to detect unintended side effects, while the purpose of confirmation testing is to check if the original defect has been fixed " << endl;
    cout << "d) The purpose of regression testing is to check if the new functionality is working, while the purpose of confirmation testing is to check if the original defect has been fixed " << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'C')
      return 1;
    else if (Answer == 'c')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question12(){
   cout << endl<< endl<< endl<< endl<< endl;
 

    cout << "Question #12 (1 Point)" << endl;
    cout << "Which one of the following is the BEST definition of an incremental development model?" << endl;
    cout << "" << endl;

    cout << "a) Defining requirements, designing software and testing are done in phases where in each phase a piece of the system is added" << endl;
    cout << "b) A phase in the development process should begin when the previous phase is complete " << endl;
    cout << "c) Testing is viewed as a separate phase which takes place after development has been completed" << endl;
    cout << "d) Testing is added to development as an increment" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'A')
      return 1;
    else if (Answer == 'a')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question13(){
  cout << endl<< endl<< endl<< endl<< endl;
  
    cout << "Question #13 (1 Point)" << endl;
    cout << "Which of the following should NOT be a trigger for maintenance testing?" << endl;
    cout << "" << endl;

    cout << "a)Decision to test the maintainability of the software" << endl;
    cout << "b)Decision to test the system after migration to a new operating platform" << endl;
    cout << "c)Decision to test if archived data is possible to be retrieved" << endl;
    cout << "d)Decision to test after “hot fixes”" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'A')
      return 1;
    else if (Answer == 'a')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question14(){
  cout << endl<< endl<< endl<< endl<< endl;
  
    cout << "Question #14 (1 Point)" << endl;
    cout << "Which of the following options are roles in a formal review?" << endl;
    cout << "" << endl;

    cout << "a)Developer, Moderator, Review leader, Reviewer, Tester" << endl;
    cout << "b)Author, Moderator, Manager, Reviewer, Developer" << endl;
    cout << "c)Author, Manager, Review leader, Reviewer, Designer" << endl;
    cout << "d)Author, Moderator, Review leader, Reviewer, Scribe" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'D')
      return 1;
    else if (Answer == 'd')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question15(){
  cout << endl<< endl<< endl<< endl<< endl;
    cout << "Question #15 (1 Point)" << endl;
    cout << "Which activities are carried out within the planning of a formal review?" << endl;
    cout << "" << endl;

    cout << "a)Collection of metrics for the evaluation of the effectiveness of the review" << endl;
    cout << "b)Answer any questions the participants may have" << endl;
    cout << "c)Definition and Verification of fulfillment of entry criteria for the review" << endl;
    cout << "d)Evaluation of the review findings against the exit criteria" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'C')
      return 1;
    else if (Answer == 'c')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question16(){
   cout << endl<< endl<< endl<< endl<< endl;
 
    cout << "Question #16 (1 Point)" << endl;
    cout << "Which of the review types below is the BEST option to choose when the review must follow a formal process based on rules and checklists?" << endl;
    cout << "" << endl;

    cout << "a)Informal Review" << endl;
    cout << "b)Technical Review" << endl;
    cout << "c)Inspection" << endl;
    cout << "d)Walkthrough" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'C')
      return 1;
    else if (Answer == 'c')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question17(){
  cout << endl<< endl<< endl<< endl<< endl;
    cout << "Question #17 (1 Point)" << endl;
    cout << "Which of the following statements about static testing are MOST true?" << endl;
    cout << "" << endl;

    cout << "a)Static testing is a cheap way to detect and remove defects" << endl;
    cout << "b)Static testing makes dynamic testing less challenging" << endl;
    cout << "c)Static testing makes it possible to find run-time problems early in the lifecycle" << endl;
    cout << "d)When testing safety-critical system, static testing has less value because dynamic testing finds the defects better" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'A')
      return 1;
    else if (Answer == 'a')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question18(){
   cout << endl<< endl<< endl<< endl<< endl;

    cout << " Question #18 (1 Point)" << endl;
    cout << "You will be invited to a review. The work product to be reviewed is a description of the in-house document creation process. The aim of the description is to present the work distribution between the different roles involved in the process in a way that can be clearly understood by everyone. You will be invited to a checklist-based review. The checklist will also be sent to you. It includes the following points:" << endl;
    cout << "" << endl;

    cout << "i.   Is the person who performs the activity clearly identified for each activity?" << endl;
    cout << "ii.  Are the entry criteria clearly defined for each activity?" << endl;
    cout << "iii. Are the exit criteria clearly defined for each activity?" << endl;
    cout << "iv.  Are the supporting roles and their scope of work clearly defined for each activity?" << endl;
    cout << "" << endl;

    cout << "In the following we show an excerpt of the work result to be reviewed, for which you should use the checklist above:" << endl;
    cout << "" << endl;
    cout << "\"After checking the customer documentation for completeness and correctness, the software architect creates the system specification. Once the software architect has completed the system specification, he invites testers and verifiers to the review. A checklist describes the scope of the review. Each invited reviewer creates review comments - if necessary - and concludes the review with an official review done-comment.\"" << endl;
    cout << "" << endl;

    cout << "Which of the following statements about your review is correct?" << endl;
    cout << "" << endl;

    cout << "a) Point ii) of the checklist has been violated because it is not clear which condition must be fulfilled in order to invite to the review" << endl;
    cout << "b) You notice that in addition to the tester and the verifier, the validator must also be invited. Since this item is not part of your checklist, you do not create a corresponding comment" << endl;
    cout << "c) Point iii) of the checklist has been violated as it is not clear what marks the review as completed" << endl;
    cout << "d) Point i) of the checklist has been violated because it is not clear who is providing the checklist for the invitation to the review" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'D')
      return 1;
    else if (Answer == 'd')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question19(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #19 (1 Point)" << endl;
    cout << "What is checklist-based testing?" << endl;
    cout << "" << endl;

    cout << "a) A test technique in which tests are derived based on the tester's knowledge of past faults, or general knowledge of failures" << endl;
    cout << "b) A test technique based on an analysis of the specification of a component or system" << endl;
    cout << "c) An experience-based test technique whereby the experienced tester uses a list of items to be noted, checked, or remembered, or a set of rules or criteria against which a product must be verified" << endl;
    cout << "d) An approach to testing where the testers dynamically design and execute tests based on their knowledge, exploration of the test item and the results of previous tests" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'C')
      return 1;
    else if (Answer == 'c')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question20(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #20 (1 Point)" << endl;
    cout << "Which one of the following options is categorized as a black-box test technique?" << endl;
    cout << "" << endl;

    cout << "a)A technique based on analysis of the architecture" << endl;
    cout << "b)A technique checking that the test object is working according to the detailed design" << endl;
    cout << "c)A technique based on the knowledge of past faults, or general knowledge of failures" << endl;
    cout << "d)A technique based on formal requirements" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'D')
      return 1;
    else if (Answer == 'd')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question21(){

  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #21 (1 Point)" << endl;
    cout << "The following statement refers to decision coverage:" << endl;
    cout << "\"When the code contains only a single ‘if’ statement and no loops or CASE statements, and its execution is not nested within the test, any single test case we run will result in 50% decision coverage.\"" << endl;
    cout << "" << endl;


    cout << "" << endl;
    cout << "Which of the following statement is correct?" << endl;
    cout << "" << endl;


    cout << "a) The statement is true. Any single test case provides 100% statement coverage and therefore 50% decision coverage" << endl;
    cout << "b) The statement is true. Any single test case would cause the outcome of the “if” statement to be either true or false" << endl;
    cout << "c) The statement is false. A single test case can only guarantee 25% decision coverage in this case" << endl;
    cout << "d) The statement is false. The statement is too broad. It may be correct or not, depending on the tested software" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'B')
      return 1;
    else if (Answer == 'b')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question22(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #22 (1 Point)" << endl;
    cout << "Which one of the following is the description of statement coverage?" << endl;
    cout << "" << endl;

    cout << "a) It is a metric, which is the percentage of test cases that have been executed" << endl;
    cout << "b) It is a metric, which is the percentage of statements in the source code that have been executed" << endl;
    cout << "c) It is a metric, which is the number of statements in the source code that have been executed by test cases that are passed" << endl;
    cout << "d) It is a metric, that gives a true/false confirmation if all statements are covered or not" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'B')
      return 1;
    else if (Answer == 'b')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question23(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #23 (1 Point)" << endl;
    cout << "Which statement about the relationship between statement coverage and decision coverage is true?" << endl;
    cout << "" << endl;

    cout << "a)100% decision coverage also guarantees 100% statement coverage" << endl;
    cout << "b)100% statement coverage also guarantees 100% decision coverage" << endl;
    cout << "c)50% decision coverage also guarantees 50% statement coverage " << endl;
    cout << "d)Decision coverage can never reach 100%" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'A')
      return 1;
    else if (Answer == 'a')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question24(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #24 (1 Point)" << endl;
    cout << "For which of the following situations is exploratory testing suitable?" << endl;
    cout << "" << endl;

    cout << "a) When time pressure requires speeding up the execution of tests already specified" << endl;
    cout << "b) When the system is developed incrementally, and no test charter is available" << endl;
    cout << "c) When testers are available who have enough knowledge of similar applications and technologies" << endl;
    cout << "d) When an advanced knowledge of the system already exists, and evidence is to be provided that it should be tested intensively" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'C')
      return 1;
    else if (Answer == 'c')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question25(){
  cout << endl<< endl<< endl<< endl<< endl;


    cout << "  Question #25 (1 Point)" << endl;
    cout << "An employee’s bonus is to be calculated. It cannot be negative, but it can be calculated down to zero. The bonus is based on the length of employment:" << endl;
    cout << "less than or equal to 2 years" << endl;
    cout << "more than 2 years but less than 5 years" << endl;
    cout << "5 to 10 years inclusively" << endl;
    cout << "longer than 10 years" << endl;

    cout << "" << endl;
    cout << "What is the minimum number of test cases required to cover all valid equivalence partitions for calculating the bonus?" << endl;
    cout << "" << endl;


    cout << "a) 3" << endl;
    cout << "b) 5" << endl;
    cout << "c) 2" << endl;
    cout << "d) 4" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'D')
      return 1;
    else if (Answer == 'd')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question26(){
  cout << endl<< endl<< endl<< endl<< endl;
    cout << "  Question #26 (1 Point)" << endl;
    cout << "A speed control and reporting system has the following characteristics:" << endl;
    cout << "If you drive 50 km/h or less, nothing will happen." << endl;
    cout << "If you drive faster than 50 km/h, but no more than 55 km/h, you will be warned." << endl;
    cout << "If you drive faster than 55 km/h but not more than 60 km/h, you will be fined." << endl;
    cout << "If you drive faster than 60 km/h, your driving license will be suspended." << endl;
    cout << "The speed in km/h is available to the system as an integer value." << endl;

    cout << "" << endl;
    cout << "Which would be the most likely set of values (km/h) identified by applying the boundary value analysis, where only the values on the boundaries of the equivalence classes are selected?" << endl;
    cout << "" << endl;

    cout << "a) 0, 49, 50, 54, 59, 60" << endl;
    cout << "b) 50, 55, 60" << endl;
    cout << "c) 49, 50, 54, 55, 60, 62" << endl;
    cout << "d) 50, 51, 55, 56, 60, 61" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'D')
      return 1;
    else if (Answer == 'd')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question27(){

  cout << endl<< endl<< endl<< endl<< endl;



    cout << "  Question #27 (1 Point)" << endl;
    cout << "A company's employees are paid bonuses if they work more than a year in the company and achieve a target which is individually agreed before. These facts can be shown in a decision table:" << endl;
    cout << "" << endl;
    
    cout << "Test-ID                                      T1    T2    T3    T4" << endl;
    cout << "Condition1 Employment for more than 1 year?  YES   NO    NO    YES" << endl;
    cout << "Condition2 Agreed target?                    NO    NO    YES   YES" << endl;
    cout << "Condition3 Achieved target?                  NO    NO    YES   YES" << endl;
    cout << "Action Bonus payment                         NO    NO    NO    YES" << endl;
    cout << "" << endl;

    cout << "Which of the following test cases represents a situation that can happen in real life,and is missing in the above decision table?" << endl;
    cout << "" << endl;

    cout << "a) Condition1 = YES, Condition2 = NO, Condition3 = YES, Action= NO" << endl;
    cout << "b) Condition1 = YES, Condition2 = YES, Condition3 = NO, Action= YES" << endl;
    cout << "c) Condition1 = NO, Condition2 = NO, Condition3 = YES, Action= NO" << endl;
    cout << "d) Condition1 = NO, Condition2 = YES, Condition3 = NO, Action= NO" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'D')
      return 1;
    else if (Answer == 'd')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question28(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #28 (1 Point)" << endl;
    cout << "Which of the following statements about the given state transition diagram and table of test cases is TRUE?" << endl;
    cout << "" << endl;
    cout << "       /------------------\\                                   /--------------------------\\" << endl;
    cout << "       | TV Off (S1)      |  /       Power Off                |   TV Play (S3)           |" << endl;
    cout << "       |                  |-|---------------------------------|                          |" << endl;
    cout << "       |                  |  \\                                |                          |" << endl;
    cout << "       \\------------------/                                   |                          |" << endl;
    cout << "          |           |                                       |                          |" << endl;
    cout << "  Power   |          /|\\ Power                                |                          |" << endl;
    cout << "  ON      |           |  Off                                  |                          |" << endl;
    cout << "         \\|/          |                                       |                          |" << endl;
    cout << "          |           |                                       |                          |" << endl;
    cout << "       /------------------\\                                   |                          |" << endl;
    cout << "       | TV Standby (S2)  |           RC On                \\  |                          |" << endl;
    cout << "       |                  |---------------------------------|-|                          |" << endl;
    cout << "       |                  |                                /  |                          |" << endl;
    cout << "       |                  |  /                                |                          |" << endl;
    cout << "       |                  |-|---------------------------------|                          |" << endl;                       
    cout << "       \\------------------/  \\        RC Off                  \\--------------------------/" << endl;                  

    cout << "a) The given test cases cover both valid and invalid transitions in the state transition diagram " << endl;
    cout << "b) The given test cases represent all possible valid transitions in the state transition diagram " << endl;
    cout << "c) The given test cases represent some of the valid transitions in the state transition diagram " << endl;
    cout << "d) The given test cases represent pairs of transitions in the state transition diagram " << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'B')
      return 1;
    else if (Answer == 'b')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question29(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #29 (1 Point)" << endl;
    cout << "A video application has the following requirement: The application shall allow playing a video on the following display resolution:" << endl;
    cout << "1.640x480" << endl;
    cout << "2.1280x720" << endl;
    cout << "3.1600x1200" << endl;
    cout << "4.1920x1080" << endl;
    cout << "" << endl;
    
    cout << "Which of the following list of test cases is a result of applying the equivalence partitioning test technique to test this requirement?" << endl;

    cout << "" << endl;

    cout << "a) Verify that the application can play a video on a display of size 1920x1080 (1 test case)" << endl;
    cout << "b) Verify that the application can play a video on a display of size 640x480 and 1920x1080 (2 test cases)" << endl;
    cout << "c) Verify that the application can play a video on each of the display sizes in the requirement (4 test cases)" << endl;
    cout << "d) Verify that the application can play a video on any one of the display sizes in the requirement (1 test case)" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'C')
      return 1;
    else if (Answer == 'c')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question30(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #30 (1 Point)" << endl;
    cout << "Which of the following statements BEST describes how tasks are divided between the test manager and the tester?" << endl;
    cout << "" << endl;

    cout << "a) The test manager plans testing activities and chooses the standards to be followed, while the tester chooses the tools and set the tools usage guidelines" << endl;
    cout << "b) The test manager plans, coordinates and controls the testing activities, while the tester automates the tests" << endl;
    cout << "c) The test manager plans, monitors, and controls the testing activities, while the tester designs tests and decides on the release of the test object" << endl;
    cout << "d) The test manager plans and organizes the testing and specifies the test cases, while the tester executes the tests" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'B')
      return 1;
    else if (Answer == 'b')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question31(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #31 (1 Point)" << endl;
    cout << "Which of the following metrics would be MOST useful to monitor during test execution?" << endl;
    cout << "" << endl;

    cout << "a)Percentage of executed test cases" << endl;
    cout << "b)Average number of testers involved in the test execution" << endl;
    cout << "c)Coverage of requirements by source code" << endl;
    cout << "d)Percentage of test cases already created and reviewed" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'A')
      return 1;
    else if (Answer == 'a')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question32(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #32 (1 Point)" << endl;
    cout << "Which of the following can affect and be part of the (initial) test planning?" << endl;
    cout << "" << endl;

    cout << "a)Budget limitations" << endl;
    cout << "b)Test log" << endl;
    cout << "c)Failure rate" << endl;
    cout << "d)Use cases" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'A')
      return 1;
    else if (Answer == 'a')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question33(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #33 (1 Point)" << endl;
    cout << "Which of the following lists contains only typical exit criteria from testing?" << endl;
    cout << "" << endl;

    cout << "a) Reliability measures, test coverage, schedule and status about fixing defect and remaining risks" << endl;
    cout << "b) Reliability measures, test coverage, degree of tester’s independence and product completeness" << endl;
    cout << "c) Reliability measures, test coverage, test cost, availability of test environment, time to market and product completeness" << endl;
    cout << "d) Time to market, remaining defects, tester qualification, availability of testable use cases, test coverage and test cost" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'A')
      return 1;
    else if (Answer == 'a')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question34(){
  cout << endl<< endl<< endl<< endl<< endl;


    cout << "  Question #34 (1 Point)" << endl;
    cout << "Which one of the following is NOT included in a test summary report?" << endl;
    cout << "" << endl;

    cout << "a) Defining pass/fail criteria and objectives of testing" << endl;
    cout << "b) Deviations from the test approach" << endl;
    cout << "c) Measurements of actual progress against exit criteria" << endl;
    cout << "d) Evaluation of the quality of the test object" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'A')
      return 1;
    else if (Answer == 'a')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question35(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #35 (1 Point)" << endl;
    cout << "" << endl;
    cout << "The project develops a \"smart\" heating thermostat. The control algorithms of the thermostat were modeled as Matlab/Simulink models and run on the internet connected server. The thermostat uses the specifications of the server to trigger the heating valves." << endl;
    cout << "" << endl;
    cout << "The test manager has defined the following test strategy/approach in the test plan:" << endl;
    cout << "1. The acceptance test for the whole system is executed as an experience-based test." << endl;
    cout << "2. The control algorithms on the server are checked against standard of the energy saving regulation." << endl;
    cout << "3. The functional test of the thermostat is performed as risk-based testing." << endl;
    cout << "4. The security tests of data / communication via the internet are executed together with external security experts." << endl;
    cout << "" << endl;
    cout << "What four common types of test strategies/approaches did the test manager implement in the test plan?" << endl;
    cout << "" << endl;

    cout << "a) methodical, analytical, reactive and regression-averse" << endl;
    cout << "b) analytical, standard-compliant, consultative and reactive" << endl;
    cout << "c) model-based, methodical, analytical and consultative" << endl;
    cout << "d) regression-averse, consultative, reactive and methodical" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'B')
      return 1;
    else if (Answer == 'b')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question36(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #36 (1 Point)" << endl;
    cout << "Which one of the following is the characteristic of a metrics-based approach for test estimation?" << endl;
    cout << "" << endl;

    cout << "a) Budget which was used by a previous similar test project" << endl;
    cout << "b) Overall experience collected in interviews with test managers" << endl;
    cout << "c) Estimation of effort for test automation agreed in the test team" << endl;
    cout << "d) Average of calculations collected from business experts" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'A')
      return 1;
    else if (Answer == 'a')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question37(){
    cout << endl<< endl<< endl<< endl<< endl;


    cout << "Question #37 (1 Point)" << endl;
    cout << "As a test manager you are responsible for testing the following parts of requirements:" << endl;
    cout << "R1 - Process anomalies      R2 - Synchronization        R3 - Approval               " << endl;
    cout << "R4 - Problem solving        R5 - Financial data         R6 - Diagram data" << endl;
    cout << "R7 - Changes to the user profile" << endl;
    cout << "Notation: Logical requirement dependencies (A -> B means, that B depends on A):" << endl;
    cout << "" << endl;
    cout << "                                                              ------ " << endl;
    cout << "                                                       |----->| R4 | " << endl;
    cout << "                          ------     ---------------   |      ------ " << endl;
    cout << "                          |    |---->|      R2     |----             " << endl;    
    cout << "                          | R1 |     |      |      |                 " << endl;   
    cout << "                          |    |     | R5<----->R6 |----             " << endl;
    cout << "                          ------     ---------------   |      ------ " << endl;
    cout << "                             |              ^          |----->| R7 | " << endl;
    cout << "                             |              |                 ------ " << endl;
    cout << "                             |           ------                      " << endl;    
    cout << "                             |---------->| R3 |                      " << endl;
    cout << "                                         ------                      " << endl;
    cout << "" << endl;
    
    cout << "Which one of the following options structures the test execution schedule according to the requirement dependencies?" << endl;
    cout << "" << endl;

    cout << "a) R1 -> R3 -> R4 -> R7 -> R2 -> R5 -> R6" << endl;
    cout << "b) R1 -> R3 -> R2 -> R4 -> R7 -> R5 -> R6" << endl;
    cout << "c) R1 -> R3 -> R2 -> R5 -> R6 -> R4 -> R7" << endl;
    cout << "d) R1 -> R2 -> R5 -> R6 -> R3 -> R4 -> R7" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'C')
      return 1;
    else if (Answer == 'c')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question38(){
    cout << endl<< endl<< endl<< endl<< endl;


    cout << "Question #38 (1 Point)" << endl;
    cout << "You are testing a new version of software for a coffee machine. The machine can prepare different types of coffee based on four categories. i.e., coffee size, sugar, milk, and syrup. The criteria are as follows:" << endl;
    cout << "" << endl;
    cout << "Coffee size (small, medium, large)" << endl;
    cout << "Sugar (none, 1 unit, 2 units, 3 units, 4 units)" << endl;
    cout << "Milk (yes or no)" << endl;
    cout << "Coffee flavor syrup (no syrup, caramel, hazelnut, vanilla)" << endl;
    cout << "" << endl;
    cout << "Now you are writing a defect report with the following information:" << endl;
    cout << "Title: Low coffee temperature." << endl;
    cout << "Short summary: When you select coffee with milk, the time for preparing coffee is too long and the temperature of the beverage is too low (less than 40 °C)." << endl;
    cout << "Expected result: The temperature of coffee should be standard (about 75 °C)." << endl;
    cout << "Degree of risk: Medium" << endl;
    cout << "Priority: Normal" << endl;
    cout << "" << endl;
    cout << "What valuable information was omitted in the above defect report?" << endl;
    cout << "" << endl;
 
    cout << "a) The actual test results" << endl;
    cout << "b) Identification of the tested software version" << endl;
    cout << "c) Status of the defect" << endl;
    cout << "d) Ideas for improving the test case" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'B')
      return 1;
    else if (Answer == 'b')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question39(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #39 (1 Point)" << endl;
    cout << "Which one of the following is MOST likely to be a benefit of test execution tools?" << endl;
    cout << "" << endl;

    cout << "a) It is easy to create regression tests" << endl;
    cout << "b) It is easy to maintain version control of test assets" << endl;
    cout << "c) It is easy to design tests for security testing" << endl;
    cout << "d) It is easy to run regression tests" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'D')
      return 1;
    else if (Answer == 'd')
      return 1;  
    else return 0;
  }
  int  processCTFL_A_v1p6Question40(){
  cout << endl<< endl<< endl<< endl<< endl;

    cout << "  Question #40 (1 Point)" << endl;
    cout << "Which one of the following test tools is mostly suitable for developers rather than testers?" << endl;
    cout << "" << endl;
    
    cout << "a) Requirement management tools" << endl;
    cout << "b) Configuration management tools" << endl;
    cout << "c) Defect management tools" << endl;
    cout << "d) Performance testing tools" << endl;
    
    char Answer = getAnswer();
    
    if (Answer == 'C')
      return 1;
    else if (Answer == 'c')
      return 1;  
    else return 0;
    
  
  }


void processCTFL_A_v1p6Question1Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 1 LO FL-1.x (K1)  " << endl;
  cout << endl;

  cout << "a. Is not correct. Definition of feature according to glossary " << endl;
  cout << "b. Is correct. From glossary " << endl;
  cout << "c. Is not correct. Definition of functionality suitability according to glossary " << endl;
  cout << "d. Is not correct. Like Definition of Decision table testing according to glossary " << endl;
  cout << endl;
}


void processCTFL_A_v1p6Question2Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 2 LO FL-1.1.1  (K1)  " << endl;
  cout << endl;

  cout << "a.  Is not correct. Contradiction to principle 3: “Early testing saves time and money” " << endl;
  cout << "b. Is correct. This is one objective of testing " << endl;
  cout << "c. Is not correct. Principle #2 states that exhaustive testing is impossible, so one can never prove that all defects were identified " << endl;
  cout << "d. Is not correct. To make an assessment whether a defect will cause a failure or not, one must detect the defect first. Saying that no remaining defect will cause a failure implicitly means that all defects were found. This again contradicts principle #2 " << endl;
  cout << endl;
  
}

void processCTFL_A_v1p6Question3Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 3  LO FL-1.1.2 (K2)  " << endl;
  cout << endl;

  cout << "a. Is not correct. Testing does not identify the source of defects, debugging identifies the defects " << endl;
  cout << "b. Is correct. Dynamic testing can show failures that are caused by defects in the software. Debugging eliminates the defects, which are the source of failures, not the root cause of the defects" << endl;
  cout << "c. Is not correct. Testing does not remove faults, but debugging remove defects that cause the faults " << endl;
  cout << "d. Is not correct. Dynamic testing does not directly prevent the causes of failures (defects) but detects the presence of defects " << endl;
  cout << endl;
  


}


void processCTFL_A_v1p6Question4Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 4 LO FL-1.2.3 (K2)  " << endl;
  cout << endl;

  cout << "a. Is correct. A crash is clearly noticeable by the user " << endl;
  cout << "b. Is not correct. this is a defect, not a failure, since there is something wrong in the code. It may not result in a visible or noticeable failure, for example if the changes in the source code file are only in comments" << endl;
  cout << "c. Is not correct. The use of wrong input variables may not result in a visible or noticeable failure, for example if nobody uses this particular algorithm; or if the wrong input variable has a similar value to the correct input variable; or if the FALSE result of the algorithm is not used " << endl;
  cout << "d. Is not correct. This type of fault will not necessarily lead to a failure; for example, if no one uses this special algorithm" << endl;
  cout << endl;
  
}

void processCTFL_A_v1p6Question5Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 5 LOFL-1.3.1  (K2)  " << endl;
  cout << endl;

  cout << "a. Is not correct. Testing is context dependent, regardless of it being manual or automated (principle #6), but does not result in detecting a decreasing number of faults as described above" << endl;
  cout << "b. Is not correct. Exhaustive testing is impossible, regardless of the amount of effort put into testing (principle #2)" << endl;
  cout << "c. Is correct. Principle #5 says “If the same tests are repeated over and over again, eventually these tests no longer find any new defects. To detect new defects, existing tests and test data may need changing, and new tests may need to be written.” Automated regression testing of the same test cases will not bring new findings" << endl;
  cout << "d. Is not correct. ”Defect cluster together” (principle #4). A small number of modules usually contain most of the defects, but this does not mean that fewer and fewer defects will be found " << endl;
  cout << endl;


}


void processCTFL_A_v1p6Question6Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 6 LO FL-1.2.2 (K2)  " << endl;
  cout << endl;

  cout << "a. Is not correct. Static testing (reviews) contributes, but could not ensure, that requirements are detailed enough" << endl;
  cout << "b. Is correct. Testing contributes to the achievement of quality in a variety of ways, e.g. such as reducing the risk of inadequate software quality" << endl;
  cout << "c. Is not correct. This is quality assurance but not testing" << endl;
  cout << "d. Is not correct. The quality cannot be measured by counting the number of executed test cases without knowing the outcome" << endl;
  cout << endl;
  
}

void processCTFL_A_v1p6Question7Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 7 LO FL-1.4.2 (K2)  " << endl;
  cout << endl;

  cout << "a. Is not correct. This activity is performed during the test design activity (test design)" << endl;
  cout << "b. Is not correct. This activity is performed during the test implementation activity (test implementation)" << endl;
  cout << "c. Is not correct. This activity is performed during the test completion activity (test completion)" << endl;
  cout << "d. Is correct. This activity is performed during the test analysis activity (test analysis)" << endl;
  cout << endl;






}


void processCTFL_A_v1p6Question8Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 8 LO FL-1.4.3 (K2)  " << endl;
  cout << endl;

  cout << "Glossary defines the following tests as:" << endl;

  cout << "* Test suite: “A set of test scripts or test procedures to be executed in a specific test run.” (1A) " << endl;
  cout << "* Test case: “A set of preconditions, inputs, actions (where applicable), expected results and post conditions, developed based on test conditions” (2C) " << endl;
  cout << "* Test script: “A sequence of instructions for the execution of a test” (3B) " << endl;
  cout << "* Test charter: “Documentation of test activities in session-based exploratory testing” (4D) " << endl;


  cout << "Thus:" << endl;

  cout << "a. Is correct" << endl;
  cout << "b. Is not correct" << endl;
  cout << "c. Is not correct" << endl;
  cout << "d. Is not correct" << endl;
  cout << endl;







}

void processCTFL_A_v1p6Question9Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 9 LO FL-2.3.2 (K1)  " << endl;
  cout << endl;

  cout << "a. Is not correct. Relevant for integration testing" << endl;
  cout << "b. Is not correct. Relevant for component testing" << endl;
  cout << "c. Is correct. For acceptance testing, tests are designed to cover all supported financial data file structures and value ranges for bank-to- bank transfers" << endl;
  cout << "d. Is not correct. Relevant for system testing    " << endl;  
  
  cout << endl;

}


void processCTFL_A_v1p6Question10Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 10 LO FL-2.2.1 (K2)  " << endl;
  cout << endl;

  cout << "a. Is not correct. System testing does not test interfaces between components and interactions between different parts of the system; this is a target of integration tests" << endl;
  cout << "b. Is correct. Examples of work products that can be used as a test basis for component testing include detailed design, code, data model, component specifications. Examples of work products for system testing include system and software requirement specifications (functional and non-functional) use cases" << endl;
  cout << "c. Is not correct. Component testing does not ONLY focus on functional characteristics" << endl;
  cout << "d. Is not correct. Component tests are also executed by developers, whereas system testing typically is the responsibility of (independent) testers" << endl;
  cout << endl;
  
}

void processCTFL_A_v1p6Question11Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 11 LO FL-2.3.3 (K2)  " << endl;
  cout << endl;

  cout << "a. Is not correct. Regression testing does not check successful implementation of corrections and confirmation testing does not check for side effects" << endl;
  cout << "b. Is not correct. The statement about confirmation testing should be about regression testing" << endl;
  cout << "c. Is correct. See reasons from incorrect answers" << endl;
  cout << "d. Is not correct. Testing new functionality is not regression testing" << endl;
  cout << endl;

}


void processCTFL_A_v1p6Question12Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 12 LO FL-2.1.1 (K2)  " << endl;
  cout << endl;

  cout << "a. Is correct. Incremental development involves establishing requirements, designing, building, and testing a system in pieces" << endl;
  cout << "b. Is not correct. This is a sequential model" << endl;
  cout << "c. Is not correct. This describes the waterfall model" << endl;
  cout << "d. Is not correct. Testing alone is not an increment/additional step in the development" << endl;
  cout << endl;



}

void processCTFL_A_v1p6Question13Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 13 LO FL-2.4.1 (K2)  " << endl;
  cout << endl;

  cout << "a. Is correct. This is maintainability testing, not maintenance testing" << endl;
  cout << "b. Is not correct. This is a trigger for maintenance testing: Operational tests of the new environment as well as of the changed software" << endl;
  cout << "c. Is not correct. This is the trigger for maintenance testing: testing restore/retrieve procedures after archiving for long retention periods" << endl;
  cout << "d. Is not correct. This is the trigger for maintenance testing: Reactive modification of a delivered software product to correct emergency defects that have caused actual failures " << endl;
  cout << endl;

}


void processCTFL_A_v1p6Question14Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 14 LO FL-3.2.2 (K1)  " << endl;
  cout << endl;

  cout << "a. Is not correct. Tester and developer are NOT roles in a formal review" << endl;
  cout << "b. Is not correct. Developer is NOT a role in a formal review" << endl;
  cout << "c. Is not correct. Designer is NOT a role in a formal review" << endl;
  cout << "d. Is correct. See reasons from incorrect answers" << endl;
  cout << endl;


}

void processCTFL_A_v1p6Question15Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 15 LO FL-3.2.1 (K2)  " << endl;
  cout << endl;

  cout << "a. Is not correct. ‘Collection of metrics’ belongs to the main activity “Fixing and Reporting”" << endl;
  cout << "b. Is not correct. ‘Answer any question.’ belongs to the main activity “Initiate Review”" << endl;
  cout << "c. Is correct. The checking of entry criteria takes place in the planning of a formal review" << endl;
  cout << "d. Is not correct. The evaluation of the review findings against the exit criteria belongs to the main activity “Issue communication and analysis”" << endl;
  cout << endl;

}


void processCTFL_A_v1p6Question16Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 16 LO FL-3.2.3 (K2)  " << endl;
  cout << endl;

  cout << "a. Is not correct. Informal review does not use a formal process" << endl;
  cout << "b. Is not correct. Use of checklists are optional" << endl;
  cout << "c. Is correct. Inspection is a formal process based on rules and checklists" << endl;
  cout << "d. Is not correct. Does not explicitly require a formal process and the use of checklists is optional" << endl;
  
    
  cout << endl;

}

void processCTFL_A_v1p6Question17Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 17 LO FL-3.1.2 (K2)  " << endl;
  cout << endl;

  cout << "a. Is correct. Defects found early are often much cheaper to remove than defects detected later in the lifecycle" << endl;
  cout << "b. Is not correct. Dynamic testing still has its challenging, because they find other types of defects" << endl;
  cout << "c. Is not correct. This is dynamic testing " << endl;
  cout << "d. Is not correct. Static testing is important for safety-critical computer systems " << endl;
  cout << endl;
}


void processCTFL_A_v1p6Question18Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 18 LO FL-3.2.4 (K3)  " << endl;
  cout << endl;

  cout << "a. Is not correct. It is described that the software architect must have completed the system specification" << endl;
  cout << "b. Is not correct. ‘Checklist-based’, last sentence it is documented that you should also look for defects outside the checklist" << endl;
  cout << "c. Is not correct. It is described: every reviewer did his review done comment" << endl;
  cout << "d. Is correct. It is described that a checklist is available, but who provides the checklist?" << endl;
  cout << endl;

}

void processCTFL_A_v1p6Question19Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 19 LO FL-4.x (K1)  " << endl;
  cout << endl;

  cout << "a. Is not correct. This is error guessing" << endl;
  cout << "b. Is not correct. This is black-box test technique" << endl;
  cout << "c. Is correct. See reasons from incorrect answers" << endl;
  cout << "d. Is not correct. This is exploratory testing" << endl;
  cout << endl;

}


void processCTFL_A_v1p6Question20Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 20 LO FL-4.1.1 (K2)  " << endl;
  cout << endl;

  cout << "a. Is not correct. This is a white-box test technique " << endl;
  cout << "b. Is not correct. This is a white-box test technique " << endl;
  cout << "c. Is not correct. This is an experience-based test technique " << endl;
  cout << "d. Is correct. Black-box test techniques are based on an analysis of the appropriate test basis (e.g. formal requirements documents, specifications, use cases, user stories)" << endl;
  cout << endl;



}

void processCTFL_A_v1p6Question21Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 21 LO FL-4.3.2 (K2)  " << endl;
  cout << endl;

  cout << "a. Is not correct. While the given statement is true, the explanation is not. The relationship between statement and decision coverage is misrepresented" << endl;
  cout << "b. Is correct. Since any test case will cause the outcome of the “if” statement to be either TRUE or FALSE, by definition we achieved 50% decision coverage" << endl;
  cout << "c. Is not correct. A single test case can give more than 25% decision coverage, this means according to the statement above always 50 % decision coverage" << endl;
  cout << "d. Is not correct. The statement is specific and always true, because each test case achieves 50 % decision coverage" << endl;
  cout << endl;






}


void processCTFL_A_v1p6Question22Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 22 LO FL-4.3.1 (K2)  " << endl;
  cout << endl;

  cout << "a. Is not correct. Statement coverage measures the percentage of statements exercised by test cases" << endl;
  cout << "b. Is correct. Statement testing exercises the executable statements in the code. Statement coverage is measured as the number of statements executed by the tests divided by the total number of executable statements in the test object, normally expressed as a percentage" << endl;
  cout << "c. Is not correct. The coverage does not measure pass/fail" << endl;
  cout << "d. Is not correct. It is a metric and does not provide true/false statements" << endl;
  cout << endl;


  // Answer with justification
  cout << "" << endl;
    
}

void processCTFL_A_v1p6Question23Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 23 LO FL-4.3.3 (K2)  " << endl;
  cout << endl;

  cout << "a. Is correct. The statement is true. Achieving 100% decision coverage guarantees 100% statement coverage" << endl;
  cout << "b. Is not correct. The statement is false because achieving 100 % statement coverage does not in any case mean that the decision coverage is 100%" << endl;
  cout << "c. Is not correct. The statement is false, because we can only do statements about 100% values" << endl;
  cout << "d. Is not correct. The statement is false" << endl;
  cout << endl;
    
}


void processCTFL_A_v1p6Question24Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 24 LO FL-4.4.2 (K2)  " << endl;
  cout << endl;

  cout << "a. Is not correct. Exploratory testing is not suitable to speed up tests, which are already specified. It is most useful when there are few or inappropriate specified requirements or significant time pressure on testing" << endl;
  cout << "b. Is not correct. The absence of a test charter, which may have been derived from the test analysis, is a poor precondition for the use of exploratory testing" << endl;
  cout << "c. Is correct. Exploratory tests should be performed by experienced testers with knowledge of similar applications and technologies" << endl;
  cout << "d. Is not correct. Explorative testing alone is not suitable to provide evidence that the test was very intensive, instead the evidence is provided in combination with other test methods" << endl;
  cout << endl;
  
 

}

void processCTFL_A_v1p6Question25Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 25 LO FL-4.2.1 (K3)  " << endl;
  cout << endl;

  cout << "a. Is not correct. one too few (see the four correct partitions in d) " << endl;
  cout << "b. Is not correct. one too much (see the four correct partitions in d)" << endl;
  cout << "c. Is not correct. two too few (see the four correct partitions in d)" << endl;
  cout << "d. Is correct. The 4 equivalence partitions correspond to the description in the question, i.e. at least one test case must be created for each equivalence partition" << endl;
  cout << "" << endl;
  cout << "1. Equivalence partition: 0 ≤ employment time ≤ 2." <<endl;
  cout << "2. Equivalence partition: 2 < employment time < 5." <<endl;
  cout << "3. Equivalence partition: 5 ≤ employment time ≤ 10." <<endl;
  cout << "4. Equivalence partition: 10 < employment time." <<endl;



}


void processCTFL_A_v1p6Question26Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 26 LO FL-4.2.2 (K3)  " << endl;
  cout << "The following partitions can be identified: " << endl;
  cout << "1. <= 50, boundary value 50" << endl;
  cout << "2. 51 – 55 boundary values 51, 55" << endl;
  cout << "3. 56 – 60 boundary values 56, 60" << endl;
  cout << "4. >=61 boundary value 61" << endl;
  cout << "Boundary value according to glossary V.3.2: A minimum or maximum value of an ordered equivalence partition " << endl;
  cout << "Thus:" << endl;

  cout << "a. Is not correct. Does not include all necessary boundary values, but it includes additional values: 0, 49, and 59, which are not boundary values in this equivalence partition" << endl;
  cout << "b. Is not correct. Does not include all necessary boundary values. 51 and 55 are missing" << endl;
  cout << "c. Is not correct. Does not include necessary boundary values but it includes additional values: 49, 62, and 54, which are not boundary values in this equivalence partition " << endl;
  cout << "d. Is correct. includes all necessary boundary values" << endl;
  cout << endl;  

}

void processCTFL_A_v1p6Question27Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 27 LO FL-4.2.3 (K3)  " << endl;
  cout << endl;

  cout << "a. Is not correct. If there was no agreement on targets, it is impossible to reach the targets. Since this situation can´t occur, this is not a scenario happening in reality" << endl;
  cout << "b. Is not correct. The test case is objectively wrong, since under these conditions no bonus is paid because the agreed target was not reached" << endl;
  cout << "c. Is not correct. There was no agreement on targets, it is impossible to reach the targets. Since this situation can´t occur, this is not a scenario happening in reality" << endl;
  cout << "d. Is correct. The test case describes the situation that the too short period of employment and the non-fulfilment of the agreed target leads to non-payment of the bonus. This situation can occur in practice but is missing in the decision table" << endl;
  cout << endl;
 
}


void processCTFL_A_v1p6Question28Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 28 LO FL-4.2.4 (K3)  " << endl;
  cout << "Proposed test case covers all five possible single valid transitions in the given state diagram (S1->S2, S2->S1, S2->S3, S3->S2, and S3->S1)." << endl;

  cout << "a. Is not correct. Because no invalid transitions are covered" << endl;
  cout << "b. Is correct. Because all valid transitions are covered" << endl;
  cout << "c. Is not correct. Because all valid transitions are covered" << endl;
  cout << "d. Is not correct. Because the test cases do not have pairs of transitions specified" << endl;
  cout << endl;
}

void processCTFL_A_v1p6Question29Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 29 LO FL-4.2.1 (K3)  " << endl;
  cout << endl;

  cout << "a. Is not correct. See reason from correct answer" << endl;
  cout << "b. Is not correct. See reason from correct answer" << endl;
  cout << "c. Is correct. This is a case where the requirement gives an enumeration of discrete values. Each enumeration value is an equivalence class by itself; therefore, each will be tested when using equivalence partitioning test technique" << endl;
  cout << "d. Is not correct. See reason from correct answer " << endl;
  cout << endl;
  
}


void processCTFL_A_v1p6Question30Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 30 LO FL-5.1.2 (K1)  " << endl;
  cout << endl;

  cout << "a. Is not correct. Selection of tools is a test manager task" << endl;
  cout << "b. Is correct. See reasons from incorrect answers" << endl;
  cout << "c. Is not correct. The tester does not decide on the release of the test object" << endl;
  cout << "d. Is not correct. The tester specifies the test cases, the test manager does the prioritization" << endl;
  cout << endl;
  


}

void processCTFL_A_v1p6Question31Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 31 LO FL-5.3.1 (K1)  " << endl;
  cout << endl;

  cout << "a. Is correct. Test case execution (e.g. number of test cases run/not run, and test cases passed/failed)" << endl;
  cout << "b. Is not correct. This metric can be measured, but its value is low. The number of testers does not give any information about the quality of the test object or test progress" << endl;
  cout << "c. Is not correct. the coverage of requirements by source code is not measured during test execution. At most, the TEST(!) coverage of the code or requirements is measured" << endl;
  cout << "d. Is not correct. This metric is part of test preparation and not test execution" << endl;
  cout << endl;
  
}


void processCTFL_A_v1p6Question32Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 32 LO FL-5.2.1 (K2)  " << endl;
  cout << endl;

  cout << "a. Is correct. Making decisions about what to test are documented in the test plan. This means when you are planning the test and there are budget limitations, prioritizing is needed; what should be tested and what should be omitted" << endl;
  cout << "b. Is not correct. Test monitoring and control" << endl;
  cout << "c. Is not correct. Common test metrics" << endl;
  cout << "d.Is not correct. It is a part of test analysis" << endl;
  cout << endl;
  



}


void processCTFL_A_v1p6Question33Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 33 LO FL-5.2.1 (K2)  " << endl;
  cout << endl;

  cout << "a. Is correct. See reasons from incorrect answers" << endl;
  cout << "b. Is not correct. The “degree of tester’s independence” does not play a role in exit criteria" << endl;
  cout << "c. Is not correct. “Availability of test environment” is an entry criterion" << endl;
  cout << "d. Is not correct. “The Qualification of Tester” is not a typical exit criterion" << endl;
  cout << endl;
}


void processCTFL_A_v1p6Question34Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 34 LO FL-5.3.2 (K2)  " << endl;
  cout << endl;

  cout << "a. Is correct. This information has been defined earlier in the test project" << endl;
  cout << "b. Is not correct. This information is included in a test report: information on what occurred during a test period" << endl;
  cout << "c. Is not correct. This information is included in a test report:" << endl;
  cout << "  * Status of testing and product quality with respect to the exit criteria or definition of done" << endl;
  cout << "  * Metrics of defects, test cases, test coverage, activity progress, and resource consumption" << endl;
  cout << "d. Is not correct. This information is included in a test report: Information and metrics to support recommendations and decisions about future actions, such as an assessment of defects remaining, the economic benefit of continued testing, outstanding risks, and the level of confidence in the tested software" << endl;
  cout << endl;

}

void processCTFL_A_v1p6Question35Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 35 LO FL-5.2.2 (K2)  " << endl;
  cout << "  The possible mappings of points 1 to 4 can be justified as follows:" << endl;
  cout << "1. Approach 3 is analytical: Risk-based testing is an example of an analytical approach, where tests are designed and prioritized based on the level of risk" << endl;
  cout << "2. Approach 2 is standard-compliant: The control algorithms is checked against industry-specific standard of the energy saving regulation." << endl;
  cout << "3. Approach 4 is consultative: This type of test strategy is driven primarily by the advice, guidance, or instructions of stakeholders, business domain experts, or technology experts, who may be outside the test team or outside the organization itself" << endl;
  cout << "4. Approach 1 is reactive: Exploratory testing is a common technique employed in reactive strategies, whereby the explorative testing is assigned to the experience-based testing category" << endl;
  cout << "" << endl;

  cout << "Thus:" << endl;
  cout << "a. Is not correct" << endl;
  cout << "b. Is correct" << endl;
  cout << "c. Is not correct" << endl;
  cout << "d. Is not correct" << endl;
  cout << endl;
}


void processCTFL_A_v1p6Question36Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 36 LO FL-5.2.6 (K2)  " << endl;
  cout << endl;

  cout << "a. Is correct. The metrics-based approach: estimating the testing effort based on metrics of former similar projects or based on typical values" << endl;
  cout << "b. Is not correct. This is expert-based approach: estimating the tasks based on estimates made by the owners of the tasks or by experts" << endl;
  cout << "c. Is not correct. This is expert-based approach: estimating the tasks based on estimates made by the responsible team of the tasks or by experts" << endl;
  cout << "d. Is not correct. This is expert-based approach: estimating the tasks based on estimates made by the owners of the tasks or by experts" << endl;
  cout << endl;


}

void processCTFL_A_v1p6Question37Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 37 LO FL-5.2.4 (K3)  " << endl;
  cout << endl;

  cout << "a.  Is not correct. R4 is dependent on R2, so R2 should be tested before R4" << endl;
  cout << "b.  Is not correct. R4 is dependent on R2, R5 and R6, so R5 and R6 should be tested before R4" << endl;
  cout << "c.  Is correct. The tests are specified in a sequence that takes the dependencies into account" << endl;
  cout << "d.  Is not correct. R2 is dependent on R3, so R3 should be tested before R2" << endl;
  cout << endl;
  
}
  
  void processCTFL_A_v1p6Question38Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 38 LO FL-5.6.1 (K3)  " << endl;
  cout << endl;

  cout << "a. Is not correct. The test result is given in the short summary" << endl;
  cout << "b. Is correct. When testing different versions of software, identifying information is necessary" << endl;
  cout << "c. Is not correct. You are just writing the defect report; hence, the status is automatically open" << endl;
  cout << "d. Is not correct. This information is useful for the tester but does not need to be included in the defect report" << endl;
  cout << endl;


}
  
  void processCTFL_A_v1p6Question39Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 39 LO FL-6.1.2 (K1)  " << endl;
  cout << endl;

  cout << "a. Is not correct. The benefits are not when creating regressions tests, more in executing them" << endl;
  cout << "b. Is not correct. This is done by configuration management tools" << endl;
  cout << "c. Is not correct. This needs specialized tools" << endl;
  cout << "d.  Is correct. Reduction in repetitive manual work (e.g. running regression tests, environment set up/tear down tasks, re-entering the same test data, and checking against coding standards), thus saving time" << endl;
  cout << endl;
  

}
  
  void processCTFL_A_v1p6Question40Incorrect(){
  cout << "" << endl;
  // Question# LO Identifier (KLevel) LO Text
  cout << "Question 40 LO FL-6.1.1 (K2)  " << endl;
  cout << endl;

  cout << "a. Is not correct. Requirement management tools are acc. CTFL Syllabus 2018, section 6.1.1 not particularly suitable for developers (no suffix “E”) not better suited for developers than for testers." << endl;
  cout << "b. Is not correct. Configuration management tools are acc. CTFL Syllabus 2018, section 6.1.1 not particularly suitable for developers (no suffix “E”)" << endl;
  cout << "c. Is correct. Static analysis tools are especially suitable for developers according to CTFL Syllabus 2018, section 6.11" << endl;
  cout << "d. Is not correct. Performance testing tools are not better suited for developers according to CTFL Syllabus 2018; Section 6.1.1 (no suffix “E”))" << endl;
  cout << endl;

}
    
int  processCTFL_A_v1p6Exam(){

  int pointsScoredForQuestion =0;
  int scoreTotal = 0;
  int scoreByQuestion[40];
  for (int i =0; i< 40; i++)
      scoreByQuestion[i] = 0;


  printCTFL_A_v1p6Introduction();
  cout << "There are 40 questions, each worth one point. The Sample Exam has a time limit of 60 minutes, but this is not enforced by this software"<< endl;
  cout << "Uppercase or lowercase answers are acceptable "<< endl;

  int score = 0;
  pointsScoredForQuestion = processCTFL_A_v1p6Question1();
  scoreByQuestion[0] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;
    
  pointsScoredForQuestion = processCTFL_A_v1p6Question2();
  scoreByQuestion[1] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question3();
  scoreByQuestion[2] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question4();
  scoreByQuestion[3] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question5();
  scoreByQuestion[4] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;


  pointsScoredForQuestion = processCTFL_A_v1p6Question6();
  scoreByQuestion[5] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question7();
  scoreByQuestion[6] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question8();
  scoreByQuestion[7] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question9();
  scoreByQuestion[8] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question10();
  scoreByQuestion[9] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;



  pointsScoredForQuestion = processCTFL_A_v1p6Question11();
  scoreByQuestion[10] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question12();
  scoreByQuestion[11] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question13();
  scoreByQuestion[12] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question14();
  scoreByQuestion[13] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question15();
  scoreByQuestion[14] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;


  pointsScoredForQuestion = processCTFL_A_v1p6Question16();
  scoreByQuestion[15] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question17();
  scoreByQuestion[16] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question18();
  scoreByQuestion[17] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question19();
  scoreByQuestion[18] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question20();
  scoreByQuestion[19] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;




  pointsScoredForQuestion = processCTFL_A_v1p6Question21();
  scoreByQuestion[20] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question22();
  scoreByQuestion[21] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question23();
  scoreByQuestion[22] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question24();
  scoreByQuestion[23] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question25();
  scoreByQuestion[24] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;


  pointsScoredForQuestion = processCTFL_A_v1p6Question26();
  scoreByQuestion[25] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question27();
  scoreByQuestion[26] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question28();
  scoreByQuestion[27] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question29();
  scoreByQuestion[28] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question30();
  scoreByQuestion[29] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;




  pointsScoredForQuestion = processCTFL_A_v1p6Question31();
  scoreByQuestion[30] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question32();
  scoreByQuestion[31] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question33();
  scoreByQuestion[32] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question34();
  scoreByQuestion[33] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question35();
  scoreByQuestion[34] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;


  pointsScoredForQuestion = processCTFL_A_v1p6Question36();
  scoreByQuestion[35] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question37();
  scoreByQuestion[36] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question38();
  scoreByQuestion[37] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question39();
  scoreByQuestion[38] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;

  pointsScoredForQuestion = processCTFL_A_v1p6Question40();
  scoreByQuestion[39] = pointsScoredForQuestion;
  scoreTotal += pointsScoredForQuestion;




    cout <<"All Questions Complete, you scored " << scoreTotal  << " out of 40. Details of incorrectly answered questions are below" << endl;
  
  
    if (scoreByQuestion[0] == 0)  processCTFL_A_v1p6Question1Incorrect();
    if (scoreByQuestion[1] == 0)  processCTFL_A_v1p6Question2Incorrect();
    if (scoreByQuestion[2] == 0)  processCTFL_A_v1p6Question3Incorrect();
    if (scoreByQuestion[3] == 0)  processCTFL_A_v1p6Question4Incorrect();
    if (scoreByQuestion[4] == 0)  processCTFL_A_v1p6Question5Incorrect();

    if (scoreByQuestion[5] == 0)  processCTFL_A_v1p6Question6Incorrect();
    if (scoreByQuestion[6] == 0)  processCTFL_A_v1p6Question7Incorrect();
    if (scoreByQuestion[7] == 0)  processCTFL_A_v1p6Question8Incorrect();
    if (scoreByQuestion[8] == 0)  processCTFL_A_v1p6Question9Incorrect();
    if (scoreByQuestion[9] == 0)  processCTFL_A_v1p6Question10Incorrect();


    if (scoreByQuestion[10] == 0)  processCTFL_A_v1p6Question11Incorrect();
    if (scoreByQuestion[11] == 0)  processCTFL_A_v1p6Question12Incorrect();
    if (scoreByQuestion[12] == 0)  processCTFL_A_v1p6Question13Incorrect();
    if (scoreByQuestion[13] == 0)  processCTFL_A_v1p6Question14Incorrect();
    if (scoreByQuestion[14] == 0)  processCTFL_A_v1p6Question15Incorrect();

    if (scoreByQuestion[15] == 0)  processCTFL_A_v1p6Question16Incorrect();
    if (scoreByQuestion[16] == 0)  processCTFL_A_v1p6Question17Incorrect();
    if (scoreByQuestion[17] == 0)  processCTFL_A_v1p6Question18Incorrect();
    if (scoreByQuestion[18] == 0)  processCTFL_A_v1p6Question19Incorrect();
    if (scoreByQuestion[19] == 0)  processCTFL_A_v1p6Question20Incorrect();


    if (scoreByQuestion[20] == 0)  processCTFL_A_v1p6Question21Incorrect();
    if (scoreByQuestion[21] == 0)  processCTFL_A_v1p6Question22Incorrect();
    if (scoreByQuestion[22] == 0)  processCTFL_A_v1p6Question23Incorrect();
    if (scoreByQuestion[23] == 0)  processCTFL_A_v1p6Question24Incorrect();
    if (scoreByQuestion[24] == 0)  processCTFL_A_v1p6Question25Incorrect();

    if (scoreByQuestion[25] == 0)  processCTFL_A_v1p6Question26Incorrect();
    if (scoreByQuestion[26] == 0)  processCTFL_A_v1p6Question27Incorrect();
    if (scoreByQuestion[27] == 0)  processCTFL_A_v1p6Question28Incorrect();
    if (scoreByQuestion[28] == 0)  processCTFL_A_v1p6Question29Incorrect();
    if (scoreByQuestion[29] == 0)  processCTFL_A_v1p6Question30Incorrect();



    if (scoreByQuestion[30] == 0)  processCTFL_A_v1p6Question31Incorrect();
    if (scoreByQuestion[31] == 0)  processCTFL_A_v1p6Question32Incorrect();
    if (scoreByQuestion[32] == 0)  processCTFL_A_v1p6Question33Incorrect();
    if (scoreByQuestion[33] == 0)  processCTFL_A_v1p6Question34Incorrect();
    if (scoreByQuestion[34] == 0)  processCTFL_A_v1p6Question35Incorrect();

    if (scoreByQuestion[35] == 0)  processCTFL_A_v1p6Question36Incorrect();
    if (scoreByQuestion[36] == 0)  processCTFL_A_v1p6Question37Incorrect();
    if (scoreByQuestion[37] == 0)  processCTFL_A_v1p6Question38Incorrect();
    if (scoreByQuestion[38] == 0)  processCTFL_A_v1p6Question39Incorrect();
    if (scoreByQuestion[39] == 0)  processCTFL_A_v1p6Question40Incorrect();
  
  
  return scoreTotal;

}

