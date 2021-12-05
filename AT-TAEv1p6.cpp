
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


int  processAL_TAEv2016Exam(){
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






