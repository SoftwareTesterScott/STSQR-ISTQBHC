
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


extern char getAnswer();



/*
int processDoubleAnswerQuestion(){


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

*/

int processFL_MATv1p1Question1(){
  cout << endl << endl << endl << endl << endl;

  cout << "Question #1 (1 Point) You are the quality specialist in a mobile application development team. For which of the following would mobile analytics data be used in the test strategy or test plan?" << endl;
  cout << endl;

  cout << "a)To define the expected user base of the application." << endl;
  cout << "b)To derive test levels, test cases and test data." << endl;
  cout << "c)To select the device portfolio and prioritization for test execution." << endl;
  cout << "d)To select the application type and development model to follow." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0;  
  
}
int processFL_MATv1p1Question2(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #2 (1 Point) Your team is developing a free-use application that collects publicly available news from user selected sources so that the user has a single place to read all the news from his/her favorite sources. Based on this information, which of the following business models is MOST appropriate?" << endl;

  cout << "a) Freemium application." << endl;
  cout << "b) Advertisement-based application. " << endl;
  cout << "c) Paid application." << endl;
  cout << "d) Transaction-based application." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0;  
}
int processFL_MATv1p1Question3(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #3 (1 Point) Which of the following statements is true for feature phones? " << endl;

  cout << "a)Feature phones provide limited support for app installation." << endl;
  cout << "b)Feature phones are similar to smart phones but bigger. " << endl;
  cout << "c)Feature phones are the next generation smartphones, with extended functionality." << endl;
  cout << "d)Feature phones have cameras, GPS and other sensors built in." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question4(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #4 (1 Point) Your team develops an Android game utilizing many device features such as camera, GPS and device orientation. Which of the following types of application is MOST suitable, if the precise use of device specific features is essential? " << endl;

  cout << "a) Hybrid app." << endl;
  cout << "b) Mobile web app. " << endl;
  cout << "c) Native app." << endl;
  cout << "d) Desktop app." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question5(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #5 (1 Point) Your team develops an iOS app that is used to register users, their e-mail and street addresses. The data is transferred to a server and provides registered users with samples of physical products, shipped via normal mail. Which TWO of the following are the MOST appropriate architectural decisions to consider for this app? " << endl;

  cout << "a) Always Connected." << endl;
  cout << "b) Native app. " << endl;
  cout << "c) Store and forward" << endl;
  cout << "d) Cellular data" << endl;
  cout << "e) Web app" << endl;
  cout << endl;


  cout <<"Type the letter for first choice and press enter, then letter for second choice and press enter."<< endl;
  char Answer1 = getAnswer();
  char Answer2 = getAnswer();
  if (((Answer1 == 'B') || (Answer1 == 'b')) && ((Answer2 == 'C') || (Answer2 =='c')) ||
      ((Answer1 == 'C') || (Answer1 == 'c')) && ((Answer2 == 'B') || (Answer2 =='b')) )
    return 1;
  else return 0;

}
int processFL_MATv1p1Question6(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #6 (1 Point) Your analytics data shows that all your users use iPhone. Which of the following decisions is MOST appropriate for your test strategy if you have a low risk app? " << endl;

  cout << "a) Use remote device access service." << endl;
  cout << "b) Use single platform strategy. " << endl;
  cout << "c) Use maximum coverage strategy." << endl;
  cout << "d) Use iOS simulators only." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question7(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #7 (1 Point) Which of the following is NOT a challenge when testing mobile apps? " << endl;

  cout << "a)Unknown command parameters for application startup altering the app’s behavior." << endl;
  cout << "b)Diverse users and user groups. " << endl;
  cout << "c)Multiple network types and network providers." << endl;
  cout << "d)Non-availability of newly launched devices necessitating the use of emulators/simulators." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question8(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #8 (1 Point) A company has decided to use crowd testing. Which of the following risks is mitigated by this decision? " << endl;

  cout << "a)Non-availability of important stakeholders during development." << endl;
  cout << "b)Cost of supporting multiple platforms. " << endl;
  cout << "c)Non-availability of important devices during testing." << endl;
  cout << "d)Good reviews in the platform provider’s app store." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question9(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #9 (1 Point) When testing a native app using different device features, which of the following hardware devices is LEAST needed to be in focus when performing the tests?" << endl;

  cout << "a)WLAN module." << endl;
  cout << "b)Integrated speakers. " << endl;
  cout << "c)Built-in camera." << endl;
  cout << "d)Headphone access." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question10(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #10 (1 Point) Which of the following is NOT a potential effect of overheating of a mobile device when testing it? " << endl;

  cout << "a)Application becomes slow." << endl;
  cout << "b)Features of the application stop working. " << endl;
  cout << "c)De-installation of the app." << endl;
  cout << "d)Incorrect functionality of apps." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}

int processFL_MATv1p1Question11(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #11 (1 Point) Which of the following statements is NOT a valid scenario for testing a mobile device regarding input sensors? " << endl;

  cout << "a)Verifying the quality of the received GPS signal." << endl;
  cout << "b)Testing for correct functionality of the gyroscope. " << endl;
  cout << "c)Validating data provided by the motion sensor." << endl;
  cout << "d)Correct screen size in landscape and portrait modes." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 1;
  else return 0;  
}

int processFL_MATv1p1Question12(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #12 (1 Point) Which of the following options contains tests that ONLY relate to different input methods? " << endl;

  cout << "a) Swiping to the next screen, double tapping on a button, scanning a QR code, recording audio." << endl;
  cout << "b) Taking a photo with the camera, using a soft keyboard, printing the content of a screen, using GPS coordinates. " << endl;
  cout << "c) Dragging an object on the screen, opening another application, capturing of images, sending an SMS to a friend." << endl;
  cout << "d) Displaying geo location data, performing distance measurements, using a TV remote app, capturing videos from the internet." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0;  
}
int processFL_MATv1p1Question13(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #13 (1 Point) You are working as a mobile tester for a company which is developing a navigation app. One of the requirements is that the app should run in both portrait and landscape modes whilst providing the same features to the user in an accurate way. Which of the following lists the BEST aspects to take into account for verifying correct functionality when switching screen orientation? " << endl;

  cout << "a) Motion sensor, security issues, correctness of output data." << endl;
  cout << "b) Usability issues, retaining input data, maintenance of current state." << endl;
  cout << "c) Various switches in screen orientation, performance issues, user interface features." << endl;
  cout << "d) WLAN interrupts, rendering issues in the graphical user interface, loss of entered data." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question14(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #14 (1 Point) You are working as a test manager for a bank which is developing a new release of its online banking software. This software is realized as a web application. During the preparation of suitable tests, you are focusing on the app’s fault tolerance according user-initiated interrupts. Which of the following tests scenarios would you choose at BEST for this purpose? " << endl;

  cout << "i.   Displaying low battery warnings." << endl;
  cout << "ii.  Setting mobile devices in standby mode. " << endl;
  cout << "iii. Accepting incoming voice calls." << endl;
  cout << "iv.  Low memory notification." << endl;
  cout << "v.   Setting device in do-not-disturb mode." << endl;
  cout << endl;

  cout << "a) i – ii – iii" << endl;
  cout << "b) i – ii – iv " << endl;
  cout << "c) ii – iii – iv" << endl;
  cout << "d) ii – iii – v" << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question15(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #15 (1 Point) A health insurance company released an updated version of its customer app. The update includes a feature which scans a pharmacy bill and sends it directly to the health insurance company for payment. However, when the customers installed the update, they found that the camera couldn't be invoked to scan the bills. This bug was reported and fixed. Now new tests need to be prepared and executed, and retesting needs to be performed. " << endl;
  cout << "Which of the following tests will you execute as the MOST IMPORTANT test in the given scenario?" << endl;

  cout << "a) Test for performance." << endl;
  cout << "b) Test for accessibility. " << endl;
  cout << "c) Test for access permission." << endl;
  cout << "d) Test for installation." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question16(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #16 (1 Point) Your company provides a news massaging app that includes a notification feature for displaying breaking news. The notifications have deep linking to the relevant online news pages. Recently, some users of the app complained about experiencing delays with the display of the news notifications, while at other times, the expected notifications were not displayed at all. The root cause of this defect was identified by the developers and fixed. In your role as a mobile tester, which functional tests would you undertake in order to validate that the fixed version of the app is correctly working? " << endl;

  cout << "i.   Correct displaying of the notification when the app is in the background." << endl;
  cout << "ii.  Running the application under low battery conditions. " << endl;
  cout << "iii. Testing the performance of the app whilst displaying the notification." << endl;
  cout << "iv.  Performing of usability tests related to the fixed version of the app." << endl;
  cout << "v.   Testing the deep linking to the correct news page of the app." << endl;
  cout << endl;

  cout << "a) i – iv – v" << endl;
  cout << "b) i – ii – iv " << endl;
  cout << "c) i – ii – v" << endl;
  cout << "d) ii – iii – iv" << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question17(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #17 (1 Point) Your company is developing a new version of a hybrid app for price comparison. This app consists of feature-rich functionalities in quick-access links. As a mobile tester, it is your task to verify the failure- free working of these quick-access links. Which of the following is the BEST approach to take? " << endl;

  cout << "a) Verifying the correct behavior of force-touch functionality of an iOS app." << endl;
  cout << "b) Assuring the presence of favorite bookmarks in Mobile Chrome on Android OS. " << endl;
  cout << "c) Verifying that all hardware keys of a mobile device work as expected." << endl;
  cout << "d) Using a suitable tool for identifying broken links in the mobile web app." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question18(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #18 (1 Point) You are testing a native iOS app that uses various sensors. Which of the following test types do NOT apply? " << endl;

  cout << "a) Performance testing." << endl;
  cout << "b) Testing for utilization of device features." << endl;
  cout << "c) Cross-browser testing." << endl;
  cout << "d) Device compatibility testing." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question19(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #19 (1 Point) Which of the following is a typical test type for testing interoperability with OS versions?" << endl;

  cout << "a) Testing for security issues." << endl;
  cout << "b) Testing for performance problems. " << endl;
  cout << "c) Testing for accessibility standards." << endl;
  cout << "d) Testing for backward compatibility." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question20(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #20 (1 Point) Which of the following is a PRIMARY test goal when performing tests for co-existence of an system under test (SUT) with other apps on the device? " << endl;

  cout << "a)Verifying that the SUT does not harm any user data." << endl;
  cout << "b)Identifying existing security issues on the device. " << endl;
  cout << "c)Assessing usability problems in the SUT." << endl;
  cout << "d)Testing if the SUT meets accessibility standards." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0; 
}


int processFL_MATv1p1Question21(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #21 (1 Point) You are developing a test approach for performing connectivity tests on different types of mobile devices. Which of the following should NOT be in scope for this approach? " << endl;

  cout << "a)Switching from GSM to flight mode and back to GSM." << endl;
  cout << "b)Initiating a payment transaction via NFC. " << endl;
  cout << "c)Using Bluetooth for pairing with a wearable device." << endl;
  cout << "d)Connecting a USB cable with a power supply." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 1;
  else return 0;  
}

int processFL_MATv1p1Question22(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #22 (1 Point) You are assigned the task of installation testing for an Android application. Which of the following installation tests should NOT be used?" << endl;

  cout << "a)Executing App-Installer.exe." << endl;
  cout << "b)Install by connecting the device to a PC and running commands for installation. " << endl;
  cout << "c)Installation from Google Play Beta Program." << endl;
  cout << "d)Sideloading by providing the installation package on an SD-Card and executing from within the device file system." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0;  
}
int processFL_MATv1p1Question23(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #23 (1 Point) Which TWO of the following are potential security issues for mobile apps? " << endl;

  cout << "a)Code injection via input fields." << endl;
  cout << "b)Data being transferred unencrypted. " << endl;
  cout << "c)App not responding after interruption." << endl;
  cout << "d)Rendering issues after changing device orientation." << endl;
  cout << "e)Overlap of screen elements on small screens." << endl;
  cout << endl;

  cout <<"Type the letter for first choice and press enter, then letter for second choice and press enter."<< endl;
  char Answer1 = getAnswer();
  char Answer2 = getAnswer();
  if (((Answer1 == 'A') || (Answer1 == 'a')) && ((Answer2 == 'B') || (Answer2 =='b')) ||
      ((Answer1 == 'B') || (Answer1 == 'b')) && ((Answer2 == 'A') || (Answer2 =='a')) )
    return 1;
  else return 0;
}
int processFL_MATv1p1Question24(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #24 (1 Point) Which of the following are you likely to use to carry out a performance test of the time behavior of an app? " << endl;

  cout << "a)An instrumented build to get exact chronometric numbers." << endl;
  cout << "b)A load generator to observe the server behavior under heavy load. " << endl;
  cout << "c)Running the app on an emulator/simulator." << endl;
  cout << "d)A device and a stopwatch to check the performance of the device." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question25(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #25 (1 Point) You are tasked with carrying out a usability test for a mobile app. Which of the following is a step that you will NOT perform?" << endl;

  cout << "a)Ask the manager to order a usability lab session." << endl;
  cout << "b)Test the app to check compliance with platforms user interface guidelines " << endl;
  cout << "c)Activate the voice-over feature of the device." << endl;
  cout << "d)Learn about the look and feel expectations of the platform." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question26(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #26 (1 Point) What does the mnemonic \"CRUD\" stand for in the context of data validation testing? " << endl;

  cout << "a)Copy, Rename, Update, Delete." << endl;
  cout << "b)Create, Read, Undo, Delete. " << endl;
  cout << "c)Create, Read, Update, Delete." << endl;
  cout << "d)Create, Read, Undo, Deploy." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question27(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #27 (1 Point) You are conducting internationalization testing. While you execute the tests you partly see pseudo - strings and partly English strings. Which of the following is the most likely cause? " << endl;

  cout << "a)Missing translations." << endl;
  cout << "b)Hard-coded English strings. " << endl;
  cout << "c)Wrong language settings of the device." << endl;
  cout << "d)Something went wrong during build." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question28(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #28 (1 Point) Why should accessibility testing be conducted? " << endl;

  cout << "a)To determine if the app is usable by users with differing needs ." << endl;
  cout << "b)Because it is required by the W3C and the platform providers. " << endl;
  cout << "c)To completely test the application." << endl;
  cout << "d)As generic test cases exist that must be executed for every application." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question29(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #29 (1 Point) You are a tester in a team developing a mobile app. Your team has finished the current version of the app and has released it to the application store. Which of the following is your next activity? " << endl;

  cout << "a)Archiving testware." << endl;
  cout << "b)Post-release testing. " << endl;
  cout << "c)Application store approval testing." << endl;
  cout << "d)Test closure." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question30(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #30 (1 Point) You are a new member in a team which is testing mobile applications. Your team lead asks you to test the app’s inputs for a duration of 1 hour, functions for 1 hour, interrupts for 1 hour, and so on. Which of the following is the team lead applying? " << endl;

  cout << "a) Risk-Based Test Management" << endl;
  cout << "b) Delegating the responsibility of his job to you. " << endl;
  cout << "c) Managing Performance Testing." << endl;
  cout << "d) Session-Based Test Management." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 1;
  else return 0; 
}


int processFL_MATv1p1Question31(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #31 (1 Point) Which of the following is an effective method for field testing? " << endl;

  cout << "a)Using tours as a kind of exploratory test technique." << endl;
  cout << "b)Using an in-house device lab for executing tests on different smartphones. " << endl;
  cout << "c)Using a cloud-based approach." << endl;
  cout << "d)Using a test tool for executing automated tests on mobile browsers." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0;  
}

int processFL_MATv1p1Question32(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #32 (1 Point) Why is it common for mobile app projects to flip the Test Pyramid?" << endl;

  cout << "a) Unit tests are much more complicated on mobile apps. As a result, it is convenient to only have a few unit tests." << endl;
  cout << "b) Missing tool support for unit and integration testing for mobile apps. " << endl;
  cout << "c) Mobile apps are always monolithic. As a result, everything can be tested at system level and there is no need to test at lower levels." << endl;
  cout << "d) Mobile apps require a lot of manual testing, like usability or field testing." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 1;
  else return 0;  
}
int processFL_MATv1p1Question33(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #33 (1 Point) Which of the following statements is correct for the development environments used for mobile application development? " << endl;

  cout << "a) iOS developers use Visual Studio IDE as their development environment." << endl;
  cout << "b) Android developers use the Universal Studio IDE while iOS developers use Xcode as their development environment. " << endl;
  cout << "c) Android developers use the Xcode IDE as their development environment ." << endl;
  cout << "d) iOS developers use the Xcode IDE as their development environment." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question34(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #34 (1 Point) Which of the following is NOT a task that can be typically performed by using a software development kit (SDK) for mobile applications? " << endl;

  cout << "a) Taking screenshots." << endl;
  cout << "b) Designing test cases. " << endl;
  cout << "c) Pushing random events to the application." << endl;
  cout << "d) Creating virtual devices." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question35(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #35 (1 Point) You are assigned as a tester for a mobile app with a client-server architecture. In order to better utilize available equipment, the company decides to use the employee’s PC without the application being connected to a real server, in order to test the basic features in early test stages. Which of the following architectures would you recommend that the developer of the Android app should use in the early test stages of the development to verify the functional suitability of the basic features? " << endl;

  cout << "a) Have the server emulator installed on the developer’s PC and the simulator of the mobile application installed on a real device." << endl;
  cout << "b) Have the simulator of the mobile application installed on one of the Android Virtual Device’s (AVD’s) device emulators and the server emulator installed on the developer’s PC. " << endl;
  cout << "c) Have the server simulator installed on the developer’s PC and the mobile application installed on one of the AVD’s device emulators." << endl;
  cout << "d) Have the server simulator and the emulated mobile application installed directly on the developer’s PC." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question36(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #36 (1 Point) You are the test manager in a digital banking division at a Fintech company that is upgradi ng the Android-based mobile banking application of a mid-level financial institution. The upgrade incorporates an innovative security mechanism that uses fingerprint and face recognition features for enhanced app security. Which of the following represents the BEST approach to use in order to setup your test lab for this enhancement? " << endl;

  cout << "a) Setup a remote test lab in order to test the new innovative mobile banking application on as many types of devices as possible." << endl;
  cout << "b) Setup an on-premise lab in order to effectively test the new unique device-related features of the innovative mobile banking application. " << endl;
  cout << "c) Setup a remote test lab in order to test the mobile banking application on many types of different devices and an on-premise lab to cover the maximum of possible devices." << endl;
  cout << "d) Setup a remote test lab in order to test the new innovative mobile banking application on many types of Android devices from different device manufacturers and save money for the company." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question37(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #37 (1 Point) Which of the following statement does NOT correctly distinguish between the common mobile testing automation approaches? " << endl;

  cout << "a) Agent-based testing approach is best used for executing mobile web applications, whereas device-based testing are best used for all types of mobile applications." << endl;
  cout << "b) Agent-based testing approach utilizes a string sent by the browser to spoof a particular browser, whereas device-based testing approach has to be executed on a particular mobile gadget. " << endl;
  cout << "c) Native apps are best tested using the general web application automation tools, whereas mobile apps need specific tools." << endl;
  cout << "d) The mode of operation for the agent-based testing approach is to mimic the browser characteristics, whereas that of the device-based testing approach is to operate on the actual browser." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question38(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #38 (1 Point) Which of the following statements is TRUE regarding the scripting methods used in automation of mobile testing? " << endl;

  cout << "a) Scripting using object identification is faster than using visual based (OCR/Text recognition), and therefore reduces the overall time needed for test execution." << endl;
  cout << "b) Object based scripting is the more reliable method of authoring test automation code because it allows the test framework to match the right mobile application object agnostically to the device under test." << endl;
  cout << "c) The scripting method using object identification increases the ongoing maintenance effort when there are frequent software code changes to the app that affect the baseline images ." << endl;
  cout << "d) Relying on OCR/Text recognition and object learning does not pose a risk to the test automation reliability or robustness." << endl;
  cout << endl;

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question39(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #39 (1 Point) Which of the following is NOT a major consideration during the evaluation of mobile automation test tools? " << endl;

  cout << "a) The test automation skill set of the testers who will be using the tool." << endl;
  cout << "b) Test automation requirements and complexities such as the use of new features such as FaceID, Fingerprint, Chatbots by the app. " << endl;
  cout << "c) It is important to consider automation requirements and complexities." << endl;
  cout << "d) Ability of the test framework to operate independently of other existing tools used in the organization." << endl;
  cout   << endl;

  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 1;
  else return 0; 
}
int processFL_MATv1p1Question40(){
  cout << endl<< endl<< endl<< endl<< endl;

  cout << "Question #40 (1 Point) Which of the following statements LEAST supports the use of a remote test lab? " << endl;

  cout << "a) Testing during later stages of the app development and which need to run on the full device lab, is best done on a remote device lab." << endl;
  cout << "b) A remote device lab will most likely cover a small set of the latest device/OS configurations to allow developers and testers to quickly validate early design st ages of the app. " << endl;
  cout << "c) Remote device labs will ensure sufficient variety of device and OS to enable teams to get a larger variety of test gadgets for their testing." << endl;
  cout << "d) Remote labs are better when executing at large-scale because they are typically designed to ensure that stability concerns are in most cases removed from the overall process." << endl;
  cout  << endl;

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0; 
}



void processFL_MATv1p1Question1Incorrect(){
cout << "MAT-1.1.1 (K2)  Question #1 (1 Point) You are the quality specialist in a mobile application development team. For which of the following would mobile analytics data be used in the test strategy or test plan? " << endl;

cout << "a)To define the expected user base of the application." << endl;
cout << "b)To derive test levels, test cases and test data." << endl;
cout << "c)To select the device portfolio and prioritization for test execution." << endl;
cout << "d)To select the application type and development model to follow." << endl;

cout << "Select ONE option" << endl;

cout << "C is correct" << endl;

cout << "Is correct: As tests cannot be executed on all possible devices, the selected device portfolio and prioritization should be based on the devices and platforms most common found in the target market. The information about most common devices and platforms in the target market is provided by mobile analytics data." << endl;




}
void processFL_MATv1p1Question2Incorrect(){
cout << "MAT-1.2.1 (K2) Question #2 (1 Point) Your team is developing a free-use application that collects publicly available news from user selected sources so that the user has a single place to read all the news from his/her favorite sources. Based on this information, which of the following business models is MOST appropriate?" << endl;

cout << "a) Freemium application." << endl;
cout << "b) Advertisement-based application." << endl;
cout << "c) Paid application." << endl;
cout << "d) Transaction-based application." << endl;

cout << "Select ONE option" << endl;

cout << "B is correct: The data shown is publicly available, and thus it is unlikely the user will pay to read the data in the app. However, the user is used to seeing advertisements in news sites." << endl;



}
void processFL_MATv1p1Question3Incorrect(){
cout << "MAT-1.3.1 (K1) Question #3 (1 Point) Which of the following statements is true for feature phones?" << endl;
cout << "a)Feature phones provide limited support for app installation." << endl;
cout << "b)Feature phones are similar to smart phones but bigger." << endl;
cout << "c)Feature phones are the next generation smartphones, with extended functionality." << endl;
cout << "d)Feature phones have cameras, GPS and other sensors built in." << endl;
cout << "Select ONE option." << endl;

cout << "A is correct: Feature phones come with some apps installed, like browsers, but user options to install additional apps are usually limited to a small set of applications provided by the device manufacturer" << endl;



}
void processFL_MATv1p1Question4Incorrect(){
cout << "MAT-1.4.1 (K2) Question #4 (1 Point) Your team develops an Android game utilizing many device features such as camera, GPS and device orientation. Which of the following types of application is MOST suitable, if the precise use of device specific features is essential?" << endl;

cout << "a) Hybrid app." << endl;
cout << "b) Mobile web app." << endl;
cout << "c) Native app." << endl;
cout << "d) Desktop app." << endl;

cout << "Select ONE option." << endl;

cout << "C is correct: The game is for one platform only and utilized many device features, which can be best utilized by native apps." << endl;


}
void processFL_MATv1p1Question5Incorrect(){
cout << "MAT-1.5.1 (K2) Question #5 (1 Point) Your team develops an iOS app that is used to register users, their e-mail and street addresses. The data is transferred to a server and provides registered users with samples of physical products, shipped via normal mail. Which TWO of the following are the MOST appropriate architectural decisions to consider for this app?" << endl;
cout << "a) Always Connected." << endl;
cout << "b) Native app." << endl;
cout << "c) Store and forward" << endl;
cout << "d) Cellular data" << endl;
cout << "e) Web app." << endl;

cout << "Select TWO options." << endl;
cout << "B and C are correct" << endl;
cout << "b) Is correct: Native app is appropriate since it is iOS and allows user to work offline" << endl;
cout << "c) Is correct: Store and forward model allows the user to register even when he/she is offline while doing so" << endl;



}
void processFL_MATv1p1Question6Incorrect(){
cout << "MAT-1.6.1 (K3) Question #6 (1 Point) Your analytics data shows that all your users use iPhone. Which of the following decisions is MOST appropriate for your test strategy if you have a low risk app? " << endl; 
cout << "a) Use remote device access service." << endl;
cout << "b) Use single platform strategy." << endl;
cout << "c) Use maximum coverage strategy." << endl;
cout << "d) Use iOS simulators only." << endl;

cout << "Select ONE option." << endl;

cout << "B is correct: as the user bases is single platform and app is low risk." << endl;




}
void processFL_MATv1p1Question7Incorrect(){
cout << "MAT-1.7.1 (K2) Question #7 (1 Point) Which of the following is NOT a challenge when testing mobile apps?" << endl;
cout << "a)Unknown command parameters for application startup altering the app’s behavior." << endl;
cout << "b)Diverse users and user groups." << endl;
cout << "c)Multiple network types and network providers." << endl;
cout << "d)Non-availability of newly launched devices necessitating the use of emulators/simulators." << endl;

cout << "Select ONE option." << endl;

cout << "A is correct: Mobile apps are usually started via tapping in the GUI. Thus, the user has no option to provide additional parameters during startup of the app." << endl;


}
void processFL_MATv1p1Question8Incorrect(){
cout << "MAT-1.8.1 (K2) Question #8 (1 Point) A company has decided to use crowd testing. Which of the following risks is mitigated by this decision?" << endl;
cout << "a)Non-availability of important stakeholders during development." << endl;
cout << "b)Cost of supporting multiple platforms." << endl;
cout << "c)Non-availability of important devices during testing." << endl;
cout << "d)Good reviews in the platform provider’s app store." << endl;

cout << "Select ONE option." << endl;

cout << "C is correct Is correct: as the crowd has a lot of different devices." << endl;


}
void processFL_MATv1p1Question9Incorrect(){
cout << "MAT-2.1.1 (K2) Question #9 (1 Point) When testing a native app using different device features, which of the following hardware devices is LEAST needed to be in focus when performing the tests?" << endl;
cout << "a)WLAN module." << endl;
cout << "b)Integrated speakers." << endl;
cout << "c)Built-in camera." << endl;
cout << "d)Headphone access." << endl;

cout << "Select ONE option." << endl;

cout << "A is correct: As mentioned in the text, the SUT is a native app and common native apps can work without an internet connection. Thus, testing the WLAN module should have the lowest priority in comparison to the tests of the other hardware features." << endl;


}
void processFL_MATv1p1Question10Incorrect(){
cout << "MAT-2.1.3 (K2) Question #10 (1 Point) Which of the following is NOT a potential effect of overheating of a mobile device when testing it?" << endl;
cout << "a)Application becomes slow." << endl;
cout << "b)Features of the application stop working." << endl;
cout << "c)De-installation of the app." << endl;
cout << "d)Incorrect functionality of apps." << endl;

cout << "Select ONE option." << endl;

cout << "C is correct: as apps are not de-installed due to overheating." << endl;


}
void processFL_MATv1p1Question11Incorrect(){
cout << "MAT-2.1.4 (K1) Question #11 (1 Point) Which of the following statements is NOT a valid scenario for testing a mobile device regarding input sensors?" << endl;
cout << "a)Verifying the quality of the received GPS signal." << endl;
cout << "b)Testing for correct functionality of the gyroscope." << endl;
cout << "c)Validating data provided by the motion sensor." << endl;
cout << "d)Correct screen size in landscape and portrait modes." << endl;

cout << "Select ONE option." << endl;

cout << "D is correct: This scenario is not testing an input sensor." << endl;



}
void processFL_MATv1p1Question12Incorrect(){


cout << "MAT-2.1.5 (K1) Question #12 (1 Point) Which of the following options contains tests that ONLY relate to different input methods?" << endl;
cout << "a) Swiping to the next screen, double tapping on a button, scanning a QR code, recording audio." << endl;
cout << "b) Taking a photo with the camera, using a soft keyboard, printing the content of a screen, using GPS coordinates." << endl;
cout << "c) Dragging an object on the screen, opening another application, capturing of images, sending an SMS to a friend." << endl;
cout << "d) Displaying geo location data, performing distance measurements, using a TV remote app, capturing videos from the internet." << endl;
cout << "Select ONE option." << endl;

cout << "A is correct: This is the best answer, because it lists only scenarios covering different input methods." << endl;

}
void processFL_MATv1p1Question13Incorrect(){
cout << "MAT-2.1.6 (K2) Question #13 (1 Point) You are working as a mobile tester for a company which is developing a navigation app. One of the requirements is that the app should run in both portrait and landscape modes whilst providing the same features to the user in an accurate way. Which of the following lists the BEST aspects to take into account for verifying correct functionality when switching screen orientation?" << endl;
cout << "a) Motion sensor, security issues, correctness of output data." << endl;
cout << "b) Usability issues, retaining input data, maintenance of current state." << endl;
cout << "c) Various switches in screen orientation, performance issues, user interface features." << endl;
cout << "d) WLAN interrupts, rendering issues in the graphical user interface, loss of entered data." << endl;
cout << "Select ONE option." << endl;

cout << "B is correct: The list contains only aspects that are mentioned in the syllabus for screen orientation change." << endl;


}
void processFL_MATv1p1Question14Incorrect(){
cout << "MAT-2.1.7 (K3) Question #14 (1 Point) You are working as a test manager for a bank which is developing a new release of its online banking software. This software is realized as a web application. During the preparation of suitable tests, you are focusing on the app’s fault tolerance according user-initiated interrupts. Which of the following tests scenarios would you choose at BEST for this purpose?" << endl;

cout << "i.   Displaying low battery warnings." << endl;
cout << "ii.  Setting mobile devices in standby mode." << endl;
cout << "iii. Accepting incoming voice calls." << endl;
cout << "iv.  Low memory notification." << endl;
cout << "v.   Setting device in do-not-disturb mode." << endl;

cout << "a) i – ii – iii" << endl;
cout << "b) i – ii – iv" << endl;
cout << "c) ii – iii – iv" << endl;
cout << "d) ii – iii – v" << endl;

cout << "Select ONE option." << endl;

cout << "D is correct: Statements ii, iii and v are all user-initiated interrupts." << endl;


}
void processFL_MATv1p1Question15Incorrect(){
cout << "MAT-2.1.8 (K3) Question #15 (1 Point) A health insurance company released an updated version of its customer app. The update includes a feature which scans a pharmacy bill and sends it directly to the health insurance company for payment. However, when the customers installed the update, they found that the camera couldn't be invoked to scan the bills. This bug was reported and fixed. Now new tests need to be prepared and executed, and retesting needs to be performed." << endl;
cout << "Which of the following tests will you execute as the MOST IMPORTANT test in the given scenario?" << endl;
cout << "a) Test for performance." << endl;
cout << "b) Test for accessibility." << endl;
cout << "c) Test for access permission." << endl;
cout << "d) Test for installation." << endl;



cout << "Select ONE option." << endl;

cout << "C is correct: This is the most important test to be performed, because missing or incorrect access permissions may be a possible root cause for the fixed problem." << endl;


}
void processFL_MATv1p1Question16Incorrect(){
cout << "MAT-2.2.1 (K3) Question #16 (1 Point) Your company provides a news massaging app that includes a notification feature for displaying breaking news. The notifications have deep linking to the relevant online news pages. Recently, some users of the app complained about experiencing delays with the display of the news notifications, while at other times, the expected notifications were not displayed at all. The root cause of this defect was identified by the developers and fixed. In your role as a mobile tester, which functional tests would you undertake in order to validate that the fixed version of the app is correctly working?" << endl;

cout << "i.   Correct displaying of the notification when the app is in the background." << endl;
cout << "ii.  Running the application under low battery conditions." << endl;
cout << "iii. Testing the performance of the app whilst displaying the notification." << endl;
cout << "iv.  Performing of usability tests related to the fixed version of the app." << endl;
cout << "v.   Testing the deep linking to the correct news page of the app." << endl;

cout << "a) i – iv – v" << endl;
cout << "b) i – ii – iv" << endl;
cout << "c) i – ii – v" << endl;
cout << "d) ii – iii – iv" << endl;

cout << "Select ONE option." << endl;

cout << "C is correct: Statements i, ii and v are functional tests, as mentioned in the text. Statements iii and iv are non-functional tests. Additionally, their execution makes no sense in this context." << endl;


}
void processFL_MATv1p1Question17Incorrect(){
cout << "MAT-2.2.2 (K2) Question #17 (1 Point) Your company is developing a new version of a hybrid app for price comparison. This app consists of feature-rich functionalities in quick-access links. As a mobile tester, it is your task to verify the failure- free working of these quick-access links. Which of the following is the BEST approach to take?" << endl;

cout << "a) Verifying the correct behavior of force-touch functionality of an iOS app." << endl;
cout << "b) Assuring the presence of favorite bookmarks in Mobile Chrome on Android OS." << endl;
cout << "c) Verifying that all hardware keys of a mobile device work as expected." << endl;
cout << "d) Using a suitable tool for identifying broken links in the mobile web app." << endl;

cout << "Select ONE option." << endl;

cout << "A is correct: According to the syllabus, testing the force-touch functionality is an example that is in the context of testing quick-access links." << endl;


}
void processFL_MATv1p1Question18Incorrect(){
cout << "MAT-2.2.4 (K2)  Question #18 (1 Point) You are testing a native iOS app that uses various sensors. Which of the following test types do NOT apply?" << endl;

cout << "a) Performance testing." << endl;
cout << "b) Testing for utilization of device features." << endl;
cout << "c) Cross-browser testing." << endl;
cout << "d) Device compatibility testing." << endl;

cout << "Select ONE option." << endl;

cout << "C is correct: As a native app does not use various browsers." << endl;


}
void processFL_MATv1p1Question19Incorrect(){
cout << "MAT-2.2.5 (K1) Question #19 (1 Point) Which of the following is a typical test type for testing interoperability with OS versions?" << endl;

cout << "a) Testing for security issues." << endl;
cout << "b) Testing for performance problems." << endl;
cout << "c) Testing for accessibility standards." << endl;
cout << "d) Testing for backward compatibility." << endl;

cout << "Select ONE option." << endl;

cout << "D is correct: Testing for backward compatibility focuses on verifying correct interoperability with different OS versions, as stated as example in the syllabus." << endl;


}
void processFL_MATv1p1Question20Incorrect(){
cout << "MAT-2.2.6 (K1) Question #20 (1 Point) Which of the following is a PRIMARY test goal when performing tests for co-existence of an system under test (SUT) with other apps on the device?" << endl;

cout << "a)Verifying that the SUT does not harm any user data." << endl;
cout << "b)Identifying existing security issues on the device." << endl;
cout << "c)Assessing usability problems in the SUT." << endl;
cout << "d)Testing if the SUT meets accessibility standards." << endl;

cout << "Select ONE option." << endl;

cout << "A is correct: This is an accurate test goal for testing the SUT for co-existence with other installed applications on the device." << endl;


}
void processFL_MATv1p1Question21Incorrect(){
cout << "MAT-2.3.1 (K2) Question #21 (1 Point) You are developing a test approach for performing connectivity tests on different types of mobile devices. Which of the following should NOT be in scope for this approach?" << endl;

cout << "a)Switching from GSM to flight mode and back to GSM." << endl;
cout << "b)Initiating a payment transaction via NFC." << endl;
cout << "c)Using Bluetooth for pairing with a wearable device." << endl;
cout << "d)Connecting a USB cable with a power supply." << endl;

cout << "Select ONE option." << endl;

cout << "D is correct: To plug in a power supply via USB does not focus on connectivity, but it can be used as a suitable scenario for interrupt testing." << endl;



}
void processFL_MATv1p1Question22Incorrect(){
cout << "MAT-3.1.1 (K3) Question #22 (1 Point) You are assigned the task of installation testing for an Android application. Which of the following installation tests should NOT be used?" << endl;

cout << "a)Executing App-Installer.exe." << endl;
cout << "b)Install by connecting the device to a PC and running commands for installation." << endl;
cout << "c)Installation from Google Play Beta Program." << endl;
cout << "d)Sideloading by providing the installation package on an SD-Card and executing from within the device file system." << endl;

cout << "Select ONE option." << endl;

cout << "A is correct: Exe is an executable file format for Windows only. It won’t work on Android." << endl;



}
void processFL_MATv1p1Question23Incorrect(){
cout << "MAT-3.1.3 (K2) Question #23 (1 Point) Which TWO of the following are potential security issues for mobile apps?" << endl;
cout << "a)Code injection via input fields." << endl;
cout << "b)Data being transferred unencrypted." << endl;
cout << "c)App not responding after interruption." << endl;
cout << "d)Rendering issues after changing device orientation." << endl;
cout << "e)Overlap of screen elements on small screens." << endl;

cout << "Select TWO options." << endl;

cout << "A and B are correct" << endl;
cout << "a) Is correct: Code injection is a security related concern" << endl;
cout << "b) Is correct: Data encryption at transfer is a security related concern" << endl;


}
void processFL_MATv1p1Question24Incorrect(){
cout << "MAT-3.1.4 (K1) Question #24 (1 Point) Which of the following are you likely to use to carry out a performance test of the time behavior of an app?" << endl;
cout << "a)An instrumented build to get exact chronometric numbers." << endl;
cout << "b)A load generator to observe the server behavior under heavy load." << endl;
cout << "c)Running the app on an emulator/simulator." << endl;
cout << "d)A device and a stopwatch to check the performance of the device." << endl;

cout << "Select ONE option." << endl;

cout << "A is correct: Only an instrumented build can provide exact chronometric numbers on how long a processing step within the app actually lasted. A stop watch is not sufficient in the range of milliseconds. Also, it does not allow differentiation between the time taken by the app, by the backend and time for network communication." << endl;



}
void processFL_MATv1p1Question25Incorrect(){
cout << "MAT-3.1.5 (K3) Question #25 (1 Point) You are tasked with carrying out a usability test for a mobile app. Which of the following is a step that you will NOT perform?" << endl;

cout << "a)Ask the manager to order a usability lab session." << endl;
cout << "b)Test the app to check compliance with platforms user interface guidelines" << endl;
cout << "c)Activate the voice-over feature of the device." << endl;
cout << "d)Learn about the look and feel expectations of the platform." << endl;

cout << "Select ONE option." << endl;

cout << "C is correct: Because this step is NOT to be performed." << endl;


}
void processFL_MATv1p1Question26Incorrect(){
cout << "MAT-3.1.6 (K1) Question #26 (1 Point) What does the mnemonic \"CRUD\" stand for in the context of data validation testing?" << endl;

cout << "a)Copy, Rename, Update, Delete." << endl;
cout << "b)Create, Read, Undo, Delete." << endl;
cout << "c)Create, Read, Update, Delete." << endl;
cout << "d)Create, Read, Undo, Deploy." << endl;

cout << "Select ONE option." << endl;

cout << "C is correct: As per syllabus and glossary" << endl;


}
void processFL_MATv1p1Question27Incorrect(){

cout << "MAT-3.1.7 (K2) Question #27 (1 Point) You are conducting internationalization testing. While you execute the tests you partly see pseudo - strings and partly English strings. Which of the following is the most likely cause?" << endl;

cout << "a)Missing translations." << endl;
cout << "b)Hard-coded English strings." << endl;
cout << "c)Wrong language settings of the device." << endl;
cout << "d)Something went wrong during build." << endl;

cout << "Select ONE option." << endl;

cout << "B is correct: When doing internationalization testing, we want to see that all strings are sourced from a resource. Thus, if the app does not show the pseudo-strings and instead shows real language, it is not sourced from the pseudo-string resource." << endl;

}
void processFL_MATv1p1Question28Incorrect(){
cout << "MAT-3.1.8 (K2) Question #28 (1 Point) Why should accessibility testing be conducted?" << endl;
cout << "a)To determine if the app is usable by users with differing needs ." << endl;
cout << "b)Because it is required by the W3C and the platform providers." << endl;
cout << "c)To completely test the application." << endl;
cout << "d)As generic test cases exist that must be executed for every application." << endl;

cout << "Select ONE option." << endl;

cout << "A is correct: The syllabus states that accessibility testing “is performed to determine the ease by which users with differing needs can use a component or system”" << endl;



}
void processFL_MATv1p1Question29Incorrect(){
cout << "MAT-3.2.2 (K2) Question #29 (1 Point) You are a tester in a team developing a mobile app. Your team has finished the current version of the app and has released it to the application store. Which of the following is your next activity?" << endl;

cout << "a)Archiving testware." << endl;
cout << "b)Post-release testing." << endl;
cout << "c)Application store approval testing." << endl;
cout << "d)Test closure." << endl;

cout << "Select ONE option." << endl;

cout << "B is correct: When the app is available in the application store it must be tested that it can be installed from there, and works as in the build that was tested." << endl;



}
void processFL_MATv1p1Question30Incorrect(){

cout << "MAT-3.3.1 (K1) Question #30 (1 Point) You are a new member in a team which is testing mobile applications. Your team lead asks you to test the app’s inputs for a duration of 1 hour, functions for 1 hour, interrupts for 1 hour, and so on. Which of the following is the team lead applying?" << endl;

cout << "a) Risk-Based Test Management" << endl;
cout << "b) Delegating the responsibility of his job to you." << endl;
cout << "c) Managing Performance Testing." << endl;
cout << "d) Session-Based Test Management." << endl;

cout << "Select ONE option." << endl;

cout << "D is correct: The team lead uses Session-Based Test Management, as testing is divided into 1h sessions, each with a defined focus." << endl;

}
void processFL_MATv1p1Question31Incorrect(){
cout << "MAT-3.3.2 (K2) Question #31 (1 Point) Which of the following is an effective method for field testing?" << endl;

cout << "a)Using tours as a kind of exploratory test technique." << endl;
cout << "b)Using an in-house device lab for executing tests on different smartphones." << endl;
cout << "c)Using a cloud-based approach." << endl;
cout << "d)Using a test tool for executing automated tests on mobile browsers." << endl;


cout << "Select ONE option." << endl;

cout << "C is correct: Tours are used to explore an application and to understand how it works. In this context it is very effective for field testing." << endl;



}
void processFL_MATv1p1Question32Incorrect(){
cout << "MAT-3.4.2 (K2) Question #32 (1 Point) Why is it common for mobile app projects to flip the Test Pyramid?" << endl;
cout << "a) Unit tests are much more complicated on mobile apps. As a result, it is convenient to only have a few unit tests." << endl;
cout << "b) Missing tool support for unit and integration testing for mobile apps." << endl;
cout << "c) Mobile apps are always monolithic. As a result, everything can be tested at system level and there is no need to test at lower levels." << endl;
cout << "d) Mobile apps require a lot of manual testing, like usability or field testing." << endl;

cout << "Select ONE option." << endl;

cout << "D is correct: Market and device fragmentation, as well as user expectations with regard to usability, and the variability of usage scenarios give test conditions which can only be tested manually." << endl;


}
void processFL_MATv1p1Question33Incorrect(){
cout << "MAT-4.1.1 K1 Question #33 (1 Point) Which of the following statements is correct for the development environments used for mobile application development?" << endl;
cout << "a) iOS developers use Visual Studio IDE as their development environment." << endl;
cout << "b) Android developers use the Universal Studio IDE while iOS developers use Xcode as their development environment." << endl;
cout << "c) Android developers use the Xcode IDE as their development environment ." << endl;
cout << "d) iOS developers use the Xcode IDE as their development environment." << endl;
cout << "Select ONE option." << endl;

cout << "D is correct: Referring to the examples given at the syllabus, for Android app development Android Studio may be used and for iOS app development Xcode may be used." << endl;


}
void processFL_MATv1p1Question34Incorrect(){
cout << "MAT-4.2.1  (K1) Question #34 (1 Point) Which of the following is NOT a task that can be typically performed by using a software development kit (SDK) for mobile applications?" << endl;

cout << "a) Taking screenshots." << endl;
cout << "b) Designing test cases." << endl;
cout << "c) Pushing random events to the application." << endl;
cout << "d) Creating virtual devices." << endl;

cout << "Select ONE option." << endl;

cout << "B is correct: According to chapter 4.2 the task of designing test cases is not mentioned in the examples that can be supported by tools as part of SDKs." << endl;


}
void processFL_MATv1p1Question35Incorrect(){
cout << "MAT-4.3.1 (K2) Question #35 (1 Point) You are assigned as a tester for a mobile app with a client-server architecture. In order to better utilize available equipment, the company decides to use the employee’s PC without the application being connected to a real server, in order to test the basic features in early test stages. Which of the following architectures would you recommend that the developer of the Android app should use in the early test stages of the development to verify the functional suitability of the basic features?" << endl;

cout << "a) Have the server emulator installed on the developer’s PC and the simulator of the mobile application installed on a real device." << endl;
cout << "b) Have the simulator of the mobile application installed on one of the Android Virtual Device’s (AVD’s) device emulators and the server emulator installed on the developer’s PC." << endl;
cout << "c) Have the server simulator installed on the developer’s PC and the mobile application installed on one of the AVD’s device emulators." << endl;
cout << "d) Have the server simulator and the emulated mobile application installed directly on the developer’s PC." << endl;
cout << "Select ONE option." << endl;

cout << "C is correct: It is possible to have a simulator representing the server side, and the application installed on the AVD emulator to better utilize the earlier test environment (all on one PC). In addition, having the tester advising the developer on an environment is good, as is simulating the server side for basic functionality testing as an alternative if the server side has problems or if requested to be utilized by the testing team on early test stages" << endl;


}
void processFL_MATv1p1Question36Incorrect(){
cout << "MAT-4.4.1 (K2) Question #36 (1 Point) You are the test manager in a digital banking division at a Fintech company that is upgradi ng the Android-based mobile banking application of a mid-level financial institution. The upgrade incorporates an innovative security mechanism that uses fingerprint and face recognition features for enhanced app security. Which of the following represents the BEST approach to use in order to setup your test lab for this enhancement?" << endl;

cout << "a) Setup a remote test lab in order to test the new innovative mobile banking application on as many types of devices as possible." << endl;
cout << "b) Setup an on-premise lab in order to effectively test the new unique device-related features of the innovative mobile banking application." << endl;
cout << "c) Setup a remote test lab in order to test the mobile banking application on many types of different devices and an on-premise lab to cover the maximum of possible devices." << endl;
cout << "d) Setup a remote test lab in order to test the new innovative mobile banking application on many types of Android devices from different device manufacturers and save money for the company." << endl;
cout << "Select ONE option." << endl;

cout << "B is correct: The on-premise lab main advantage is to enable specific tests for sensors, battery, and unique-device related feature or tech part, especially if it’s done by the device manufacturer – in that case Samsung. The question is targeted to check if the examinee knows how to distinguish between the labs by leveraging the lab’s advantages." << endl;


}
void processFL_MATv1p1Question37Incorrect(){
cout << "MAT-5.1.1 K2 Question #37 (1 Point) Which of the following statement does NOT correctly distinguish between the common mobile testing automation approaches?" << endl;

cout << "a) Agent-based testing approach is best used for executing mobile web applications, whereas device-based testing are best used for all types of mobile applications." << endl;
cout << "b) Agent-based testing approach utilizes a string sent by the browser to spoof a particular browser, whereas device-based testing approach has to be executed on a particular mobile gadget." << endl;
cout << "c) Native apps are best tested using the general web application automation tools, whereas mobile apps need specific tools." << endl;
cout << "d) The mode of operation for the agent-based testing approach is to mimic the browser characteristics, whereas that of the device-based testing approach is to operate on the actual browser." << endl;
cout << "Select ONE option." << endl;

cout << "C is correct: It is the mobile apps that are tested using general web application tools, whereas native apps are best tested using specific tools." << endl;


}
void processFL_MATv1p1Question38Incorrect(){
cout << "MAT-5.2.1 (K2) Question #38 (1 Point) Which of the following statements is TRUE regarding the scripting methods used in automation of mobile testing?" << endl;
cout << "a) Scripting using object identification is faster than using visual based (OCR/Text recognition), and therefore reduces the overall time needed for test execution." << endl;
cout << "b) Object based scripting is the more reliable method of authoring test automation code because it allows the test framework to match the right mobile application object agnostically to the device under test." << endl;
cout << "c) The scripting method using object identification increases the ongoing maintenance effort when there are frequent software code changes to the app that affect the baseline images ." << endl;
cout << "d) Relying on OCR/Text recognition and object learning does not pose a risk to the test automation reliability or robustness." << endl;
cout << "Select ONE option." << endl;

cout << "B is correct: Object based scripting is the most reliable method of authoring test automation code." << endl;


}
void processFL_MATv1p1Question39Incorrect(){
cout << "MAT-5.3.1 (K1)  Question #39 (1 Point) Which of the following is NOT a major consideration during the evaluation of mobile automation test tools?" << endl;
cout << "a) The test automation skill set of the testers who will be using the tool." << endl;
cout << "b) Test automation requirements and complexities such as the use of new features such as FaceID, Fingerprint, Chatbots by the app." << endl;
cout << "c) It is important to consider automation requirements and complexities." << endl;
cout << "d) Ability of the test framework to operate independently of other existing tools used in the organization." << endl;
cout << "Select ONE option." << endl;

cout << "D is correct: It is not a major consideration to make consideration for independent operation." << endl;



}
void processFL_MATv1p1Question40Incorrect(){
cout << "MAT-5.4.1 (K2)  Question #40 (1 Point) Which of the following statements LEAST supports the use of a remote test lab?" << endl;
cout << "a) Testing during later stages of the app development and which need to run on the full device lab, is best done on a remote device lab." << endl;
cout << "b) A remote device lab will most likely cover a small set of the latest device/OS configurations to allow developers and testers to quickly validate early design st ages of the app." << endl;
cout << "c) Remote device labs will ensure sufficient variety of device and OS to enable teams to get a larger variety of test gadgets for their testing." << endl;
cout << "d) Remote labs are better when executing at large-scale because they are typically designed to ensure that stability concerns are in most cases removed from the overall process." << endl;
cout << "Select ONE option." << endl;

cout << "B is correct: It is not a major consideration to make consideration for independent operation." << endl;



}


int  processFL_MATv1p1Exam(){
    int pointsScoredForQuestion =0;
    int scoreTotal = 0;
    int scoreByQuestion[40];
    for (int i =0; i< 40; i++)
      scoreByQuestion[i] = 0;
      
    pointsScoredForQuestion = processFL_MATv1p1Question1();
    scoreByQuestion[0] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;
    
    pointsScoredForQuestion = processFL_MATv1p1Question2();
    scoreByQuestion[1] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question3();
    scoreByQuestion[2] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question4();
    scoreByQuestion[3] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question5();
    scoreByQuestion[4] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processFL_MATv1p1Question6();
    scoreByQuestion[5] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question7();
    scoreByQuestion[6] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question8();
    scoreByQuestion[7] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question9();
    scoreByQuestion[8] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question10();
    scoreByQuestion[9] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;





    pointsScoredForQuestion = processFL_MATv1p1Question11();
    scoreByQuestion[10] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question12();
    scoreByQuestion[11] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question13();
    scoreByQuestion[12] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question14();
    scoreByQuestion[13] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question15();
    scoreByQuestion[14] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processFL_MATv1p1Question16();
    scoreByQuestion[15] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question17();
    scoreByQuestion[16] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question18();
    scoreByQuestion[17] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question19();
    scoreByQuestion[18] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question20();
    scoreByQuestion[19] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;





    pointsScoredForQuestion = processFL_MATv1p1Question21();
    scoreByQuestion[20] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question22();
    scoreByQuestion[21] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question23();
    scoreByQuestion[22] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question24();
    scoreByQuestion[23] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question25();
    scoreByQuestion[24] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processFL_MATv1p1Question26();
    scoreByQuestion[25] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question27();
    scoreByQuestion[26] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question28();
    scoreByQuestion[27] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question29();
    scoreByQuestion[28] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question30();
    scoreByQuestion[29] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;





    pointsScoredForQuestion = processFL_MATv1p1Question31();
    scoreByQuestion[30] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question32();
    scoreByQuestion[31] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question33();
    scoreByQuestion[32] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question34();
    scoreByQuestion[33] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question35();
    scoreByQuestion[34] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processFL_MATv1p1Question36();
    scoreByQuestion[35] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question37();
    scoreByQuestion[36] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question38();
    scoreByQuestion[37] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question39();
    scoreByQuestion[38] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processFL_MATv1p1Question40();
    scoreByQuestion[39] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;




    cout <<"All Questions Complete, you scored " << scoreTotal  << " out of 40. Details of incorrectly answered questions are below" << endl;


    if (scoreByQuestion[0] == 0)  processFL_MATv1p1Question1Incorrect();
    if (scoreByQuestion[1] == 0)  processFL_MATv1p1Question2Incorrect();
    if (scoreByQuestion[2] == 0)  processFL_MATv1p1Question3Incorrect();
    if (scoreByQuestion[3] == 0)  processFL_MATv1p1Question4Incorrect();
    if (scoreByQuestion[4] == 0)  processFL_MATv1p1Question5Incorrect();

    if (scoreByQuestion[5] == 0)  processFL_MATv1p1Question6Incorrect();
    if (scoreByQuestion[6] == 0)  processFL_MATv1p1Question7Incorrect();
    if (scoreByQuestion[7] == 0)  processFL_MATv1p1Question8Incorrect();
    if (scoreByQuestion[8] == 0)  processFL_MATv1p1Question9Incorrect();
    if (scoreByQuestion[9] == 0)  processFL_MATv1p1Question10Incorrect();


    if (scoreByQuestion[10] == 0)  processFL_MATv1p1Question11Incorrect();
    if (scoreByQuestion[11] == 0)  processFL_MATv1p1Question12Incorrect();
    if (scoreByQuestion[12] == 0)  processFL_MATv1p1Question13Incorrect();
    if (scoreByQuestion[13] == 0)  processFL_MATv1p1Question14Incorrect();
    if (scoreByQuestion[14] == 0)  processFL_MATv1p1Question15Incorrect();

    if (scoreByQuestion[15] == 0)  processFL_MATv1p1Question16Incorrect();
    if (scoreByQuestion[16] == 0)  processFL_MATv1p1Question17Incorrect();
    if (scoreByQuestion[17] == 0)  processFL_MATv1p1Question18Incorrect();
    if (scoreByQuestion[18] == 0)  processFL_MATv1p1Question19Incorrect();
    if (scoreByQuestion[19] == 0)  processFL_MATv1p1Question20Incorrect();


    if (scoreByQuestion[20] == 0)  processFL_MATv1p1Question21Incorrect();
    if (scoreByQuestion[21] == 0)  processFL_MATv1p1Question22Incorrect();
    if (scoreByQuestion[22] == 0)  processFL_MATv1p1Question23Incorrect();
    if (scoreByQuestion[23] == 0)  processFL_MATv1p1Question24Incorrect();
    if (scoreByQuestion[24] == 0)  processFL_MATv1p1Question25Incorrect();

    if (scoreByQuestion[25] == 0)  processFL_MATv1p1Question26Incorrect();
    if (scoreByQuestion[26] == 0)  processFL_MATv1p1Question27Incorrect();
    if (scoreByQuestion[27] == 0)  processFL_MATv1p1Question28Incorrect();
    if (scoreByQuestion[28] == 0)  processFL_MATv1p1Question29Incorrect();
    if (scoreByQuestion[29] == 0)  processFL_MATv1p1Question30Incorrect();



    if (scoreByQuestion[30] == 0)  processFL_MATv1p1Question31Incorrect();
    if (scoreByQuestion[31] == 0)  processFL_MATv1p1Question32Incorrect();
    if (scoreByQuestion[32] == 0)  processFL_MATv1p1Question33Incorrect();
    if (scoreByQuestion[33] == 0)  processFL_MATv1p1Question34Incorrect();
    if (scoreByQuestion[34] == 0)  processFL_MATv1p1Question35Incorrect();

    if (scoreByQuestion[35] == 0)  processFL_MATv1p1Question36Incorrect();
    if (scoreByQuestion[36] == 0)  processFL_MATv1p1Question37Incorrect();
    if (scoreByQuestion[37] == 0)  processFL_MATv1p1Question38Incorrect();
    if (scoreByQuestion[38] == 0)  processFL_MATv1p1Question39Incorrect();
    if (scoreByQuestion[39] == 0)  processFL_MATv1p1Question40Incorrect();

    return scoreTotal;

}






