using namespace std;
#include <iostream>
#include <iomanip>

// TODO Future release: Add parameters ask questions to check valid answers as int: 4 = ABCD 5 = ABCDE
// TODO: Add parameters ask questions to give points weight to questions . create a single function for AskQuestion

  //TODO: Make getAnswerAsUppercase



char getAnswer(){
  string s;
  char answer = ' ';
  cout << "?";
  cin >> s;
  return s.at(0);
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
  cout <<"Now we well move onto a Multi answer Question. This requires giving two answers " << endl << endl;    
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




int processAL_TAEv2016Question1(){
  cout << endl << endl << endl << endl << endl;
//  cout << "ALTA-E-1.1.1 automation (K2) Explain the objectives, advantages, disadvantages and limitations of test" << endl;
  cout << "Question #1 (1 pt) Which of the following is considered to be an advantage of test automation over manual testing?" << endl;
  cout << endl;

  cout << "a.The time required for test execution is lengthened and the coverage is increased" << endl;
  cout << "b.The time required for test execution is shortened and the coverage is increased" << endl;
  cout << "c.The time required for test execution is lengthened and the coverage is reduced" << endl;
  cout << "d.The time required for test execution is shortened and the coverage is reduced" << endl;
  cout << endl;

 // cout << "B is correct. There is an expectation with good test automation that the time required for test execution will be reduced while the overall test coverage is increased." << endl;
  cout << endl;
  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0;  
  
}
int processAL_TAEv2016Question2(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-1.2.1 (K2) Identify technical success factors of a test automation project" << endl;
  cout << "Question #2 (1 pt) Which of the following is an important technical success factor for any significant automation project?" << endl;
  cout << endl;

  cout << "a.The TAA must be designed for learnability" << endl;
  cout << "b.The TAA must support the ability to automate all manual tests" << endl;
  cout << "c.The SUT must be self-documenting" << endl;
  cout << "d.The GUI interaction and data must be coupled with the graphical interface" << endl;
  cout << endl;

 // cout << "A is correct. It must be designed for learnability, maintainability, and performance. B is incorrect; not all manual tests can or should be automated. C is incorrect; the code could be self-documenting but the entire SUT would not be. D is incorrect; automation is easier with decoupling.  " << endl;
  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0;  
}
int processAL_TAEv2016Question3(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-2.1.1 (K4) Analyze a system under test to determine the appropriate automation solution" << endl;
  cout << "Question #3 (3 pts) You are deciding on the functional test automation approach for a highly complex system which is expected to be used in production for many years. You have already conducted a survey with the major tool vendors and you have determined that you will not be able to use any of their tools to create your test automation due to the non-standard interfaces that were required for the software. You and the developers have decided that your best automation approach will be through custom interfaces implemented specifically for testing. What are two concerns you should have with this approach? (Pick 2)" << endl;
  cout << endl;

  cout << "a. If the interfaces are not disabled before release, there could be a security risk" << endl;
  cout << "b. The performance of the test interfaces may be much faster than the performance of the real interfaces" << endl;
  cout << "c. The effort spent to develop test automation will not be justified by the expected lifespan of the code in production" << endl;
  cout << "d. Because there is a high level of intrusion, there may be false alarms generated" << endl;
  cout << "e. Because there is a low level of intrusion, the test results will not be representative of the production code" << endl;
  cout << endl;

 // cout << "A and D are correct. A is noted in section 3.2.3 of the syllabus where it talks about checking for security risks if you leave test interfaces in place. D is correct because developing custom test interfaces is considered a high level of intrusion and this may generate false alarms due to the different code being exercised. B is not correct because we are testing the code, not the performance. C is not correct because it is stated in the question that this is a long-lived, complex product. E is not correct because the custom interfaces introduce a high level of intrusion.  " << endl;
  cout <<"Type the letter for first choice and press enter, then letter for second choice and press enter."<< endl;
  char Answer1 = getAnswer();
  char Answer2 = getAnswer();
  if (((Answer1 == 'A') || (Answer1 == 'a')) && ((Answer2 == 'D') || (Answer2 =='d')) ||
      ((Answer1 == 'D') || (Answer1 == 'd')) && ((Answer2 == 'A') || (Answer2 =='a')) )
    return 3;
  else return 0;
}
int processAL_TAEv2016Question4(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-2.1.1 (K4) Analyze a system under test to determine the appropriate automation solution" << endl;
  cout << "Question #4 (3 pts) You have been automating a legacy application that provides critical functionality to the business. An update to the legacy system has been approved and the developers plan to use third party software to provide the new functionality. The third party software has already been tested but the interface between the existing software and the new software is problematic. Your existing test automation needs to be extended to test the interface between these two products. How should you approach implementing the best automation solution " << endl;
  cout << endl;

  cout << "a.Develop test automation for the entire system including the legacy and third party applications" << endl;
  cout << "b.Investigate if automation is possible via the APIs used to interface with the third party software" << endl;
  cout << "c.Develop new automation to test via the GUI of the third party software" << endl;
  cout << "d.Investigate if automation can be implemented using the CLI to replace the existing GUI automation" << endl;
  cout << endl;

// cout << "B is correct; if APIs are available automation at the API level makes sense. A is incorrect; there is no reason to fully automate the testing of the third party system. C is incorrect; we are not testing the GUI of the third party software. D is incorrect; this is not a logical approach." << endl;
  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 3;
  else return 0;  
  }
int processAL_TAEv2016Question5(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-2.2.1 (K4) Analyze test automation tools for a given project and report technical findings and recommendations" << endl;
  cout << "Question #5 (3 pts) You are evaluating functional test automation tools. The tool that you prefer can provide your organization with a favorable cost-benefit ratio, which appeals to senior management. Additionally, you feel the tool is superior in meeting your other technical criteria. However, the tool has many features most of which will never be used. As a result, you feel this makes the tool overly complex and confusing. What should your next steps be regarding selection of this tool?" << endl;
  cout << endl;

  cout << "a.Consider another tool that is more user friendly" << endl;
  cout << "b.Explore the possibility of configuring the tool to turn off unnecessary features" << endl;
  cout << "c.Plan to supplement selection of this tool with lengthy and comprehensive training sessions" << endl;
  cout << "d.Consider acquiring an additional tool that can provide a more user friendly interface to the preferred tool" << endl;
  cout << endl;

 // cout << "B is correct; tools are often configurable and allow functionality to be hidden. A is incorrect; the preferred tool meets your criteria, finding another tool may be difficult. C is incorrect; training sessions take away from testing time and the need for training would continue for the life of the tool, which would be an expensive alternative. D is incorrect; additional tool costs, configuration, and maintenance would make this an unacceptable alternative." << endl;
  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 3;
  else return 0;  
  }

int processAL_TAEv2016Question6(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-2.3.1 (K2) Understand \"design for testability\" and \"design for test automation\" methods applicable to the SUT" << endl;
  cout << "Question #6 (1 pt) When a system is designed for testability, one of the characteristics is that the test cases can access interfaces into the system that can be used to verify the expected behavior actually occurred as a result of the test. What is this characteristic called?" << endl;
  cout << endl;

  cout << "a.Observability" << endl;
  cout << "b.Controllability" << endl;
  cout << "c.Maintainability" << endl;
  cout << "d.Interoperability" << endl;
  cout << endl;

 // cout << "A is correct. A system that allows visibility to the results of a test has the property of observability. B is not correct because controllability is the ability of the interface to control behavior of the system. C and D are not correct because they are quality characteristics rather than specific testability characteristics." << endl;
  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0;  

}
int processAL_TAEv2016Question7(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-2.3.1 (K2) Understand \"design for testability\" and \"design for test automation\" methods applicable to the SUT" << endl;
  cout << endl;

  cout << "Question #7 (1 pt) Which of the following is an important testability consideration when designing a SUT?" << endl;
  cout << "a.Interoperability" << endl;
  cout << "b.Controllability" << endl;
  cout << "c.Maintainability" << endl;
  cout << "d.Transportability" << endl;
  cout << endl;

//  cout << "B is correct; this is necessary because it provides accessible interfaces. A and C are incorrect; they are quality characteristics that will not necessarily influence testability. D is incorrect; this is not a legitimate term" << endl;
  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0;  
}
int processAL_TAEv2016Question8(){
  cout << endl<< endl<< endl<< endl<< endl;
 // cout << "ALTA-E-3.1.1 (K2) Explain the structure of the gTAA" << endl;
  cout << "Question #8 (1 pt) What layer of the gTAA structure provides tool support for designing manual test cases and creating automated test cases?" << endl;
  cout << endl;

  cout << "a.Test Adaptation Layer" << endl;
  cout << "b.Test Definition Layer" << endl;
  cout << "c.Test Generation Layer" << endl;
  cout << "d.Test Flexibility Layer" << endl;
  cout << endl;


 // cout << "C is correct; it supports generating test cases from models of the SUT and manual test case design. A is incorrect; it provides the interface between the test automation and the SUT. B is incorrect; it may specify test cases but does not generate test cases. D is incorrect; this is not part of the gTAA structure." << endl;
  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0;  
  }
int processAL_TAEv2016Question9(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-3.2.1 (K4) Design the appropriate TAA for a given project" << endl;
  cout << "Question #9 (3 pts) You are working on the design of a test automation project. The gTAA was set up by a consulting company prior to your being hired. You are now looking to create the TAA from the gTAA. You have the following requirements that must be addressed by your TAA:" << endl;
  cout << endl;

  cout << "1. The TAA must support independence across technologies. It is likely that this same test suite will be used in different test environments and on different target technologies" << endl;
  cout << "2. The test artifacts need to be portable" << endl;
  cout << "3. Vendor-neutrality is preferable" << endl;
  cout << "4. It is vitally important that the TAA be maintainable and maintenance costs be minimized" << endl;
  cout << "5. It is preferred that less technical people be able to maintain the system even though highly technical people have built it" << endl;
  cout << "6. There is a large project budget for this effort for the next two years, but the budget will decrease after that time" << endl;
  cout << endl;

  cout << "Given these requirements, which one of the following should the TAE consider during the implementation of the TAA?" << endl;
  cout << endl;

  cout << "a.The communication protocols used by the TAS to interact with the SUT" << endl;
  cout << "b.The number of automated test cases to be maintained by the system" << endl;
  cout << "c.The test roles that will be supported by the implementation" << endl;
  cout << "d.The use of abstraction in the implementation" << endl;
  cout << endl;

 // cout << "D is correct. Abstraction will likely be needed to accomplish the stated goals. A, B, and C are incorrect; while these are certainly considerations for the implementation of the TAA, they will not help address the stated goals." << endl;
  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 3;
  else return 0;  
  }
int processAL_TAEv2016Question10(){
  cout << endl<< endl<< endl<< endl<< endl;
 // cout << "ALTA-E-3.2.2 (K2) Explain the role that layers play within a TAA" << endl;
  cout << "Question #10 (1 pt) Why is it important for the TAA to separate the test definition from the test execution?" << endl;
  cout << endl;

  cout << "a. Separating the two increases the speed of execution" << endl;
  cout << "b. The test definition can be completed without knowledge of the tool that will be used for execution" << endl;
  cout << "c. The execution will be able to add test cases to the test definition as needed during execution" << endl;
  cout << "d. The test definition layer will supply the adaptation necessary for the tests to run with various tools and interfaces" << endl;
  cout << endl;

 // cout << "B is correct; by separating the definition from the execution, the definition is immune from the tool selection and usage. If another tool is used, the definition doesn’t have to change – only the execution layer will change. See section 3.1.1. A is incorrect; separating the two does not have anything to do with speed of execution. C is incorrect; test cases are not added during execution. D is incorrect; adaptation is supplied by the adaptation layer." << endl;
  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0;  
  }



int processAL_TAEv2016Question11(){
  cout << endl<< endl<< endl<< endl<< endl;
 // cout << "ALTA-E-3.2.3 (K2) Explain design considerations for a TAA" << endl;
  cout << "Question #11 (1 pt) When designing the test adaptation layer, which of the following should occur?" << endl;
  cout << endl;

  cout << "a.Selecting the interpretation or compilation approach for the test procedures" << endl;
  cout << "b.Selecting data-driven, keyword-driven, pattern-based or model-driven test definition" << endl;
  cout << "c.Selecting manual or automated test generation" << endl;
  cout << "d.Selecting tools that will be used to stimulate and observe test interfaces" << endl;
  cout << endl;

 // cout << "D is correct; this is one of the considerations for the test adaptation layer. A is incorrect; this should be selected at the test execution layer. B is incorrect; this should be selected at the test definition layer. C is incorrect; this should be selected at the test generation layer." << endl;
  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 1;
  else return 0;  
  }
int processAL_TAEv2016Question12(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-3.2.3 (K2) Explain design considerations for a TAA" << endl;
  cout << "Question #12 (1 pt) When is the best time, for test automation, to consider legal and/or standards requirements of an SUT?" << endl;
  cout << endl;

  cout << "a.When developing a TAS" << endl;
  cout << "b.When implementing the SUT" << endl;
  cout << "c.When designing a TAA" << endl;
  cout << "d.When creating a TAF" << endl;
  cout << endl;

 // cout << "C is correct; SUT standards and legal settings should be considered and any design requirements understood when designing the TAA. A, B, and D are incorrect; consideration for standards and legal settings should have occurred before this time." << endl;
  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0;  
}
int processAL_TAEv2016Question13(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-3.2.4 (K4) Analyze factors of implementation, use, and maintenance requirement for a given TAS
  cout << "Question #13 (3 pts) You are working on a test automation project that will automate business scenarios for the user acceptance testers to use when conducting UAT. The business scenarios are well-defined and frequently repeated during UAT. The goal is to also be able to test these same scenarios as part of regression testing by executing the test automation. Structured scripting has already been used to develop the library of functions that can be used by the test automation. What scripting technique should be used to build upon the structured scripting that has already been done and to implement this test automation to meet the business goals?" << endl;
  cout << endl;

  cout << "a. Scenario-driven scripting" << endl;
  cout << "b. Keyword-driven scripting" << endl;
  cout << "c. Process-driven scripting" << endl;
  cout << "d. Linear scripting" << endl;
  cout << endl;

//  cout << "C is correct. This will allow building on the structured scripting that has already been done and the libraries that have been created while automating the business processes. A is incorrect; this is not a real scripting type. B is incorrect; this could feed into the process-driven scripting, but C is more complete. D is incorrect; it is referring to a more basic type of scripting and it has already been specified that structured scripting has been done." << endl;
   char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 3;
  else return 0;  
 }
int processAL_TAEv2016Question14(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-3.2.4 (K4) Analyze factors of implementation, use, and maintenance requirement for a given TAS" << endl;
  cout << "Question #14 (3 pts) Your manager has requested you develop test automation to be used for a legacy system that is going to go through a series of infrastructure migrations. The scripts will be used to verify basic functionality during these infrastructure changes. You need a solution that is simple and fast. Maintainability of the scripts is not a consideration because no changes to the software are anticipated. Which of the following is the best scripting approach in this situation?" << endl;
  cout << endl;

  cout << "a.Structured scripting" << endl;
  cout << "b.Data-driven scripting" << endl;
  cout << "c.Keyword-driven scripting" << endl;
  cout << "d.Linear scripting" << endl;
  cout << endl;

 // cout << "D is correct; little prep work is required and the maintenance concerns are not an issue for this project. A, B, and C are incorrect; these are more complex techniques that would result in more sustainable code but the additional cost and complexity are not justified for this project." << endl;
  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 3;
  else return 0;  
  }
int processAL_TAEv2016Question15(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-3.3.1 (K3) Apply components of the generic TAA (gTAA) to construct a purpose-built TAA" << endl;
  cout << "Question #15 (2 pts) You are using a gTAA to create a TAS for a project. You have reviewed the project and determined that the test automation should be focused at the command line level rather than the user interface level due to the rapid and continual changes occurring in the user interface. The command line interface allows you to access all the functionality and will be a part of the released project. Given this information, what part of the standard gTAA can you leave out of the TAS?" << endl;
  cout << endl;

  cout << "a.The test data component of the test definition layer" << endl;
  cout << "b.The GUI component of the test adaptation layer" << endl;
  cout << "c.The test model component of the test generation layer" << endl;
  cout << "d.The user interface component of the test execution layer" << endl;
  cout << endl;


 // cout << "B is correct. A is incorrect; you are still likely to need test data for your tests. C is incorrect; there is nothing in the question that indicates this is not needed; D is incorrect; it is not a component of the test execution layer." << endl;
  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 2;
  else return 0;  
}

int processAL_TAEv2016Question16(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-3.3.1 (K3) Apply components of the generic TAA (gTAA) to construct a purpose-built TAA" << endl;
  cout << "Question #16 (2 pts) You are implementing a TAS from a TAA. The SUT communicates with another system, which is stable and available for use during testing. The test interface will be through the GUI. Given this information what component of the TAA can you exclude from the TAS?" << endl;
  cout << endl;

  cout << "a.The test generation layer" << endl;
  cout << "b.The simulator within the test adaption layer" << endl;
  cout << "c.Test execution within the test execution layer" << endl;
  cout << "d.The GUI from the test adaptation layer" << endl;

  cout << endl;

//  cout << "B is correct; a simulator is not needed because you can communicate directly with the external system. A, C, and D are incorrect; because these components are still needed to create the TAS." << endl;
  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 2;
  else return 0;  
}
int processAL_TAEv2016Question17(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-3.3.2 (K2) Explain the factors to be considered when identifying reusability of components" << endl;
  cout << "Question #17 (1 pt) Which of the following is true about reuse?" << endl;
  cout << endl;

  cout << "a.Reuse is built into the TAA and maintained and improved in the TAS" << endl;
  cout << "b.Reuse is built in both the TAA and TAS and maintained in the gTAA" << endl;
  cout << "c.Reuse is only applicable for the gTAA" << endl;
  cout << "d.Reuse is built into the TAS and maintained and improved in the TAA" << endl;
  cout << endl;


 // cout << "A is correct; per the syllabus the TAA must designed for reuse but the TAS can increase the ability for reuse; B, C, and D are incorrect; only A contains the proper wording per the syllabus." << endl;
  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0;  
}
int processAL_TAEv2016Question18(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-4.1.1 (K3) Apply guidelines that support effective test tool pilot and deployment activities" << endl;
  cout << "Question #18 (2 pts) Senior management wants to implement test automation into your organization and has asked you to lead this initiative. The organization has a number of systems of varying criticality, some of which may benefit from automation once a TAA is mature. You have been given direction to start with a pilot. How do you select a suitable project for the TAS?" << endl;
  cout << endl;

  cout << "a.A high visibility project in order to highlight the success of the pilot" << endl;
  cout << "b.A non-critical project in order to mitigate any delays the TAS may cause" << endl;
  cout << "c.A project that is simple and easy to automate" << endl;
  cout << "d.A new project that is immature and still in development" << endl;
  cout << endl;


 // cout << "B is correct; the pilot should have minimal impact upon normal business but should be conducted with a realistic project. A is incorrect; this may result in great risk to the automation project if it fails. C is incorrect; a trivial project will be of little benefit. D is incorrect; new projects are not good candidates for automation." << endl;
  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 2;
  else return 0;  
}
int processAL_TAEv2016Question19(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-4.1.1 (K3) Apply guidelines that support effective test tool pilot and deployment activities" << endl;
  cout << "Question #19 (2 pts) You have been asked to conduct a pilot for the test automation tool. You have identified a suitable target project (average size and cost), planned the pilot (treating it as a development effort), and conducted the pilot. What should be your next step?" << endl;
  cout << endl;

  cout << "a. Conduct another pilot on a critical project to ensure the tool will work when it really matters" << endl;
  cout << "b. Conduct another pilot on a trivial project to ensure the time requirements will not be too high on small projects" << endl;
  cout << "c. Evaluate the results engaging the stakeholders to gather their viewpoints" << endl;
  cout << "d. Evaluate the results within the pilot testing team and prepare a report for management" << endl;
  cout << endl;

//  cout << "C is correct; it is important to gather input from the stakeholders before moving forward. A and B are incorrect; critical or trivial projects should not be used for a pilot. D is incorrect; this will occur, but the management report should not be prepared until there is feedback from the stakeholders." << endl;
  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 2;
  else return 0;  
}
int processAL_TAEv2016Question20(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-4.2.1 (K4) Analyze deployment risks and identify technical issues that could lead to failure of the test automation project, and plan mitigation strategies" << endl;
  cout << "Question #20 (3 pts) Your team has been working on creating a strong and maintainable TAS. The TAS is expected to be used for at least five years, so good maintainability is critical. The team has done the following:" << endl;
  cout << endl;
  cout << "1.Created an impact analysis process for all proposed changes to the system" << endl;
  cout << "2.Documented the usage for the TAS" << endl;
  cout << "3.Documented the third party dependencies, including contacts within the third party organization" << endl;
  cout << "4.Verified that the TAS runs in an environment separate from the SUT environment" << endl;
  cout << endl;

  cout << "Given this information, what is a major factor of maintainability that has not been addressed?" << endl;
  cout << "a.The TAS must be modular, so key components can be replaced as needed" << endl;
  cout << "b.The TAS must be a copy of the gTAA" << endl;
  cout << "c.The SUT must reside in the same environment as the TAS" << endl;
  cout << "d.The TAS must unite the test scripts with the TAF" << endl;
  cout << endl;


 // cout << "A is correct. The TAS must be modular for maintainability. B is incorrect; the TAS is an instantiation of the gTAA. C is incorrect; the two must reside in separate environments. D is incorrect; the TAS must separate the scripts from the TAF." << endl;
  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 3;
  else return 0;  
}



int processAL_TAEv2016Question21(){
  cout << endl<< endl<< endl<< endl<< endl;
 // cout << "ALTA-E-4.2.1 (K4) Analyze deployment risks and identify technical issues that could lead to failure of the test automation project, and plan mitigation strategies" << endl;
  cout << "Question #21 (3 pts) You have just updated your TAS to include new features. What steps should you take to ensure that the changes have not adversely affected any existing functionality?" << endl;
  cout << endl;

  cout << "a.Compare the new and old TAS versions and assess the impact of any differences" << endl;
  cout << "b.Statically check to ensure procedures for the new and old TAS versions are identical" << endl;
  cout << "c.Ensure the same stubs and drivers are used in the new TAS" << endl;
  cout << "d.Use SUT release notes as a way to ensure the new TAS will operate correctly" << endl;
  cout << endl;

 // cout << "A is correct; the TAS is like any other software and changes must be assessed to mitigate risk. B is incorrect; procedures will change as the TAS changes. C is incorrect; stubs and drivers should not be present in an active TAS. D is incorrect; system release notes of the SUT may have nothing to do with identifying vulnerabilities in the TAS." << endl;
   char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 3;
  else return 0;  
 
}
int processAL_TAEv2016Question22(){
  cout << endl<< endl<< endl<< endl<< endl;
 // cout << "ALTA-E-4.3.1 (K2) Understand which factors support and affect TAS maintainability" << endl;
  cout << "Question #22 (1 pt) Why is it important to have standard naming conventions for a TAS?" << endl;
  cout << endl;

  cout << "a. A TAS that uses standard names will enable faster execution of the test automation" << endl;
  cout << "b. A TAS that uses standard names will be easier for a new person to learn" << endl;
  cout << "c. A TAS that uses standard names will support global substitutions when test automation standards change" << endl;
  cout << "d. A TAS that uses standard names will allow separation of the test scripts from the TAF" << endl;
  cout << endl;

 // cout << "B is correct; standard names will be easier for a new person to learn and will make the code easier to understand. A, C and D are incorrect; using a standard naming convention won’t affect any of these areas." << endl;
    char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0;  

}
int processAL_TAEv2016Question23(){
  cout << endl<< endl<< endl<< endl<< endl;
 // cout << "ALTA-E-5.2.1 (K3) Implement metrics collection methods to support technical and management requirements. Explain how measurement of the test automation can be implemented." << endl;
  cout << "Question #23 (2 pts) Your manager is concerned that it will be difficult to assess the success of the test automation implementation unless it is possible to show that the quality of the tested software steadily improves. You have explained that pass/fail numbers are reported at the end of each execution, but your manager wants to see this information provided automatically to a dashboard that will allow drilling down to the details. How can you automatically provide this information from the test automation software?" << endl;
  cout << endl;

  cout << "a. You can’t. This information will have to be gathered manually at the end of each execution" << endl;
  cout << "b. The automated testware can be used to report this information to a database and a dashboard can be created from the data in the database that will show the trends in passed/failed test cases" << endl;
  cout << "c. The automated testware can report each set of test execution results to a spreadsheet that can be published showing the detailed results" << endl;
  cout << "d. The TAE can record the information during execution and report that into a graphing tool that can be provided for management reporting" << endl;
  cout << endl;

 // cout << "B is correct; this is an automated solution that will utilize the tools to provide accurate current and trend information. A is incorrect; you can provide this information. C is incorrect; it will provide only current execution information but no overall trending. D is incorrect; it is a manual process not an automated solution." << endl;
    char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 2;
  else return 0;  

}
int processAL_TAEv2016Question24(){
  cout << endl<< endl<< endl<< endl<< endl;
 // cout << "ALTA-E-5.2.1 (K3) Implement metrics collection methods to support technical and management requirements. Explain how measurement of the test automation can be implemented." << endl;
  cout << "Question #24 (2 pts) You normally start execution of an automated regression test suite at the end of the workday as it is a lengthy test. Occasionally the test does not complete by the start of the next workday even though it should complete within five hours of starting. What is the most efficient approach you could take to determine the cause of the problem?" << endl;
  cout << endl;

  cout << "a. Run the test at the beginning of the day and monitor it manually" << endl;
  cout << "b. Evaluate a vendor reporting tool that measures test progress" << endl;
  cout << "c. Supplement your staff with a night shift to monitor the test while it is running" << endl;
  cout << "d. Automate collection of the test execution results" << endl;
  cout << endl;

 // cout << "D is correct; automated collection is inexpensive and effective. A is incorrect; it interferes with other planned activities. B is incorrect; this is an unnecessary cost. C is incorrect; it is not practical." << endl;
    char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 2;
  else return 0;  

}
int processAL_TAEv2016Question25(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-5.1.1(K2) Classify metrics that can be used to monitor the test automation strategy and effectiveness" << endl;
  cout << "Question #25 (1 pt) When implementing results reporting for test automation, what is a good way to allow the reader to make a quick assessment of the progress of the test execution?" << endl;
  cout << endl;

  cout << "a.Spreadsheets" << endl;
  cout << "b.Traffic lights" << endl;
  cout << "c.Detailed reports with percentages of completion" << endl;
  cout << "d.Database of results" << endl;
  cout << endl;


 // cout << "B is correct; using colors, such as traffic lights, to indicate progress is mentioned in the syllabus. A and C are incorrect; these will not allow quick analysis. D is incorrect; the data would still have to be derived from the database before it could be analyzed." << endl;

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0;  



}

int processAL_TAEv2016Question26(){
  cout << endl<< endl<< endl<< endl<< endl;
 // cout << "ALTA-E-5.1.1(K2) Classify metrics that can be used to monitor the test automation strategy and effectiveness" << endl;
  cout << "Question #26 (1 pt) You have been asked to distribute the results of your test automation daily. The preferred method for distribution of these results is via e-mail. What is an important characteristic of your test automation reporting that will allow you to provide this information?" << endl;
  cout << endl;

  cout << "a.It should integrate with a common third party tool" << endl;
  cout << "b.It should allow you to supplement the results with manual commentary" << endl;
  cout << "c.It should provide a way to publish the test log library" << endl;
  cout << "d.It should allow you to capture an audio message to accompany test results" << endl;
  cout << endl;


 // cout << "A is correct; importing to commonly known tools such as Excel makes it easier for a broader audience to view and manipulate the data. B is incorrect; this would be inefficient and left to individual interpretation of the commentary. C is incorrect; this provides too much data for a general audience. D is incorrect; this would be an unrealistic expectation of a test reporting tool. Specialized audio capture tools would be more practical." << endl;
    char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0;  

}
int processAL_TAEv2016Question27(){
  cout << endl<< endl<< endl<< endl<< endl;
 //   cout << "ALTA-E-5.3.1 (K4) Analyze test logging of both TAS and SUT data" << endl;
  cout << "Question #27 (3 pts) You have been working with a test automation suite that provides good test coverage. The suite contains 500 scripts and has previously run without any problems. Recently, a number of the tests late in the test run have been failing. You have done some analysis and it appears that the test failures are being caused by a SUT failure that is not being detected by one or more tests earlier in the test run. You need more information to pinpoint the test or tests with a false-negative result. What type of logging do you need in order to complete your analysis and get the information to help identify the problem?" << endl;
  cout << endl;

  cout << "1.The status of execution for each test case (pass/fail)" << endl;
  cout << "2.Timing information for each step in each test case" << endl;
  cout << "3.Dynamic information about the SUT" << endl;
  cout << "4.All actions of each test case to allow replaying each test" << endl;
  cout << "5.Failure information for any step in a test case that encounters an error" << endl;
  cout << endl;

  cout << "a.1, 2, 3" << endl;
  cout << "b.2, 4, 5" << endl;
  cout << "c.2, 3, 5" << endl;
  cout << "d.1, 4, 5" << endl;
  cout << endl;


 // cout << "D is correct; this would be the most useful information. This is going to be a multi-step analysis starting with the first failure (which is probably at the step rather than test cases level) then replaying it to see what is actually happening and then looking at all the details of the failure. A, B and C are incorrect; the timing information is probably not pertinent and the SUT information is also probably not relevant to the problem although, if it is, it is likely it will be seen when the data in 1, 4, 5 is analyzed." << endl;
    char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 3;
  else return 0;  

}
int processAL_TAEv2016Question28(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-5.4.1 (K2) Explain how a test execution report is constructed and published" << endl;
  cout << "Question #28 (1 pt) When publishing a test execution report which key attribute must the report contain?" << endl;
  cout << endl;

  cout << "a.Test case steps" << endl;
  cout << "b.Test environment" << endl;
  cout << "c.Assessment of the reliability of the SUT" << endl;
  cout << "d.Root cause of any failures" << endl;
  cout << endl;

  //cout << "B is correct; the test environment information is important in determining test coverage and test validity. A is incorrect; this is too specific. C is incorrect; this information may be derived from the report, but is not a key attribute. D is incorrect; this level of detail would be in the defect report and not in a test execution report." << endl;
   char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0;  
 
}
int processAL_TAEv2016Question29(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-6.1.1 (K3) Apply criteria for determining the suitability of tests for automation" << endl;
  cout << "Question #29 (2 pts) You have been asked to implement test automation for a system that has been in production for two years. The software is relatively stable, updates are made once a quarter, and the quality of the software is extremely important. The organization follows a V-model lifecycle and has used this model for many years. Software quality is good on the quarterly releases, but there is concern that the time required for the regression testing is not cost effective and is inhibiting the flow of new features. You see several challenges in this implementation, the greatest of which is the creation and preservation of test data. While the test environments are stable and controlled, the test data is frequently refreshed from production, which makes it difficult to write maintainable test automation." << endl;
  cout << endl;

  cout << "Given this information, which of the following is most likely to be a problem for this test automation effort?" << endl;
  cout << endl;

  cout << "a. Maturity of the test process" << endl;
  cout << "b.Suitability of automation for the stage of the software product lifecycle" << endl;
  cout << "c.Frequency of use" << endl;
  cout << "d.Complexity to automate" << endl;
  cout << endl;

 // cout << "D is correct because dealing with the data issue adds a level of complexity to the test automation. It is likely that it will need to create and maintain its own data and preserve this data across the production refreshes. A is incorrect; they follow a mature process. B is incorrect; this is a good time to automate because the software is stable and the updates are made quarterly. C is incorrect; the software will be used frequently and for a long time." << endl;
    char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 2;
  else return 0;  

}
int processAL_TAEv2016Question30(){
  cout << endl<< endl<< endl<< endl<< endl;
 // cout << "ALTA-E-6.1.2 (K2) Understand the factors in transitioning from manual to automation testing" << endl;

  cout << "Question #30 (1 pt) What is the most common basis for an automated test script?" << endl;
  cout << "a.The gTAA" << endl;
  cout << "b.The SUT" << endl;
  cout << "c.A manual test case" << endl;
  cout << "d.The functional requirements" << endl;
  cout << endl;

 // cout << "C is correct; automated test scripts are commonly written from manual test cases. A and B are incorrect; these would not provide the basis for a test script. D is incorrect; while it may provide the basis for the testing it is not usually the basis for an automated test script." << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0;  


  
}



int processAL_TAEv2016Question31(){

  cout << endl<< endl<< endl<< endl<< endl;
 // cout << "ALTA-E-6.2.1 (K2) Explain the factors to consider in implementing automated regression testing" << endl;
  cout << "Question #31 (1 pt) What is a stated goal for automated regression test coverage if it is to ascertain the overall quality of the SUT?" << endl;
  cout << endl;

  cout << "a.Cursory" << endl;
  cout << "b.Broad" << endl;
  cout << "c.Deep" << endl;
  cout << "d.Broad and deep" << endl;
  cout << endl;

 // cout << "D is correct; per the syllabus. A is incorrect; this will not give an indication of overall quality. B and C are incorrect; both broad and deep are needed." << endl;


  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 1;
  else return 0;  

  
}
int processAL_TAEv2016Question32(){

  cout << endl<< endl<< endl<< endl<< endl;
 // cout << "ALTA-E-6.3.1 (K2) Explain the factors to consider in implementing automation within new feature testing" << endl;
  cout << "Question #32 (1 pt) Who should provide feedback to the TAE when implementing new features to an existing TAS?" << endl;
  cout << endl;

  cout << "a.Business Analysts" << endl;
  cout << "b.Senior Managers" << endl;
  cout << "c.Test Designers with domain expertise" << endl;
  cout << "d.System Administrators" << endl;
  cout << endl;


//  cout << "C is correct. Test designers with domain expertise must ensure the TAS will work with the new features. A, B, and D are all incorrect; they are not versed in the specific TAS design." << endl;

    char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0;  

}
int processAL_TAEv2016Question33(){
  cout << endl<< endl<< endl<< endl<< endl;
//  cout << "ALTA-E-6.4.1 (K2) Explain the factors to consider in implementing automated confirmation testing" << endl;
  cout << "Question #33 (1 pt) Which of the following is the best reason for automating the confirmation testing of a defect?" << endl;
  cout << endl;

  cout << "a.To close a gap in the existing automation" << endl;
  cout << "b.To ensure that the fix works and continues to work" << endl;
  cout << "c.To justify the time spent finding the defect" << endl;
  cout << "d.To test the configuration management processes" << endl;
  cout << endl;

//  cout << "B is correct; you are trying to be sure the fix works and make sure that the fix doesn’t break later or get lost because of a configuration management problem. A is incorrect; while there may be gaps in the test automation this is not the primary reason to automate confirmation testing. C is incorrect; the time spent finding the defect should have been justified by the severity of the defect. D is incorrect; this is a side effect and, while it doesn’t test all the configuration management processes, it does make sure that the fix isn’t lost for some reason." << endl;

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0;  

  
}
int processAL_TAEv2016Question34(){
  cout << endl<< endl<< endl<< endl<< endl;
  
 // cout << "ALTA-E-7.1.1 (K3) Verify the correctness of an automated test environment including test tool setup" << endl;
  cout << "Question #34 (2 pts) You are having problems with the reliability of the automated test environment and setup. You have decided to create a test suite you can execute to verify the environment before you run the actual test scripts. Which of the following would provide the best quick test of the environment?" << endl;
  cout << endl;

  cout << "a.Run a set of tests that are known to pass and verify that they still pass" << endl;
  cout << "b.Run a set of tests that are known to fail and verify that they still fail" << endl;
  cout << "c.Run a set of tests containing both passes and fails and verify that the results are consistent" << endl;
  cout << "d.Run the entire set of automated tests and verify the results because a subset will not be representative" << endl;
  cout << endl;

 // cout << "C is correct; this is the best option assuming you have picked a good set of tests. You want to test that good tests pass and failed tests fail. D is incorrect; you are looking for a quick test. A and B are incorrect; this would be limited in scope and would not provide sufficient coverage." << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 2;
  else return 0;  


}
int processAL_TAEv2016Question35(){
  cout << endl<< endl<< endl<< endl<< endl;
  //  cout << "ALTA-E-7.1.1 (K3) Verify the correctness of an automated test environment including test tool setup" << endl;
  cout << "Question #35 (2 pts) You are testing a system that is updated by monthly service packs. You are testing multiple versions of the SUT simultaneously. Your TAS is complex and you need to ensure it remains consistent across the different SUT environments. How will you ensure that the same version of the TAS is used to test each SUT?" << endl;
  cout << endl;

  cout << "a.Update the TAS each time the SUT is patched" << endl;
  cout << "b.Revert back to manual testing" << endl;
  cout << "c.Install the TAS into the SUT environments from a central repository" << endl;
  cout << "d.Develop a tool to track historical test results" << endl;
  cout << endl;

 // cout << "C is correct; downloading a copy from a repository ensures a consistent TAS. A is incorrect; this is not feasible. B is incorrect; reverting to manual testing is not warranted. D is incorrect; historical data tracking will only illustrate the symptom of inconsistent results." << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 2;
  else return 0;  

}

int processAL_TAEv2016Question36(){
  cout << endl<< endl<< endl<< endl<< endl;
 //   cout << "ALTA-E-7.2.1 (K3) Verify the correct behavior for a given automated test script and/or test suite " << endl;
  cout << "Question #36 (2 pts) You have executed an automated test suite for a product that was released to production. Although your tests passed, there was a major failure in production in an area that is well covered by your automated tests. You have verified that your tests did pass and that the reporting of the results was correct. What should you do now to verify the validity of your tests?" << endl;
  cout << endl;

  cout << "a.Run tests that should fail and verify that they fail" << endl;
  cout << "b.Run tests that should pass and verify that they pass" << endl;
  cout << "c.Check that the post conditions of each test case are being verified correctly" << endl;
  cout << "d.Change your test data and run the tests again" << endl;
  cout << endl;

 // cout << "C is correct; given this information, the post conditions are not being checked correctly so test cases are being marked as passed even though something did not work correctly. A and B are incorrect; they won’t show any problems because the test results were all good when you ran the suite. D is incorrect; this is unlikely to change anything." << endl;
    char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 2;
  else return 0;  

}
int processAL_TAEv2016Question37(){
  cout << endl<< endl<< endl<< endl<< endl;
 //   cout << "ALTA-E-7.2.1 (K3) Verify the correct behavior for a given automated test script and/or test suite" << endl;
  cout << "Question #37 (2 pts) You are preparing to execute a test automation suite for a safety critical healthcare application. Which approach should you take to verify the accuracy of the test results" << endl;
  cout << endl;

  cout << "a.Execute test cases with known failures and verify that they continue to fail" << endl;
  cout << "b.Extract data from the production system and verify compatibility with the TAS" << endl;
  cout << "c.Examine historical test trends on a similar SUT" << endl;
  cout << "d.Execute the test suite slowly and methodically" << endl;
  cout << endl;

  //cout << "A is correct; this is a recognized way to test automation suite. B is incorrect; test data should already have been used to validate the TAS. C is incorrect; historical test trends will not be useful in verifying the actual test results. D is incorrect; the speed of execution should not affect the accuracy of the testing results." << endl;
    char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 2;
  else return 0;  

}
int processAL_TAEv2016Question38(){
  cout << endl<< endl<< endl<< endl<< endl;
//    cout << "ALTA-E-8.1.1 (K4) Analyze the technical aspects of a deployed test automation solution and provide recommendations for improvement" << endl;
  cout << "Question #38 (3 pts) You have been reviewing the test cases in your TAS and have discovered that there is a wide variety of methods the TAEs have used to handle system errors. How should you handle this?" << endl;
  cout << endl;

  cout << "a.Establish an error recovery process in the TAS and ensure all test cases are using that process" << endl;
  cout << "b.Create a library of recovery processes so there is better reuse between the different scripts" << endl;
  cout << "c.Move to a keyword-driven approach and make recovery one of the keywords" << endl;
  cout << "d.Provide better wait time handling in the scripts to avoid system errors" << endl;
  cout << endl;


 // cout << "A is correct; per the syllabus this is a best-practice. B and C are incorrect; these are still going to be duplicating processes, potentially. D is incorrect; there is no indication that the problem is due to better wait time." << endl;

    char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 3;
  else return 0;  

  
}
int processAL_TAEv2016Question39(){
  cout << endl<< endl<< endl<< endl<< endl;
//    cout << "ALTA-E-8.1.1 (K4) Analyze the technical aspects of a deployed test automation solution and provide recommendations for improvement" << endl;
  cout << "Question #39 (3 pts) Up until now you have provided automated testing for a stable SUT. Because of changing business demands, the SUT will be updated to include several new features and plug-ins that communicate via APIs. In what way should you update the TAS?" << endl;
  cout << endl;

  cout << "a.Improve TAS recovery to make it more fault-tolerant when API calls fail" << endl;
  cout << "b.Update the documentation for the TAS including its support for APIs" << endl;
  cout << "c.Improve the logging to capture the anticipated increase in defects due to API failures" << endl;
  cout << "d.Modify the adaptation layer in the TAA to enable the TAS to test via the APIs" << endl;
  cout << endl;

  //cout << "D is correct; modifying the adaptation layer to enable API testing will allow the TAS to access the plug- ins. A, B, and C are incorrect; these do not directly enhance the API testing capabilities of the TAS" << endl;

    char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 3;
  else return 0;  
  
}
int processAL_TAEv2016Question40(){
  cout << endl<< endl<< endl<< endl<< endl;
//cout << "  ALTA-E-8.2.1 (K4) Analyze the automated testware, including test environment components, tools and supporting function libraries, in order to understand where consolidation and updates should be made following a given set of test environment or SUT changes" << endl;
  cout << endl;

  cout << "Question #40 (3 pts) You have been conducting a quality review for your TAS. You have discovered that it has not been updated for three years. The TAS functions properly and provides good coverage of the SUT; however, you want to ensure that it is working as efficiently as possible. What step should you consider in order to increase efficiency of the TAS?" << endl;
  cout << endl;

  cout << "a.Ensure consistent naming standards for new automation code" << endl;
  cout << "b.Make changes to the TAS in rapid succession to keep pace with leading edge practices" << endl;
  cout << "c.Ensure the latest libraries are incorporated into the TAS" << endl;
  cout << "d.Enlist a third party vendor to evaluate the current TAS" << endl;
  cout << endl;

  //cout << "C is correct; using the latest DLLs tends to improve efficiency and effectiveness. A is incorrect; while this is a good practice, new automation code is not being written. B is incorrect; speed of change to the TAS is risky and there is no indication that leading edge practices will be more efficient. D is incorrect; it might help identify inconsistencies as it is not cost effective." << endl;

    char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 3;
  else return 0;  
  
}


void processAL_TAEv2016Question1Incorrect(){
  cout << "ALTA-E-1.1.1 automation (K2) Explain the objectives, advantages, disadvantages and limitations of test" << endl;
  cout << "Question #1 (1 pt) Which of the following is considered to be an advantage of test automation over manual testing?" << endl;
  cout << endl;

  cout << "a.The time required for test execution is lengthened and the coverage is increased" << endl;
  cout << "b.The time required for test execution is shortened and the coverage is increased" << endl;
  cout << "c.The time required for test execution is lengthened and the coverage is reduced" << endl;
  cout << "d.The time required for test execution is shortened and the coverage is reduced" << endl;
  cout << endl;

  cout << "B is correct. There is an expectation with good test automation that the time required for test execution will be reduced while the overall test coverage is increased." << endl;
  cout << endl;
}
void processAL_TAEv2016Question2Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-1.2.1 (K2) Identify technical success factors of a test automation project" << endl;
  cout << "Question #2 (1 pt) Which of the following is an important technical success factor for any significant automation project?" << endl;
  cout << endl;

  cout << "a.The TAA must be designed for learnability" << endl;
  cout << "b.The TAA must support the ability to automate all manual tests" << endl;
  cout << "c.The SUT must be self-documenting" << endl;
  cout << "d.The GUI interaction and data must be coupled with the graphical interface" << endl;
  cout << endl;

  cout << "A is correct. It must be designed for learnability, maintainability, and performance. B is incorrect; not all manual tests can or should be automated. C is incorrect; the code could be self-documenting but the entire SUT would not be. D is incorrect; automation is easier with decoupling.  " << endl;
}
void processAL_TAEv2016Question3Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-2.1.1 (K4) Analyze a system under test to determine the appropriate automation solution" << endl;
  cout << "Question #3 (3 pts) You are deciding on the functional test automation approach for a highly complex system which is expected to be used in production for many years. You have already conducted a survey with the major tool vendors and you have determined that you will not be able to use any of their tools to create your test automation due to the non-standard interfaces that were required for the software. You and the developers have decided that your best automation approach will be through custom interfaces implemented specifically for testing. What are two concerns you should have with this approach? (Pick 2)" << endl;
  cout << endl;

  cout << "a. If the interfaces are not disabled before release, there could be a security risk" << endl;
  cout << "b. The performance of the test interfaces may be much faster than the performance of the real interfaces" << endl;
  cout << "c. The effort spent to develop test automation will not be justified by the expected lifespan of the code in production" << endl;
  cout << "d. Because there is a high level of intrusion, there may be false alarms generated" << endl;
  cout << "e. Because there is a low level of intrusion, the test results will not be representative of the production code" << endl;
  cout << endl;

  cout << "A and D are correct. A is noted in section 3.2.3 of the syllabus where it talks about checking for security risks if you leave test interfaces in place. D is correct because developing custom test interfaces is considered a high level of intrusion and this may generate false alarms due to the different code being exercised. B is not correct because we are testing the code, not the performance. C is not correct because it is stated in the question that this is a long-lived, complex product. E is not correct because the custom interfaces introduce a high level of intrusion.  " << endl;
}
void processAL_TAEv2016Question4Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-2.1.1 (K4) Analyze a system under test to determine the appropriate automation solution" << endl;
  cout << "Question #4 (3 pts) You have been automating a legacy application that provides critical functionality to the business. An update to the legacy system has been approved and the developers plan to use third party software to provide the new functionality. The third party software has already been tested but the interface between the existing software and the new software is problematic. Your existing test automation needs to be extended to test the interface between these two products. How should you approach implementing the best automation solution " << endl;
  cout << endl;

  cout << "a.Develop test automation for the entire system including the legacy and third party applications" << endl;
  cout << "b.Investigate if automation is possible via the APIs used to interface with the third party software" << endl;
  cout << "c.Develop new automation to test via the GUI of the third party software" << endl;
  cout << "d.Investigate if automation can be implemented using the CLI to replace the existing GUI automation" << endl;
  cout << endl;

  cout << "B is correct; if APIs are available automation at the API level makes sense. A is incorrect; there is no reason to fully automate the testing of the third party system. C is incorrect; we are not testing the GUI of the third party software. D is incorrect; this is not a logical approach." << endl;
  }
void processAL_TAEv2016Question5Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-2.2.1 (K4) Analyze test automation tools for a given project and report technical findings and recommendations" << endl;
  cout << "Question #5 (3 pts) You are evaluating functional test automation tools. The tool that you prefer can provide your organization with a favorable cost-benefit ratio, which appeals to senior management. Additionally, you feel the tool is superior in meeting your other technical criteria. However, the tool has many features most of which will never be used. As a result, you feel this makes the tool overly complex and confusing. What should your next steps be regarding selection of this tool?" << endl;
  cout << endl;

  cout << "a.Consider another tool that is more user friendly" << endl;
  cout << "b.Explore the possibility of configuring the tool to turn off unnecessary features" << endl;
  cout << "c.Plan to supplement selection of this tool with lengthy and comprehensive training sessions" << endl;
  cout << "d.Consider acquiring an additional tool that can provide a more user friendly interface to the preferred tool" << endl;
  cout << endl;

  cout << "B is correct; tools are often configurable and allow functionality to be hidden. A is incorrect; the preferred tool meets your criteria, finding another tool may be difficult. C is incorrect; training sessions take away from testing time and the need for training would continue for the life of the tool, which would be an expensive alternative. D is incorrect; additional tool costs, configuration, and maintenance would make this an unacceptable alternative." << endl;
  }

void processAL_TAEv2016Question6Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-2.3.1 (K2) Understand \"design for testability\" and \"design for test automation\" methods applicable to the SUT" << endl;
  cout << "Question #6 (1 pt) When a system is designed for testability, one of the characteristics is that the test cases can access interfaces into the system that can be used to verify the expected behavior actually occurred as a result of the test. What is this characteristic called?" << endl;
  cout << endl;

  cout << "a.Observability" << endl;
  cout << "b.Controllability" << endl;
  cout << "c.Maintainability" << endl;
  cout << "d.Interoperability" << endl;
  cout << endl;

  cout << "A is correct. A system that allows visibility to the results of a test has the property of observability. B is not correct because controllability is the ability of the interface to control behavior of the system. C and D are not correct because they are quality characteristics rather than specific testability characteristics." << endl;

}
void processAL_TAEv2016Question7Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-2.3.1 (K2) Understand \"design for testability\" and \"design for test automation\" methods applicable to the SUT" << endl;
  cout << endl;

  cout << "Question #7 (1 pt) Which of the following is an important testability consideration when designing a SUT?" << endl;
  cout << "a.Interoperability" << endl;
  cout << "b.Controllability" << endl;
  cout << "c.Maintainability" << endl;
  cout << "d.Transportability" << endl;
  cout << endl;

  cout << "B is correct; this is necessary because it provides accessible interfaces. A and C are incorrect; they are quality characteristics that will not necessarily influence testability. D is incorrect; this is not a legitimate term" << endl;
}
void processAL_TAEv2016Question8Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-3.1.1 (K2) Explain the structure of the gTAA" << endl;
  cout << "Question #8 (1 pt) What layer of the gTAA structure provides tool support for designing manual test cases and creating automated test cases?" << endl;
  cout << endl;

  cout << "a.Test Adaptation Layer" << endl;
  cout << "b.Test Definition Layer" << endl;
  cout << "c.Test Generation Layer" << endl;
  cout << "d.Test Flexibility Layer" << endl;
  cout << endl;


  cout << "C is correct; it supports generating test cases from models of the SUT and manual test case design. A is incorrect; it provides the interface between the test automation and the SUT. B is incorrect; it may specify test cases but does not generate test cases. D is incorrect; this is not part of the gTAA structure." << endl;
  }
void processAL_TAEv2016Question9Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-3.2.1 (K4) Design the appropriate TAA for a given project" << endl;
  cout << "Question #9 (3 pts) You are working on the design of a test automation project. The gTAA was set up by a consulting company prior to your being hired. You are now looking to create the TAA from the gTAA. You have the following requirements that must be addressed by your TAA:" << endl;
  cout << endl;

  cout << "1. The TAA must support independence across technologies. It is likely that this same test suite will be used in different test environments and on different target technologies" << endl;
  cout << "2. The test artifacts need to be portable" << endl;
  cout << "3. Vendor-neutrality is preferable" << endl;
  cout << "4. It is vitally important that the TAA be maintainable and maintenance costs be minimized" << endl;
  cout << "5. It is preferred that less technical people be able to maintain the system even though highly technical people have built it" << endl;
  cout << "6. There is a large project budget for this effort for the next two years, but the budget will decrease after that time" << endl;
  cout << endl;

  cout << "Given these requirements, which one of the following should the TAE consider during the implementation of the TAA?" << endl;
  cout << endl;

  cout << "a.The communication protocols used by the TAS to interact with the SUT" << endl;
  cout << "b.The number of automated test cases to be maintained by the system" << endl;
  cout << "c.The test roles that will be supported by the implementation" << endl;
  cout << "d.The use of abstraction in the implementation" << endl;
  cout << endl;

  cout << "D is correct. Abstraction will likely be needed to accomplish the stated goals. A, B, and C are incorrect; while these are certainly considerations for the implementation of the TAA, they will not help address the stated goals." << endl;
  }
void processAL_TAEv2016Question10Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-3.2.2 (K2) Explain the role that layers play within a TAA" << endl;
  cout << "Question #10 (1 pt) Why is it important for the TAA to separate the test definition from the test execution?" << endl;
  cout << endl;

  cout << "a. Separating the two increases the speed of execution" << endl;
  cout << "b. The test definition can be completed without knowledge of the tool that will be used for execution" << endl;
  cout << "c. The execution will be able to add test cases to the test definition as needed during execution" << endl;
  cout << "d. The test definition layer will supply the adaptation necessary for the tests to run with various tools and interfaces" << endl;
  cout << endl;

  cout << "B is correct; by separating the definition from the execution, the definition is immune from the tool selection and usage. If another tool is used, the definition doesn’t have to change – only the execution layer will change. See section 3.1.1. A is incorrect; separating the two does not have anything to do with speed of execution. C is incorrect; test cases are not added during execution. D is incorrect; adaptation is supplied by the adaptation layer." << endl;
  }



void processAL_TAEv2016Question11Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-3.2.3 (K2) Explain design considerations for a TAA" << endl;
  cout << "Question #11 (1 pt) When designing the test adaptation layer, which of the following should occur?" << endl;
  cout << endl;

  cout << "a.Selecting the interpretation or compilation approach for the test procedures" << endl;
  cout << "b.Selecting data-driven, keyword-driven, pattern-based or model-driven test definition" << endl;
  cout << "c.Selecting manual or automated test generation" << endl;
  cout << "d.Selecting tools that will be used to stimulate and observe test interfaces" << endl;
  cout << endl;

  cout << "D is correct; this is one of the considerations for the test adaptation layer. A is incorrect; this should be selected at the test execution layer. B is incorrect; this should be selected at the test definition layer. C is incorrect; this should be selected at the test generation layer." << endl;
  }
void processAL_TAEv2016Question12Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-3.2.3 (K2) Explain design considerations for a TAA" << endl;
  cout << "Question #12 (1 pt) When is the best time, for test automation, to consider legal and/or standards requirements of an SUT?" << endl;
  cout << endl;

  cout << "a.When developing a TAS" << endl;
  cout << "b.When implementing the SUT" << endl;
  cout << "c.When designing a TAA" << endl;
  cout << "d.When creating a TAF" << endl;
  cout << endl;

  cout << "C is correct; SUT standards and legal settings should be considered and any design requirements understood when designing the TAA. A, B, and D are incorrect; consideration for standards and legal settings should have occurred before this time." << endl;
}
void processAL_TAEv2016Question13Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-3.2.4 (K4) Analyze factors of implementation, use, and maintenance requirement for a given TAS " << endl;
  cout << "Question #13 (3 pts) You are working on a test automation project that will automate business scenarios for the user acceptance testers to use when conducting UAT. The business scenarios are well-defined and frequently repeated during UAT. The goal is to also be able to test these same scenarios as part of regression testing by executing the test automation. Structured scripting has already been used to develop the library of functions that can be used by the test automation. What scripting technique should be used to build upon the structured scripting that has already been done and to implement this test automation to meet the business goals?" << endl;
  cout << endl;

  cout << "a. Scenario-driven scripting" << endl;
  cout << "b. Keyword-driven scripting" << endl;
  cout << "c. Process-driven scripting" << endl;
  cout << "d. Linear scripting" << endl;
  cout << endl;

  cout << "C is correct. This will allow building on the structured scripting that has already been done and the libraries that have been created while automating the business processes. A is incorrect; this is not a real scripting type. B is incorrect; this could feed into the process-driven scripting, but C is more complete. D is incorrect; it is referring to a more basic type of scripting and it has already been specified that structured scripting has been done." << endl;
  }
void processAL_TAEv2016Question14Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-3.2.4 (K4) Analyze factors of implementation, use, and maintenance requirement for a given TAS" << endl;
  cout << "Question #14 (3 pts) Your manager has requested you develop test automation to be used for a legacy system that is going to go through a series of infrastructure migrations. The scripts will be used to verify basic functionality during these infrastructure changes. You need a solution that is simple and fast. Maintainability of the scripts is not a consideration because no changes to the software are anticipated. Which of the following is the best scripting approach in this situation?" << endl;
  cout << endl;

  cout << "a.Structured scripting" << endl;
  cout << "b.Data-driven scripting" << endl;
  cout << "c.Keyword-driven scripting" << endl;
  cout << "d.Linear scripting" << endl;
  cout << endl;

  cout << "D is correct; little prep work is required and the maintenance concerns are not an issue for this project. A, B, and C are incorrect; these are more complex techniques that would result in more sustainable code but the additional cost and complexity are not justified for this project." << endl;
  }
void processAL_TAEv2016Question15Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-3.3.1 (K3) Apply components of the generic TAA (gTAA) to construct a purpose-built TAA" << endl;
  cout << "Question #15 (2 pts) You are using a gTAA to create a TAS for a project. You have reviewed the project and determined that the test automation should be focused at the command line level rather than the user interface level due to the rapid and continual changes occurring in the user interface. The command line interface allows you to access all the functionality and will be a part of the released project. Given this information, what part of the standard gTAA can you leave out of the TAS?" << endl;
  cout << endl;

  cout << "a.The test data component of the test definition layer" << endl;
  cout << "b.The GUI component of the test adaptation layer" << endl;
  cout << "c.The test model component of the test generation layer" << endl;
  cout << "d.The user interface component of the test execution layer" << endl;
  cout << endl;


  cout << "B is correct. A is incorrect; you are still likely to need test data for your tests. C is incorrect; there is nothing in the question that indicates this is not needed; D is incorrect; it is not a component of the test execution layer." << endl;
}

void processAL_TAEv2016Question16Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-3.3.1 (K3) Apply components of the generic TAA (gTAA) to construct a purpose-built TAA" << endl;
  cout << "Question #16 (2 pts) You are implementing a TAS from a TAA. The SUT communicates with another system, which is stable and available for use during testing. The test interface will be through the GUI. Given this information what component of the TAA can you exclude from the TAS?" << endl;
  cout << endl;

  cout << "a.The test generation layer" << endl;
  cout << "b.The simulator within the test adaption layer" << endl;
  cout << "c.Test execution within the test execution layer" << endl;
  cout << "d.The GUI from the test adaptation layer" << endl;

  cout << endl;

  cout << "B is correct; a simulator is not needed because you can communicate directly with the external system. A, C, and D are incorrect; because these components are still needed to create the TAS." << endl;
}
void processAL_TAEv2016Question17Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-3.3.2 (K2) Explain the factors to be considered when identifying reusability of components" << endl;
  cout << "Question #17 (1 pt) Which of the following is true about reuse?" << endl;
  cout << endl;

  cout << "a.Reuse is built into the TAA and maintained and improved in the TAS" << endl;
  cout << "b.Reuse is built in both the TAA and TAS and maintained in the gTAA" << endl;
  cout << "c.Reuse is only applicable for the gTAA" << endl;
  cout << "d.Reuse is built into the TAS and maintained and improved in the TAA" << endl;
  cout << endl;


  cout << "A is correct; per the syllabus the TAA must designed for reuse but the TAS can increase the ability for reuse; B, C, and D are incorrect; only A contains the proper wording per the syllabus." << endl;
}
void processAL_TAEv2016Question18Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-4.1.1 (K3) Apply guidelines that support effective test tool pilot and deployment activities" << endl;
  cout << "Question #18 (2 pts) Senior management wants to implement test automation into your organization and has asked you to lead this initiative. The organization has a number of systems of varying criticality, some of which may benefit from automation once a TAA is mature. You have been given direction to start with a pilot. How do you select a suitable project for the TAS?" << endl;
  cout << endl;

  cout << "a.A high visibility project in order to highlight the success of the pilot" << endl;
  cout << "b.A non-critical project in order to mitigate any delays the TAS may cause" << endl;
  cout << "c.A project that is simple and easy to automate" << endl;
  cout << "d.A new project that is immature and still in development" << endl;
  cout << endl;


  cout << "B is correct; the pilot should have minimal impact upon normal business but should be conducted with a realistic project. A is incorrect; this may result in great risk to the automation project if it fails. C is incorrect; a trivial project will be of little benefit. D is incorrect; new projects are not good candidates for automation." << endl;
}
void processAL_TAEv2016Question19Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-4.1.1 (K3) Apply guidelines that support effective test tool pilot and deployment activities" << endl;
  cout << "Question #19 (2 pts) You have been asked to conduct a pilot for the test automation tool. You have identified a suitable target project (average size and cost), planned the pilot (treating it as a development effort), and conducted the pilot. What should be your next step?" << endl;
  cout << endl;

  cout << "a. Conduct another pilot on a critical project to ensure the tool will work when it really matters" << endl;
  cout << "b. Conduct another pilot on a trivial project to ensure the time requirements will not be too high on small projects" << endl;
  cout << "c. Evaluate the results engaging the stakeholders to gather their viewpoints" << endl;
  cout << "d. Evaluate the results within the pilot testing team and prepare a report for management" << endl;
  cout << endl;

  cout << "C is correct; it is important to gather input from the stakeholders before moving forward. A and B are incorrect; critical or trivial projects should not be used for a pilot. D is incorrect; this will occur, but the management report should not be prepared until there is feedback from the stakeholders." << endl;
}
void processAL_TAEv2016Question20Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-4.2.1 (K4) Analyze deployment risks and identify technical issues that could lead to failure of the test automation project, and plan mitigation strategies" << endl;
  cout << "Question #20 (3 pts) Your team has been working on creating a strong and maintainable TAS. The TAS is expected to be used for at least five years, so good maintainability is critical. The team has done the following:" << endl;
  cout << endl;
  cout << "1.Created an impact analysis process for all proposed changes to the system" << endl;
  cout << "2.Documented the usage for the TAS" << endl;
  cout << "3.Documented the third party dependencies, including contacts within the third party organization" << endl;
  cout << "4.Verified that the TAS runs in an environment separate from the SUT environment" << endl;
  cout << endl;

  cout << "Given this information, what is a major factor of maintainability that has not been addressed?" << endl;
  cout << "a.The TAS must be modular, so key components can be replaced as needed" << endl;
  cout << "b.The TAS must be a copy of the gTAA" << endl;
  cout << "c.The SUT must reside in the same environment as the TAS" << endl;
  cout << "d.The TAS must unite the test scripts with the TAF" << endl;
  cout << endl;


  cout << "A is correct. The TAS must be modular for maintainability. B is incorrect; the TAS is an instantiation of the gTAA. C is incorrect; the two must reside in separate environments. D is incorrect; the TAS must separate the scripts from the TAF." << endl;
}



void processAL_TAEv2016Question21Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-4.2.1 (K4) Analyze deployment risks and identify technical issues that could lead to failure of the test automation project, and plan mitigation strategies" << endl;
  cout << "Question #21 (3 pts) You have just updated your TAS to include new features. What steps should you take to ensure that the changes have not adversely affected any existing functionality?" << endl;
  cout << endl;

  cout << "a.Compare the new and old TAS versions and assess the impact of any differences" << endl;
  cout << "b.Statically check to ensure procedures for the new and old TAS versions are identical" << endl;
  cout << "c.Ensure the same stubs and drivers are used in the new TAS" << endl;
  cout << "d.Use SUT release notes as a way to ensure the new TAS will operate correctly" << endl;
  cout << endl;

  cout << "A is correct; the TAS is like any other software and changes must be assessed to mitigate risk. B is incorrect; procedures will change as the TAS changes. C is incorrect; stubs and drivers should not be present in an active TAS. D is incorrect; system release notes of the SUT may have nothing to do with identifying vulnerabilities in the TAS." << endl;
  
}
void processAL_TAEv2016Question22Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-4.3.1 (K2) Understand which factors support and affect TAS maintainability" << endl;
  cout << "Question #22 (1 pt) Why is it important to have standard naming conventions for a TAS?" << endl;
  cout << endl;

  cout << "a. A TAS that uses standard names will enable faster execution of the test automation" << endl;
  cout << "b. A TAS that uses standard names will be easier for a new person to learn" << endl;
  cout << "c. A TAS that uses standard names will support global substitutions when test automation standards change" << endl;
  cout << "d. A TAS that uses standard names will allow separation of the test scripts from the TAF" << endl;
  cout << endl;

  cout << "B is correct; standard names will be easier for a new person to learn and will make the code easier to understand. A, C and D are incorrect; using a standard naming convention won’t affect any of these areas." << endl;
  
}
void processAL_TAEv2016Question23Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-5.2.1 (K3) Implement metrics collection methods to support technical and management requirements. Explain how measurement of the test automation can be implemented." << endl;
  cout << "Question #23 (2 pts) Your manager is concerned that it will be difficult to assess the success of the test automation implementation unless it is possible to show that the quality of the tested software steadily improves. You have explained that pass/fail numbers are reported at the end of each execution, but your manager wants to see this information provided automatically to a dashboard that will allow drilling down to the details. How can you automatically provide this information from the test automation software?" << endl;
  cout << endl;

  cout << "a. You can’t. This information will have to be gathered manually at the end of each execution" << endl;
  cout << "b. The automated testware can be used to report this information to a database and a dashboard can be created from the data in the database that will show the trends in passed/failed test cases" << endl;
  cout << "c. The automated testware can report each set of test execution results to a spreadsheet that can be published showing the detailed results" << endl;
  cout << "d. The TAE can record the information during execution and report that into a graphing tool that can be provided for management reporting" << endl;
  cout << endl;

  cout << "B is correct; this is an automated solution that will utilize the tools to provide accurate current and trend information. A is incorrect; you can provide this information. C is incorrect; it will provide only current execution information but no overall trending. D is incorrect; it is a manual process not an automated solution." << endl;
  
}
void processAL_TAEv2016Question24Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-5.2.1 (K3) Implement metrics collection methods to support technical and management requirements. Explain how measurement of the test automation can be implemented." << endl;
  cout << "Question #24 (2 pts) You normally start execution of an automated regression test suite at the end of the workday as it is a lengthy test. Occasionally the test does not complete by the start of the next workday even though it should complete within five hours of starting. What is the most efficient approach you could take to determine the cause of the problem?" << endl;
  cout << endl;

  cout << "a. Run the test at the beginning of the day and monitor it manually" << endl;
  cout << "b. Evaluate a vendor reporting tool that measures test progress" << endl;
  cout << "c. Supplement your staff with a night shift to monitor the test while it is running" << endl;
  cout << "d. Automate collection of the test execution results" << endl;
  cout << endl;

  cout << "D is correct; automated collection is inexpensive and effective. A is incorrect; it interferes with other planned activities. B is incorrect; this is an unnecessary cost. C is incorrect; it is not practical." << endl;
  
}
void processAL_TAEv2016Question25Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-5.1.1(K2) Classify metrics that can be used to monitor the test automation strategy and effectiveness" << endl;
  cout << "Question #25 (1 pt) When implementing results reporting for test automation, what is a good way to allow the reader to make a quick assessment of the progress of the test execution?" << endl;
  cout << endl;

  cout << "a.Spreadsheets" << endl;
  cout << "b.Traffic lights" << endl;
  cout << "c.Detailed reports with percentages of completion" << endl;
  cout << "d.Database of results" << endl;
  cout << endl;


  cout << "B is correct; using colors, such as traffic lights, to indicate progress is mentioned in the syllabus. A and C are incorrect; these will not allow quick analysis. D is incorrect; the data would still have to be derived from the database before it could be analyzed." << endl;




}

void processAL_TAEv2016Question26Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-5.1.1(K2) Classify metrics that can be used to monitor the test automation strategy and effectiveness" << endl;
  cout << "Question #26 (1 pt) You have been asked to distribute the results of your test automation daily. The preferred method for distribution of these results is via e-mail. What is an important characteristic of your test automation reporting that will allow you to provide this information?" << endl;
  cout << endl;

  cout << "a.It should integrate with a common third party tool" << endl;
  cout << "b.It should allow you to supplement the results with manual commentary" << endl;
  cout << "c.It should provide a way to publish the test log library" << endl;
  cout << "d.It should allow you to capture an audio message to accompany test results" << endl;
  cout << endl;


  cout << "A is correct; importing to commonly known tools such as Excel makes it easier for a broader audience to view and manipulate the data. B is incorrect; this would be inefficient and left to individual interpretation of the commentary. C is incorrect; this provides too much data for a general audience. D is incorrect; this would be an unrealistic expectation of a test reporting tool. Specialized audio capture tools would be more practical." << endl;
  
}
void processAL_TAEv2016Question27Incorrect(){
  cout << "" << endl;
    cout << "ALTA-E-5.3.1 (K4) Analyze test logging of both TAS and SUT data" << endl;
  cout << "Question #27 (3 pts) You have been working with a test automation suite that provides good test coverage. The suite contains 500 scripts and has previously run without any problems. Recently, a number of the tests late in the test run have been failing. You have done some analysis and it appears that the test failures are being caused by a SUT failure that is not being detected by one or more tests earlier in the test run. You need more information to pinpoint the test or tests with a false-negative result. What type of logging do you need in order to complete your analysis and get the information to help identify the problem?" << endl;
  cout << endl;

  cout << "1.The status of execution for each test case (pass/fail)" << endl;
  cout << "2.Timing information for each step in each test case" << endl;
  cout << "3.Dynamic information about the SUT" << endl;
  cout << "4.All actions of each test case to allow replaying each test" << endl;
  cout << "5.Failure information for any step in a test case that encounters an error" << endl;
  cout << endl;

  cout << "a.1, 2, 3" << endl;
  cout << "b.2, 4, 5" << endl;
  cout << "c.2, 3, 5" << endl;
  cout << "d.1, 4, 5" << endl;
  cout << endl;


  cout << "D is correct; this would be the most useful information. This is going to be a multi-step analysis starting with the first failure (which is probably at the step rather than test cases level) then replaying it to see what is actually happening and then looking at all the details of the failure. A, B and C are incorrect; the timing information is probably not pertinent and the SUT information is also probably not relevant to the problem although, if it is, it is likely it will be seen when the data in 1, 4, 5 is analyzed." << endl;
  
}
void processAL_TAEv2016Question28Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-5.4.1 (K2) Explain how a test execution report is constructed and published" << endl;
  cout << "Question #28 (1 pt) When publishing a test execution report which key attribute must the report contain?" << endl;
  cout << endl;

  cout << "a.Test case steps" << endl;
  cout << "b.Test environment" << endl;
  cout << "c.Assessment of the reliability of the SUT" << endl;
  cout << "d.Root cause of any failures" << endl;
  cout << endl;

  cout << "B is correct; the test environment information is important in determining test coverage and test validity. A is incorrect; this is too specific. C is incorrect; this information may be derived from the report, but is not a key attribute. D is incorrect; this level of detail would be in the defect report and not in a test execution report." << endl;
  
}
void processAL_TAEv2016Question29Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-6.1.1 (K3) Apply criteria for determining the suitability of tests for automation" << endl;
  cout << "Question #29 (2 pts) You have been asked to implement test automation for a system that has been in production for two years. The software is relatively stable, updates are made once a quarter, and the quality of the software is extremely important. The organization follows a V-model lifecycle and has used this model for many years. Software quality is good on the quarterly releases, but there is concern that the time required for the regression testing is not cost effective and is inhibiting the flow of new features. You see several challenges in this implementation, the greatest of which is the creation and preservation of test data. While the test environments are stable and controlled, the test data is frequently refreshed from production, which makes it difficult to write maintainable test automation." << endl;
  cout << endl;

  cout << "Given this information, which of the following is most likely to be a problem for this test automation effort?" << endl;
  cout << endl;

  cout << "a. Maturity of the test process" << endl;
  cout << "b.Suitability of automation for the stage of the software product lifecycle" << endl;
  cout << "c.Frequency of use" << endl;
  cout << "d.Complexity to automate" << endl;
  cout << endl;

  cout << "D is correct because dealing with the data issue adds a level of complexity to the test automation. It is likely that it will need to create and maintain its own data and preserve this data across the production refreshes. A is incorrect; they follow a mature process. B is incorrect; this is a good time to automate because the software is stable and the updates are made quarterly. C is incorrect; the software will be used frequently and for a long time." << endl;
  
}
void processAL_TAEv2016Question30Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-6.1.2 (K2) Understand the factors in transitioning from manual to automation testing" << endl;

  cout << "Question #30 (1 pt) What is the most common basis for an automated test script?" << endl;
  cout << "a.The gTAA" << endl;
  cout << "b.The SUT" << endl;
  cout << "c.A manual test case" << endl;
  cout << "d.The functional requirements" << endl;
  cout << endl;

  cout << "C is correct; automated test scripts are commonly written from manual test cases. A and B are incorrect; these would not provide the basis for a test script. D is incorrect; while it may provide the basis for the testing it is not usually the basis for an automated test script." << endl;



  
}



void processAL_TAEv2016Question31Incorrect(){

  cout << "" << endl;
  cout << "ALTA-E-6.2.1 (K2) Explain the factors to consider in implementing automated regression testing" << endl;
  cout << "Question #31 (1 pt) What is a stated goal for automated regression test coverage if it is to ascertain the overall quality of the SUT?" << endl;
  cout << endl;

  cout << "a.Cursory" << endl;
  cout << "b.Broad" << endl;
  cout << "c.Deep" << endl;
  cout << "d.Broad and deep" << endl;
  cout << endl;

  cout << "D is correct; per the syllabus. A is incorrect; this will not give an indication of overall quality. B and C are incorrect; both broad and deep are needed." << endl;



  
}
void processAL_TAEv2016Question32Incorrect(){

  cout << "" << endl;
  cout << "ALTA-E-6.3.1 (K2) Explain the factors to consider in implementing automation within new feature testing" << endl;
  cout << "Question #32 (1 pt) Who should provide feedback to the TAE when implementing new features to an existing TAS?" << endl;
  cout << endl;

  cout << "a.Business Analysts" << endl;
  cout << "b.Senior Managers" << endl;
  cout << "c.Test Designers with domain expertise" << endl;
  cout << "d.System Administrators" << endl;
  cout << endl;


  cout << "C is correct. Test designers with domain expertise must ensure the TAS will work with the new features. A, B, and D are all incorrect; they are not versed in the specific TAS design." << endl;

  
}
void processAL_TAEv2016Question33Incorrect(){
  cout << "" << endl;
  cout << "ALTA-E-6.4.1 (K2) Explain the factors to consider in implementing automated confirmation testing" << endl;
  cout << "Question #33 (1 pt) Which of the following is the best reason for automating the confirmation testing of a defect?" << endl;
  cout << endl;

  cout << "a.To close a gap in the existing automation" << endl;
  cout << "b.To ensure that the fix works and continues to work" << endl;
  cout << "c.To justify the time spent finding the defect" << endl;
  cout << "d.To test the configuration management processes" << endl;
  cout << endl;

  cout << "B is correct; you are trying to be sure the fix works and make sure that the fix doesn’t break later or get lost because of a configuration management problem. A is incorrect; while there may be gaps in the test automation this is not the primary reason to automate confirmation testing. C is incorrect; the time spent finding the defect should have been justified by the severity of the defect. D is incorrect; this is a side effect and, while it doesn’t test all the configuration management processes, it does make sure that the fix isn’t lost for some reason." << endl;


  
}
void processAL_TAEv2016Question34Incorrect(){
  cout << "" << endl;
  
  cout << "ALTA-E-7.1.1 (K3) Verify the correctness of an automated test environment including test tool setup" << endl;
  cout << "Question #34 (2 pts) You are having problems with the reliability of the automated test environment and setup. You have decided to create a test suite you can execute to verify the environment before you run the actual test scripts. Which of the following would provide the best quick test of the environment?" << endl;
  cout << endl;

  cout << "a.Run a set of tests that are known to pass and verify that they still pass" << endl;
  cout << "b.Run a set of tests that are known to fail and verify that they still fail" << endl;
  cout << "c.Run a set of tests containing both passes and fails and verify that the results are consistent" << endl;
  cout << "d.Run the entire set of automated tests and verify the results because a subset will not be representative" << endl;
  cout << endl;

  cout << "C is correct; this is the best option assuming you have picked a good set of tests. You want to test that good tests pass and failed tests fail. D is incorrect; you are looking for a quick test. A and B are incorrect; this would be limited in scope and would not provide sufficient coverage." << endl;



}
void processAL_TAEv2016Question35Incorrect(){
  cout << "" << endl;
    cout << "ALTA-E-7.1.1 (K3) Verify the correctness of an automated test environment including test tool setup" << endl;
  cout << "Question #35 (2 pts) You are testing a system that is updated by monthly service packs. You are testing multiple versions of the SUT simultaneously. Your TAS is complex and you need to ensure it remains consistent across the different SUT environments. How will you ensure that the same version of the TAS is used to test each SUT?" << endl;
  cout << endl;

  cout << "a.Update the TAS each time the SUT is patched" << endl;
  cout << "b.Revert back to manual testing" << endl;
  cout << "c.Install the TAS into the SUT environments from a central repository" << endl;
  cout << "d.Develop a tool to track historical test results" << endl;
  cout << endl;

  cout << "C is correct; downloading a copy from a repository ensures a consistent TAS. A is incorrect; this is not feasible. B is incorrect; reverting to manual testing is not warranted. D is incorrect; historical data tracking will only illustrate the symptom of inconsistent results." << endl;


}

void processAL_TAEv2016Question36Incorrect(){
  cout << "" << endl;
    cout << "ALTA-E-7.2.1 (K3) Verify the correct behavior for a given automated test script and/or test suite " << endl;
  cout << "Question #36 (2 pts) You have executed an automated test suite for a product that was released to production. Although your tests passed, there was a major failure in production in an area that is well covered by your automated tests. You have verified that your tests did pass and that the reporting of the results was correct. What should you do now to verify the validity of your tests?" << endl;
  cout << endl;

  cout << "a.Run tests that should fail and verify that they fail" << endl;
  cout << "b.Run tests that should pass and verify that they pass" << endl;
  cout << "c.Check that the post conditions of each test case are being verified correctly" << endl;
  cout << "d.Change your test data and run the tests again" << endl;
  cout << endl;

  cout << "C is correct; given this information, the post conditions are not being checked correctly so test cases are being marked as passed even though something did not work correctly. A and B are incorrect; they won’t show any problems because the test results were all good when you ran the suite. D is incorrect; this is unlikely to change anything." << endl;
  
}
void processAL_TAEv2016Question37Incorrect(){
  cout << "" << endl;
    cout << "ALTA-E-7.2.1 (K3) Verify the correct behavior for a given automated test script and/or test suite" << endl;
  cout << "Question #37 (2 pts) You are preparing to execute a test automation suite for a safety critical healthcare application. Which approach should you take to verify the accuracy of the test results" << endl;
  cout << endl;

  cout << "a.Execute test cases with known failures and verify that they continue to fail" << endl;
  cout << "b.Extract data from the production system and verify compatibility with the TAS" << endl;
  cout << "c.Examine historical test trends on a similar SUT" << endl;
  cout << "d.Execute the test suite slowly and methodically" << endl;
  cout << endl;

  cout << "A is correct; this is a recognized way to test automation suite. B is incorrect; test data should already have been used to validate the TAS. C is incorrect; historical test trends will not be useful in verifying the actual test results. D is incorrect; the speed of execution should not affect the accuracy of the testing results." << endl;
  
}
void processAL_TAEv2016Question38Incorrect(){
  cout << "" << endl;
    cout << "ALTA-E-8.1.1 (K4) Analyze the technical aspects of a deployed test automation solution and provide recommendations for improvement" << endl;
  cout << "Question #38 (3 pts) You have been reviewing the test cases in your TAS and have discovered that there is a wide variety of methods the TAEs have used to handle system errors. How should you handle this?" << endl;
  cout << endl;

  cout << "a.Establish an error recovery process in the TAS and ensure all test cases are using that process" << endl;
  cout << "b.Create a library of recovery processes so there is better reuse between the different scripts" << endl;
  cout << "c.Move to a keyword-driven approach and make recovery one of the keywords" << endl;
  cout << "d.Provide better wait time handling in the scripts to avoid system errors" << endl;
  cout << endl;


  cout << "A is correct; per the syllabus this is a best-practice. B and C are incorrect; these are still going to be duplicating processes, potentially. D is incorrect; there is no indication that the problem is due to better wait time." << endl;

  
  
}
void processAL_TAEv2016Question39Incorrect(){
  cout << "" << endl;
    cout << "ALTA-E-8.1.1 (K4) Analyze the technical aspects of a deployed test automation solution and provide recommendations for improvement" << endl;
  cout << "Question #39 (3 pts) Up until now you have provided automated testing for a stable SUT. Because of changing business demands, the SUT will be updated to include several new features and plug-ins that communicate via APIs. In what way should you update the TAS?" << endl;
  cout << endl;

  cout << "a.Improve TAS recovery to make it more fault-tolerant when API calls fail" << endl;
  cout << "b.Update the documentation for the TAS including its support for APIs" << endl;
  cout << "c.Improve the logging to capture the anticipated increase in defects due to API failures" << endl;
  cout << "d.Modify the adaptation layer in the TAA to enable the TAS to test via the APIs" << endl;
  cout << endl;

  cout << "D is correct; modifying the adaptation layer to enable API testing will allow the TAS to access the plug- ins. A, B, and C are incorrect; these do not directly enhance the API testing capabilities of the TAS" << endl;


  
}
void processAL_TAEv2016Question40Incorrect(){
  cout << "" << endl;
  cout << "  ALTA-E-8.2.1 (K4) Analyze the automated testware, including test environment components, tools and supporting function libraries, in order to understand where consolidation and updates should be made following a given set of test environment or SUT changes" << endl;
  cout << endl;

  cout << "Question #40 (3 pts) You have been conducting a quality review for your TAS. You have discovered that it has not been updated for three years. The TAS functions properly and provides good coverage of the SUT; however, you want to ensure that it is working as efficiently as possible. What step should you consider in order to increase efficiency of the TAS?" << endl;
  cout << endl;

  cout << "a.Ensure consistent naming standards for new automation code" << endl;
  cout << "b.Make changes to the TAS in rapid succession to keep pace with leading edge practices" << endl;
  cout << "c.Ensure the latest libraries are incorporated into the TAS" << endl;
  cout << "d.Enlist a third party vendor to evaluate the current TAS" << endl;
  cout << endl;

  cout << "C is correct; using the latest DLLs tends to improve efficiency and effectiveness. A is incorrect; while this is a good practice, new automation code is not being written. B is incorrect; speed of change to the TAS is risky and there is no indication that leading edge practices will be more efficient. D is incorrect; it might help identify inconsistencies as it is not cost effective." << endl;


  
}


int  processAL_TAEv2016Questions(){
    int pointsScoredForQuestion =0;
    int scoreTotal = 0;
    int scoreByQuestion[40];
    for (int i =0; i< 40; i++)
      scoreByQuestion[i] = 0;
      
    pointsScoredForQuestion = processAL_TAEv2016Question1();
    scoreByQuestion[0] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;
    
    pointsScoredForQuestion = processAL_TAEv2016Question2();
    scoreByQuestion[1] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question3();
    scoreByQuestion[2] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question4();
    scoreByQuestion[3] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question5();
    scoreByQuestion[4] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processAL_TAEv2016Question6();
    scoreByQuestion[5] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question7();
    scoreByQuestion[6] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question8();
    scoreByQuestion[7] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question9();
    scoreByQuestion[8] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question10();
    scoreByQuestion[9] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;





    pointsScoredForQuestion = processAL_TAEv2016Question11();
    scoreByQuestion[10] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question12();
    scoreByQuestion[11] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question13();
    scoreByQuestion[12] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question14();
    scoreByQuestion[13] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question15();
    scoreByQuestion[14] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processAL_TAEv2016Question16();
    scoreByQuestion[15] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question17();
    scoreByQuestion[16] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question18();
    scoreByQuestion[17] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question19();
    scoreByQuestion[18] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question20();
    scoreByQuestion[19] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;





    pointsScoredForQuestion = processAL_TAEv2016Question21();
    scoreByQuestion[20] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question22();
    scoreByQuestion[21] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question23();
    scoreByQuestion[22] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question24();
    scoreByQuestion[23] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question25();
    scoreByQuestion[24] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processAL_TAEv2016Question26();
    scoreByQuestion[25] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question27();
    scoreByQuestion[26] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question28();
    scoreByQuestion[27] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question29();
    scoreByQuestion[28] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question30();
    scoreByQuestion[29] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;





    pointsScoredForQuestion = processAL_TAEv2016Question31();
    scoreByQuestion[30] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question32();
    scoreByQuestion[31] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question33();
    scoreByQuestion[32] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question34();
    scoreByQuestion[33] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question35();
    scoreByQuestion[34] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processAL_TAEv2016Question36();
    scoreByQuestion[35] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question37();
    scoreByQuestion[36] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question38();
    scoreByQuestion[37] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question39();
    scoreByQuestion[38] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_TAEv2016Question40();
    scoreByQuestion[39] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;




    cout <<"All Questions Complete, you scored " << scoreTotal  << " out of 75. Details of incorrectly answered questions are below" << endl;


    if (scoreByQuestion[0] == 0)  processAL_TAEv2016Question1Incorrect();
    if (scoreByQuestion[1] == 0)  processAL_TAEv2016Question2Incorrect();
    if (scoreByQuestion[2] == 0)  processAL_TAEv2016Question3Incorrect();
    if (scoreByQuestion[3] == 0)  processAL_TAEv2016Question4Incorrect();
    if (scoreByQuestion[4] == 0)  processAL_TAEv2016Question5Incorrect();

    if (scoreByQuestion[5] == 0)  processAL_TAEv2016Question6Incorrect();
    if (scoreByQuestion[6] == 0)  processAL_TAEv2016Question7Incorrect();
    if (scoreByQuestion[7] == 0)  processAL_TAEv2016Question8Incorrect();
    if (scoreByQuestion[8] == 0)  processAL_TAEv2016Question9Incorrect();
    if (scoreByQuestion[9] == 0)  processAL_TAEv2016Question10Incorrect();


    if (scoreByQuestion[10] == 0)  processAL_TAEv2016Question11Incorrect();
    if (scoreByQuestion[11] == 0)  processAL_TAEv2016Question12Incorrect();
    if (scoreByQuestion[12] == 0)  processAL_TAEv2016Question13Incorrect();
    if (scoreByQuestion[13] == 0)  processAL_TAEv2016Question14Incorrect();
    if (scoreByQuestion[14] == 0)  processAL_TAEv2016Question15Incorrect();

    if (scoreByQuestion[15] == 0)  processAL_TAEv2016Question16Incorrect();
    if (scoreByQuestion[16] == 0)  processAL_TAEv2016Question17Incorrect();
    if (scoreByQuestion[17] == 0)  processAL_TAEv2016Question18Incorrect();
    if (scoreByQuestion[18] == 0)  processAL_TAEv2016Question19Incorrect();
    if (scoreByQuestion[19] == 0)  processAL_TAEv2016Question20Incorrect();


    if (scoreByQuestion[20] == 0)  processAL_TAEv2016Question21Incorrect();
    if (scoreByQuestion[21] == 0)  processAL_TAEv2016Question22Incorrect();
    if (scoreByQuestion[22] == 0)  processAL_TAEv2016Question23Incorrect();
    if (scoreByQuestion[23] == 0)  processAL_TAEv2016Question24Incorrect();
    if (scoreByQuestion[24] == 0)  processAL_TAEv2016Question25Incorrect();

    if (scoreByQuestion[25] == 0)  processAL_TAEv2016Question26Incorrect();
    if (scoreByQuestion[26] == 0)  processAL_TAEv2016Question27Incorrect();
    if (scoreByQuestion[27] == 0)  processAL_TAEv2016Question28Incorrect();
    if (scoreByQuestion[28] == 0)  processAL_TAEv2016Question29Incorrect();
    if (scoreByQuestion[29] == 0)  processAL_TAEv2016Question30Incorrect();



    if (scoreByQuestion[30] == 0)  processAL_TAEv2016Question31Incorrect();
    if (scoreByQuestion[31] == 0)  processAL_TAEv2016Question32Incorrect();
    if (scoreByQuestion[32] == 0)  processAL_TAEv2016Question33Incorrect();
    if (scoreByQuestion[33] == 0)  processAL_TAEv2016Question34Incorrect();
    if (scoreByQuestion[34] == 0)  processAL_TAEv2016Question35Incorrect();

    if (scoreByQuestion[35] == 0)  processAL_TAEv2016Question36Incorrect();
    if (scoreByQuestion[36] == 0)  processAL_TAEv2016Question37Incorrect();
    if (scoreByQuestion[37] == 0)  processAL_TAEv2016Question38Incorrect();
    if (scoreByQuestion[38] == 0)  processAL_TAEv2016Question39Incorrect();
    if (scoreByQuestion[39] == 0)  processAL_TAEv2016Question40Incorrect();

    return scoreTotal;

}














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





  
int  processCTFL_A_v1p6Questions(){
  cout << "There are 40 questions, each worth one point. The Sample Exam has a time limit of 60 minutes, but this is not enforced by this software"<< endl;
  cout << "Uppercase or lowercase answers are acceptable "<< endl;

  int score = 0;
  score += processCTFL_A_v1p6Question1();
  score += processCTFL_A_v1p6Question2();
  score += processCTFL_A_v1p6Question3();
  score += processCTFL_A_v1p6Question4();
  score += processCTFL_A_v1p6Question5();

  score += processCTFL_A_v1p6Question6();
  score += processCTFL_A_v1p6Question7();
  score += processCTFL_A_v1p6Question8();
  score += processCTFL_A_v1p6Question9();
  score += processCTFL_A_v1p6Question10();


  score += processCTFL_A_v1p6Question11();
  score += processCTFL_A_v1p6Question12();
  score += processCTFL_A_v1p6Question13();
  score += processCTFL_A_v1p6Question14();
  score += processCTFL_A_v1p6Question15();

  score += processCTFL_A_v1p6Question16();
  score += processCTFL_A_v1p6Question17();
  score += processCTFL_A_v1p6Question18();
  score += processCTFL_A_v1p6Question19();
  score += processCTFL_A_v1p6Question20();



  score += processCTFL_A_v1p6Question21();
  score += processCTFL_A_v1p6Question22();
  score += processCTFL_A_v1p6Question23();
  score += processCTFL_A_v1p6Question24();
  score += processCTFL_A_v1p6Question25();

  score += processCTFL_A_v1p6Question26();
  score += processCTFL_A_v1p6Question27();
  score += processCTFL_A_v1p6Question28();
  score += processCTFL_A_v1p6Question29();
  score += processCTFL_A_v1p6Question30();



  score += processCTFL_A_v1p6Question31();
  score += processCTFL_A_v1p6Question32();
  score += processCTFL_A_v1p6Question33();
  score += processCTFL_A_v1p6Question34();
  score += processCTFL_A_v1p6Question35();

  score += processCTFL_A_v1p6Question36();
  score += processCTFL_A_v1p6Question37();
  score += processCTFL_A_v1p6Question38();
  score += processCTFL_A_v1p6Question39();
  score += processCTFL_A_v1p6Question40();



  cout <<"All Questions Complete, you scored " << score << endl;
  return score;

}


void printShortLicenceInfo(){
// print same licencing info for startup and for licencing page.
  cout << "STSQR-ISTQBHC : SoftwareTesterScott QuizRunner - ISTQB Hardcoded. A program to assist students allowing sitting ISTQB sample exams electronically." << endl;
  cout << "Version 1.0.0 Released 26Nov2021:  Copyright (C) 2021 SoftwareTesterScott  SoftwareTesterScott@gmail.com" << endl;
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
    else if ((input == 'C') || (input == 'c')) processCTFL_A_v1p6Questions();
    else if ((input == 'F') || (input == 'f')) processAL_TAEv2016Questions();
    
    else if ((input == 'M') || (input == 'm') || (input =='?')) printMainMenu();
    else if ((input == 'Q') || (input == 'q')) cout << "Quitting" << endl;
    else cout << "Unrecognised command. Press \"M\" and then enter for main menu \"Q\" and then enter to quit" << endl;
  }
  cout << "If you have found this program useful, please consider buying me a coffee as thanks via https://www.buymeacoffee.com/SoftwareTesterS " << endl;


}
