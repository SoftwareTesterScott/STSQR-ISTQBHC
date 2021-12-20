
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



void printAL_SECv2016Question1(){
  cout << "Question #1 (1 pt) Which of the following is a purpose of a security audit?" << endl;
  cout << endl;

  cout << "a.To prevent users from using simple passwords" << endl;
  cout << "b.To reveal insufficient patch updates provided by the vendor" << endl;
  cout << "c.To halt unauthorized intruders from accessing the system" << endl;
  cout << "d.To require users to change their password after a predetermined set of days" << endl;
  cout << endl;

}
void printAL_SECv2016Question2(){
  cout << "" << endl;
  cout << "Question #2 (3 pts) You are responsible for ensuring that new vendors brought on externally for the project are fully compliant with government mandated guidelines as part of your risk assessment. On which stakeholders should you primarily focus to ensure these outside vendors continue to comply? " << endl;
  cout << endl;

  cout << "a.Customers, users, and vendors to ensure there is good communication between them" << endl;
  cout << "b.Public users and vendors who will follow the law as it applies to the source of information" << endl;
  cout << "c.Federal and local agencies that communicate guidelines to follow" << endl;
  cout << "d.Both internal and external sources that will use the information for further analyzing the risk" << endl;
  cout << endl;

}
void printAL_SECv2016Question3(){
  cout << "" << endl;
  cout << "Question #3 (1 pt) Which of the following is a consequence of a policy that minimizes access to a system or device to acceptable levels? " << endl;
  cout << endl;

  cout << "a.More devices are added to mitigate the impact" << endl;
  cout << "b.Proper controls of self-provisioning devices such as routers are prohibited" << endl;
  cout << "c.Devices that do not conform are removed from the wireless network" << endl;
  cout << "d.Access to the VPN is severely restricted" << endl;
  cout << endl;

}
void printAL_SECv2016Question4(){
  cout << "" << endl;
  cout << "Question #4 (3 pts) Your role as the Security Administrator is to help your organization understand the effectiveness of security policies and procedures across the enterprise. You will report your effectiveness findings to Senior Management after your analysis has been completed. Which of the following is the optimum strategy to accomplish this? " << endl;
  cout << endl;

  cout << "a.Implement a static analysis evaluation independently for both policies and procedures" << endl;
  cout << "b.Analyze the results from a security test to validate effectiveness" << endl;
  cout << "c.Evaluate security test results that focus on current threats and attacks" << endl;
  cout << "d.Evaluate the static test results for new and emerging software threats" << endl;
  cout << endl;

}
void printAL_SECv2016Question5(){
  cout << "" << endl;
  cout << "Question #5 (1 pt) If an organization experiences a security breach and legal action results, how does it help the organization to have done security testing?" << endl;
  cout << endl;

  cout << "a. It can show that the organization has done due diligence to try to prevent such an incident" << endl;
  cout << "b. The documentation from the security testing can be used to track down the perpetrator" << endl;
  cout << "c. Since any important information would have been backed up before security testing, this backup can be used to restore any compromised information" << endl;
  cout << "d. By tracing through the documented tests, the security testing team can discover how the breach was possible" << endl;
  cout << endl;

}
void printAL_SECv2016Question6(){
  cout << "" << endl;
  cout << "Question #6 (1 pt) Which of the following is a correct statement? " << endl;
  cout << endl;

  cout << "a.Information assurance is a part of security testing" << endl;
  cout << "b.Information assurance and security testing are two terms for the same thing" << endl;
  cout << "c.Security testing is a part of information assurance" << endl;
  cout << "d.The two terms refer to different areas of security" << endl;
  cout << endl;

}
void printAL_SECv2016Question7(){
  cout << "" << endl;
  cout << "Question #7 (2 pts) You are working at a bank as part of the security testing team. During a recent security audit it was noted that the user’s passwords were not strong enough. Since that time, a new set of requirements has been issued to ensure password strength. Given this information, what would be a reasonable set of security objectives for general password rule testing? " << endl;
  cout << endl;
  cout << "1. Verify that passwords meet the requirements for length"<< endl;
  cout << "2. Verify that passwords meet the requirements for usage of characters, numbers, letters and capitalization"<< endl;
  cout << "3. Verify that passwords can be retried three times"<< endl;
  cout << "4. Verify that passwords cannot be re-used within a one year timeframe"<< endl;
  cout << "5. Verify that passwords must be reset every three months"<< endl;
  cout << "6. Verify that the user can request to have their password emailed to them"<< endl;
  cout << "7. Verify that the system administrator can reset a locked password"<< endl;
  cout << endl;

  cout << "a.1, 2, 3, 4" << endl;
  cout << "b.1, 2, 4, 5" << endl;
  cout << "c.3, 4, 6, 7" << endl;
  cout << "d.4, 5, 6, 7" << endl;
  cout << endl;

}
void printAL_SECv2016Question8(){
  cout << "" << endl;
  cout << "Question #8 (2 pts) Your company recently made headlines after a security breach resulted in confidential customer information being stolen. Management has reacted with an edict that the scope of the security testing objectives needs to be expanded immediately. While you agree that something needs to be done, you are worried that this approach may be too reactive and may not result in the testing that is needed. According to the syllabus, what is a reasonable concern if these initiatives are implemented?  " << endl;
  cout << endl;

  cout << "a.The testing will still miss issues because it will not be well-focused" << endl;
  cout << "b.The testing will be outsourced so that it can be done more efficiently" << endl;
  cout << "c.The testing scope may be too large and there may not be adequate resources to complete it" << endl;
  cout << "d.The testing objectives are not clearly defined and may miss the same issues as previously escaped to production" << endl;
  cout << endl;

}
void printAL_SECv2016Question9(){
  cout << "" << endl;
  cout << "  Question #9 (3 pts) You have just accepted a job to create a security testing team for a company than handles sensitive medical information that is shared between doctors and hospitals. You have noticed that the security around this information is not sufficient to protect it from hackers or even accidental exposure. The person who had your job previously brought in a number of consultants to do testing, but the findings were not documented and no changes were implemented. In fact, you don’t even know what the coverage was from the testing. You have presented your findings to the executive management team. " << endl;
  cout << endl;
  cout << "While they have agreed in principle that they need security testing, they have not allocated the necessary budget or time to the project. It appears that while they think security is a good idea, they really have no understanding of what should be done or how it should be done. What should be your first step toward getting the executives aligned with the work that needs to be done?" << endl;
  cout << endl;

  cout << "a. Create a detailed list of all the possible security holes and present these to the executives" << endl;
  cout << "b. Provide a summary of the testing approach that you propose and give examples of how the testing will be conducted" << endl;
  cout << "c. Bring in the legal team to explain what a security breach could cost the organization" << endl;
  cout << "d. Create a security policy and security testing policy and demonstrate how that aligns with your proposed testing approach" << endl;
  cout << endl;

}
void printAL_SECv2016Question10(){
  cout << "" << endl;
  cout << "Question #10 (2 pts) You have just come from a meeting where there was much discussion regarding the security approach of the organization. One of the points of emphasis was the importance of testing to ensure that data is protected from fraudulent access, particularly credit card information. You have been asked to prepare a set of testing objectives that will help address this risk area. One of your tasks is to ensure that you are covering all the concerns of the stakeholders. Which stakeholder group is most likely to see the benefits from your efforts?" << endl;
  cout << endl;

  cout << "a.Executive management" << endl;
  cout << "b.Compliancy officers" << endl;
  cout << "c.Business customers" << endl;
  cout << "d.Regulatory officers" << endl;
  cout << endl;

}
void printAL_SECv2016Question11(){
  cout << "" << endl;
  cout << "Question #11 (2 pts) As a Security Administrator you are responsible for all aspects of the security print, including testing. For this particular print you are to use conceptual tests as a basis for manual tests and execute these from an external vendor’s perspective. Which security testing print does this most parallel? " << endl;
  cout << endl;

  cout << "a.Security test creation of conditions and objectives" << endl;
  cout << "b.Security test implementation" << endl;
  cout << "c.Overall evaluating and reporting of security testing" << endl;
  cout << "d.Security test analysis and design" << endl;
  cout << endl;

}
void printAL_SECv2016Question12(){
  cout << "" << endl;
  cout << " Question #12 (3 pts) You have been developing a security test plan for a system that will store medical information for patients and will transfer that data to specialist doctors. You have covered the following areas in your plan: " << endl;
  cout << endl;
  cout << "* Scope (what’s in scope and out of scope)"  << endl;
  cout << "* Roles and assignments"  << endl;
  cout << "* Responsibilities (vendors vs. internal)"  << endl;
  cout << "* High level schedule"  << endl;
  cout << "* Environment requirements and setup"  << endl;
  cout << "* List of necessary authorizations and approvals"  << endl;
  cout << endl;
  cout << "What information do you still need to supply in this test plan to meet the minimum requirements as noted in the syllabus?" << endl;
  cout << endl;

  cout << "a. A list of the necessary credentials and training for the personnel who will be conducting the testing" << endl;
  cout << "b. A schedule showing the time that will be required to design, run and evaluate the security tests" << endl;
  cout << "c. A copy of the regulatory standards that must be met by this system " << endl;
  cout << "d. A list of the individuals who will be doing the testing and their contact information in the event of a security breach" << endl;
  cout << endl;
 }
void printAL_SECv2016Question13(){
  cout << "" << endl;
  cout << "Question #13 (2 pts) Which of the following test cases would best test a system’s security procedure? " << endl;
  cout << endl;

  cout << "a. Three unsuccessful login attempts will generate a lock-out message. Contact your manager or the System Administrator so they can give you a temporary password over the phone. You must then change the temporary password upon logging in. You log out then log back in using your newly created password." << endl;
  cout << "b. You receive a lock-out message after several attempts to log in. You call IT support to obtain a new password. You log in with the temporary password, log back out, then log in again and enter a new password." << endl;
  cout << "c. After several attempts you are locked out of the system. You use a password that worked previously. However, it no longer works. You attempt to create a new password but you are now locked out. A complete reboot of the machine is the next step to take you to the prompt to re-enter the password." << endl;
  cout << "d. After the first attempt to use an invalid password you immediately pull up a list of passwords on your notepad on your PC to ensure you are using the correct one. You try another password from the list and it works." << endl;
  cout << endl;

 
}
void printAL_SECv2016Question14(){
  cout << "" << endl;
  cout << "  Question #14 (1 pt) Which of the following are main characteristics of an effective security test environment? " << endl;
  cout << endl;

  cout << "a.Closely tied to production systems to enhance security at all points" << endl;
  cout << "b.Isolates different old versions of the operating systems for use in the environment" << endl;
  cout << "c.Mimics the production environment in terms of access rights" << endl;
  cout << "d.Includes all production environment plug-ins as well as other plug-ins not in the production environment in order to ensure the most comprehensive setup" << endl;
  cout << endl;

}

void printAL_SECv2016Question15(){
  cout << "" << endl;
  cout << "Question #15 (1 pt) What is a significant concern when seeking approval for the security testing tools? " << endl;
  cout << endl;

  cout << "a. Some countries prohibit the use of certain security testing tools" << endl;
  cout << "b. Ensure the approval print for security testing tools can be bypassed on an exception basis in cases where a malicious event is in progress" << endl;
  cout << "c. The risks of the tool are rarely known before it is procured and are better discovered when the tools is in use" << endl;
  cout << "d. Because security testing tool risks are usually known, there is no need for a mitigating strategy" << endl;
  cout << endl;

}
void printAL_SECv2016Question16(){
  cout << "" << endl;
  cout << "Question #16 (3 pts) You are reviewing a set of security test results run on a product that is going through final testing before release to production. This is an update of a version that is currently in production. The application just tested was your e-commerce site, and it has a defect that allows cross-site scripting. Which of the following is the proper set of steps you should take? " << endl;
  cout << endl;

  cout << "a. Report the problem to the developer, add it to the stakeholder report, and continue testing for other types of defects" << endl;
  cout << "b. Test if the problem exists in the current production version, document the defect in a secure system, notify the developer, continue testing for other XSS defects" << endl;
  cout << "c. Investigate the extent of the problem by conducting further tests on the planned release with particular concentration on other XSS isses, conduct static analysis on the code" << endl;
  cout << "d. Inform management, document the defect and include it in your weekly status report to stakeholders, continue testing for other security defects to determine the extent of the security issues" << endl;
  cout << endl;

}

void printAL_SECv2016Question17(){
  cout << "" << endl;
  cout << "  Question #17 (1 pt) At what point in the SDLC should there be checking to ensure that proper secure coding practices have been followed? " << endl;
  cout << endl;

  cout << "a.Component testing" << endl;
  cout << "b.Integration testing" << endl;
  cout << "c.System testing" << endl;
  cout << "d.Security acceptance testing" << endl;
  cout << endl;

}
void printAL_SECv2016Question18(){
  cout << "" << endl;
  cout << "  Question #18 (2 pts) You have been asked by the business analyst to help with defining the requirements for the security aspects of a system. This is a safety-critical system that stores medical information for patients and supplies this information to health professionals at hospitals, doctors’ offices and ambulances. At what point in the lifecycle should the security requirements be documented and at what level of detail?" << endl;
  cout << endl;

  cout << "a. They should not be documented formally because of the need to protect the security implementation within the code from outsiders" << endl;
  cout << "b. They should be documented in a detailed and unambiguous way in the requirements documents during the requirements phase" << endl;
  cout << "c. They should be documented during the design phase when the code approach is known rather than at the requirements phase when the approach is not known" << endl;
  cout << "d. They should be restricted to the functional access and availability requirements from the user’s perspective and should be documented during the requirements phase" << endl;
  cout << endl;

}
void printAL_SECv2016Question19(){
  cout << "" << endl;
  cout << "  Question #19 (3 pts) A deficiency has been discovered in production. If an unauthorized user copies a URL from a session of an authorized user, the unauthorized user can paste the URL into their session and continue to print with the authorized user’s rights. In the case that was reported, the unauthorized user was able to use the authorized user’s URL to change the system administration password. In order to close this gap, the developers will check the session ID and the user ID anytime a URL is used. " << endl;
  cout << endl;
  cout << "  What is a realistic concern for this fix?" << endl;
  cout << endl;

  

  cout << "a.It will not fix the problem and session hijacking will still be possible" << endl;
  cout << "b.It will fix the problem, but the usability may be adversely affected" << endl;
  cout << "c.It will fix the problem, but performance may be adversely affected" << endl;
  cout << "d.It will not fix the problem and will expose a new vulnerability with session IDs" << endl;
  cout << endl;

}
void printAL_SECv2016Question20(){
  cout << "" << endl;
  cout << " Question #20 (1 pt) During component level testing, why should the security tester review compiler warnings? " << endl;
  cout << endl;

  cout << "a. Because these indicate security problems that must be fixed" << endl;
  cout << "b. Because these indicate potential issues that should be investigated" << endl;
  cout << "c. Because these indicate coding issues that will cause functional defects" << endl;
  cout << "d. Because these indicate poor programming practices that will increase maintainability" << endl;
  cout << endl;

  }
void printAL_SECv2016Question21(){
  cout << "" << endl;
  cout << "Question #21 (2 pts) You have been testing a system that has 20 defined components. You have done extensive security testing on each of the components. The system is now ready to move into component integration security testing. How should you approach this testing? " << endl;
  cout << endl;

  cout << "a. Since component integration testing is concerned with the summation of the vulnerabilities of the individual components, conducting the same tests on the integrated components is the best approach." << endl;
  cout << "b. The main risk is now in the integration of the components themselves, so testing should cover each interface and verify that there are no vulnerabilities in the interfaces and the components should also be retested." << endl;
  cout << "c. It is likely that new vulnerabilities are present with the integrated components as well as with the larger system and infrastructure that is now testable, so testing should expand to include these new areas." << endl;
  cout << "d. Since the components are now integrated, the security risks will be reduced because the possible interactions are now limited so only the integration points should be tested and no component re-testing is needed." << endl;
  cout << endl;


}

void printAL_SECv2016Question22(){
  cout << "" << endl;
  cout << "Question #22 (3 pts) You are creating security test cases to check for SQL injection on an input field that allows up to 5 alphanumeric characters. You are planning to apply equivalence partitioning to reduce the number of test cases you will need to execute. Given this information, which of the following is the minimum set of inputs you would need to use to test this field?" << endl;
  cout << endl;

  cout << "a.bbbbb, 12345, ‘" << endl;
  cout << "b.%, ‘, @, ab123" << endl;
  cout << "c.‘, ab123" << endl;
  cout << "d.‘" << endl;
  cout << endl;



}
void printAL_SECv2016Question23(){
  cout << "" << endl;
  cout << "Question #23 (2 pts) You have been given the following requirement for security testing. A user will be allowed to request their password. If they make this request, they must answer two of their three security questions correctly. If they answer correctly, a link will be sent to their email. The link will take them to a page where they can reset their password. Once reset, they can login with the new password. The link must be disabled 1 hour after it is sent. The user is allowed only two password requests without a reset, after which they will have to call the help desk. For any other errors, the user ID is locked and must be unlocked by the help desk. " << endl;
  cout << endl;
  cout << "Which of the following is the minimum list of test conditions to adequately test the functional security covered by this requirement?" << endl;
  cout << endl;

  cout << "a. Invalid user; valid user; 2 correct answers; 2 incorrect answers; good email; bad email; reset with good password; reset with bad password; link good; link expired; two requests without reset; three requests without reset" << endl;
  cout << "b. Valid user; 2 correct answers; good email; reset with good password; link good; two requests without reset" << endl;
  cout << "c.Invalid user; 2 incorrect answers; bad email; reset with bad password; link expired; three requests without reset" << endl;
  cout << "d. Buffer overflow on each input field; SQL injection on each input field; XXS on the login page and reset password page, invalid user; valid user; 2 correct answers; 2 incorrect answers; good email; bad email; reset with good password; reset with bad password; link good; link expired; two requests without reset; three requests without reset" << endl;
  cout << endl;
  
}
void printAL_SECv2016Question24(){
  cout << "" << endl;
  cout << " Question #24 (2 pts) A user will be allowed to request their password. If they make this request, they must answer two of their three security questions correctly. If they answer correctly, a link will be sent to their email address. The link will take them to a page where they can reset their password. Once reset, they can login with the new password. The link must be disabled one hour after it is sent. The user is allowed only two password requests without a reset, after which he will have to call the helpdesk. For any other errors, the user ID is locked and must be unlocked by the help desk " << endl;
  cout << endl;
  cout << "Which of the following is a valid set of acceptance criteria for this requirement?" << endl;
  cout << endl;
  cout << "1. User can reset password if less than three requests have been made since last reset, and two security questions are answered correctly, and the link is used to reset and a valid password is entered at the reset prompt." << endl;
  cout << "2. More than two requests results in user ID locked." << endl;
  cout << "3. More than two requests without a reset results in user ID locked." << endl;
  cout << "4. More than two security questions missed results in error." << endl;
  cout << "5. More than two security questions missed, user ID is locked." << endl;
  cout << "6. If email error is received by the system, user ID is locked." << endl;
  cout << "7. If invalid password is entered on reset, the user is prompted with the proper rules." << endl;
  cout << "8. Reset password can be used to log into the system." << endl;
  cout <<  endl;

  cout << "a.1, 2, 4, 6, 7, 8 " << endl;
  cout << "b.1, 2, 3, 4, 5, 6, 7, 8" << endl;
  cout << "c.3, 5, 6, 7, 8" << endl;
  cout << "d.1, 3, 5, 6, 8" << endl;
  cout << endl;

}
void printAL_SECv2016Question25(){
  cout << "" << endl;
  cout << "Question #25 (2 pts) You are implementing procedures for evaluating system hardening in an effort to test the system’s security effectiveness. What procedure might you follow to ensure the hardening mechanisms put in place are working as expected? " << endl;
  cout << endl;

  cout << "a. Closely monitor various security performance reports and metrics to determine if the correct level of access and authentication is achieved" << endl;
  cout << "b. Frequently audit strong authentication to ensure a high level of intrusion protection is maintained at all times" << endl;
  cout << "c. Evaluate the hardware components that have been hardened and compare these to other hardened software components to ensure equilibrium is being achieved" << endl;
  cout << "d. Enlist a known hacker to conduct an independent assessment of the hardening effectiveness" << endl;
  cout << endl;

}
void printAL_SECv2016Question26(){
  cout << "" << endl;
  cout << "Question #26 (1 pt) What are key attributes of security authentication of a medium complexity IT system?" << endl;
  cout << endl;

  cout << "a. It verifies that the user has the correct profile and corresponding rights to access limited parts of the system" << endl;
  cout << "b. It is key in identifying the amount of system resources the user can utilize" << endl;
  cout << "c. It verifies that user entering the system is legitimate" << endl;
  cout << "d. It uses common credentials among users to gain entry into the system" << endl;
  cout << endl;

}
void printAL_SECv2016Question27(){
  cout << "" << endl;
  cout << "Question #27 (2 pts) Typical encryption mechanisms are vulnerable to threats which makes it important to understand their effectiveness at any given time. Identify which of the following you should implement to gain confidence in your encryption mechanisms? " << endl;
  cout << endl;

  cout << "a.Evaluate cryptographic keys to ensure they are at least 256 bits in size" << endl;
  cout << "b.Ensure you are applying random algorithms to generate random numbers where possible" << endl;
  cout << "c.Develop tests that ensure symmetric encryption is used in the right modes" << endl;
  cout << "d.Remove all WEP protocols to see how the system performs" << endl;
  cout << endl;


}
void printAL_SECv2016Question28(){
  cout << "" << endl;
  cout << "Question #28 (1 pt) Which is true of the relationship between a firewall and a network zone?" << endl;
  cout << endl;

  cout << "a. Both a network zone and firewall focus on the size of data that is being passed through" << endl;
  cout << "b. A network zone communicates through safe protocol options while a firewall ensures those protocols are safe" << endl;
  cout << "c. A sub-network can be considered a network zone and a firewall can be traffic monitoring software" << endl;
  cout << "d. A network zone blocks malicious traffic from an untrusted zone which the firewall does not filter" << endl;
  cout << endl;

}
void printAL_SECv2016Question29(){
  cout << "" << endl;
  cout << "Question #29 (2 pts) You are working at an organization which has an intrusion detection tool deployed. You are concerned that traffic is getting through that should be considered unauthorized. Which of the following should you apply to most effectively test the abilities of the intrusion detection tool and provide input to update the intrusion specifications?" << endl;
  cout << endl;

  cout << "a.Develop a series of scenarios based on past experience" << endl;
  cout << "b.Use tests that generate malicious traffic to add new intrusion specifications" << endl;
  cout << "c.Apply it to situations of known malicious traffic" << endl;
  cout << "d.Use it in conjunction with other IDS products when possible" << endl;
  cout << endl;

  
}
void printAL_SECv2016Question30(){
  cout << "" << endl;
  cout << "Question #30 (1 pt) Which of the following is a main disadvantage to malware scanning tools?" << endl;
  cout << endl;

  cout << "a.They only detect certain levels of malware" << endl;
  cout << "b.They can only detect malware that is known to the tool" << endl;
  cout << "c.They tend to be overly complex to run" << endl;
  cout << "d.They do not provide updating and reporting capabilities" << endl;
  cout << endl;

  
}
void printAL_SECv2016Question31(){
  cout << "" << endl;
  cout << "Question #31 (2 pts) You need to remove personal identification numbers from a legacy system in order to reduce risk during testing. Part of your data obfuscation plan includes verifying how effectively the data is masked. Which of the following is the most effective approach to use? " << endl;
  cout << endl;

  cout << "a. Manually verify in the database that the data targeted for obfuscation is no longer understandable for logical human interpretation" << endl;
  cout << "b. Design a brute force attack on the obfuscated data" << endl;
  cout << "c. Substitute the sensitive data with random data of varying string lengths" << endl;
  cout << "d. Enlist the development teams to generate a program to stress the database for vulnerabilities" << endl;
  cout << endl;


}
void printAL_SECv2016Question32(){
  cout << "" << endl;
  cout << "Question #32 (1 pt) What is often considered the weakest link in software security? " << endl;
  cout << endl;

  cout << "a. The lack of a consistent and comprehensive security training plan" << endl;
  cout << "b. The effort necessary to maintain document and procedure updates in order to keep up with continuing security threats" << endl;
  cout << "c. The behavior of humans" << endl;
  cout << "d. The constant advancement in malicious techniques" << endl;
  cout << endl;

}
void printAL_SECv2016Question33(){
  cout << "" << endl;
  cout << "Question #33 (1 pt) Which of the following is a potential security risk? " << endl;
  cout << endl;

  cout << "a.Publishing an accounting department’s organization chart on the company’s web site" << endl;
  cout << "b.Posting birthday wishes for a co-worker on Facebook" << endl;
  cout << "c.Posting the company phone directory on the company Intranet" << endl;
  cout << "d.Posting professional experience in a Linked In profile" << endl;
  cout << endl;

}
void printAL_SECv2016Question34(){
  cout << "" << endl;
  cout << "Question #34 (2 pts) You are responsible for security testing your company’s financial application. You have recently received email from a person who claims to have hacked into the system using Shodan and has discovered that you are running an out-of-date and vulnerable OS on one of your servers. You have checked and the hacker is correct. You have made sure the server has been updated. Your preliminary check has shown no trace of how the hacker got into your system. Should you be concerned? " << endl;
  cout << endl;

  cout << "a. No, this is a “white hat” hacker and means no harm to your company" << endl;
  cout << "b. No, you have fixed the vulnerability so the system is now safe" << endl;
  cout << "c. Yes, your security testing is not sufficient and you need to re-run your tests to see what was missed" << endl;
  cout << "d. Yes, since the hacker didn’t admit how he got in the system, he can still access it and may decide to exploit the vulnerability next time" << endl;
  cout << endl;

}
void printAL_SECv2016Question35(){
  cout << "" << endl;
  cout << "Question #35 (1 pt) Why is an attack from inside the organization particularly worrisome? " << endl;
  cout << endl;

  cout << "a. The attacker is likely driven by curiosity and will be unrelenting" << endl;
  cout << "b. The attacker is likely bored at work and will continue hacking the system for entertainment" << endl;
  cout << "c. The attacker is already inside the firewall and is an authorized system user" << endl;
  cout << "d. The attacker is likely to launch a DOS attack which will cripple the servers" << endl;
  cout << endl;


}
void printAL_SECv2016Question36(){
  cout << "" << endl;
  cout << "Question #36 (3 pts) You are working in an organization where system administration access to the servers is highly restricted. Only three long-term and trusted employees know the root passwords. Recently though, there have been several odd occurrences. An unknown program, called “IKnowYourBirthday” was found to be running and was emailing birthday greetings to staff members. The birth dates were correct and the greetings were all signed “From your favorite server”. This program was killed and no one could figure out where it came from. A second problem occurred when the corporate phone list was hacked and all the phone numbers were changed to 867-5309 (apparently taken from the song by the same name). The correct list was restored and again no one could figure out how it had been done, although the new file had been created by “root”. You’ve just received a phone call from the lead system administrator telling you that the root password has been changed. It has been determined that the password was set to the lead system administrator’s dog’s name. Further investigation has discovered that the problems started shortly after a series of virus–infected emails were detected. When the first one was found, safeguards were immediately put in place to stop any further spread of the virus, but now you are wondering if someone managed to get into the system via code that was introduced into the system by the virus. " << endl;
  cout << endl;
  cout << "What should you do now as your next step of investigation?" << endl;
  cout << endl;

  cout << "a. Look to see if the HR birthdate information was accessed from outside the system, and if so, trace the IP address" << endl;
  cout << "b. Verify if the lead system administrator’s dog’s name is posted somewhere in social media" << endl;
  cout << "c. Check the suspicious email that was sent and try to trace the IP address" << endl;
  cout << "d. Check the personnel files of the other two system administrators to see if there is an indication that they are unhappy" << endl;
  cout << endl;

}

void printAL_SECv2016Question37(){
  cout << "" << endl;
  cout << "Question #37 (2 pts) During testing of an upgrade, you have discovered that it is possible to create a man-in-the-middle attack that can change the amount charged to customers on your e-commerce web site. Your tester successfully changed the amount so that customers were all getting a 10% discount. What should you do first? " << endl;
  cout << endl;

  cout << "a. The tester should be discouraged from creating these types of attacks as they are not realistic in the production environment" << endl;
  cout << "b. Immediately inform management that the attack was created by the test team as part of testing, in case it is detected" << endl;
  cout << "c. Work with the developers to implement checks such as SSL-trip to ensure certificates are valid and not self-signed" << endl;
  cout << "d. Check production to see if the vulnerability is also in the production code" << endl;
  cout << endl;


}
void printAL_SECv2016Question38(){
  cout << "" << endl;
  cout << "  Question #38 (1 pt) Why is it important to reassess security risk expectations on a frequent basis? " << endl;
  cout << endl;

  cout << "a.Stakeholders have to be educated on all security risks at all times" << endl;
  cout << "b.Stakeholders will make business decisions based on associated security risk levels" << endl;
  cout << "c.Users must develop a manual-based risk mitigation plan" << endl;
  cout << "d.Both user and stakeholder expectations regarding security should be kept from changing" << endl;
  cout << endl;


}
void printAL_SECv2016Question39(){
  cout << "" << endl;
  cout << "Question #39 (1 pt) Which of the following is an important aspect of security test results? " << endl;
  cout << endl;

  cout << "a. They are published for users and stakeholders to access in order to help them better understand risk" << endl;
  cout << "b. They should be shared with developers across the enterprise in order to mitigate risk for future development projects" << endl;
  cout << "c. The fewer people that know the better" << endl;
  cout << "d. Results should always be classified by criticality" << endl;
  cout << endl;


}
void printAL_SECv2016Question40(){
  cout << "" << endl;
  cout << "  Question #40 (3 pts) You are finalizing your security test status report for a project that is ready for deployment into production. There is a high degree of risk for this project due to the nature of the system. As a result, you want to place particular emphasis on risk. Based on this, what is the best way to articulate risk on your report?" << endl;
  cout << endl;

  cout << "a.A descriptive risk assessment included in the summary" << endl;
  cout << "b.Overall risk included in the last section of the report" << endl;
  cout << "c.Risk impact described in the summary and later detailed in terms of specific vulnerabilities" << endl;
  cout << "d.Risk impact is not part of the summary of the report" << endl;
  cout << endl;

}

void printAL_SECv2016Question41(){
  cout << "" << endl;
  cout << "Question #41 (1 pt) In what way are dynamic security analysis tools different from general dynamic analysis tools? " << endl;
  cout << endl;

  cout << "a.The security tools probe the system rather than just the application under test" << endl;
  cout << "b.The security tools work the same in dynamic or static mode" << endl;
  cout << "c.The security tools are better suited to detect problems such as memory leaks" << endl;
  cout << "d.The security tools need to be tailored to the language in which the application is implemented" << endl;
  cout << endl;

}

void printAL_SECv2016Question42(){
  cout << "" << endl;
  cout << "Question #42 (3 pts) You have been given the job of testing the organization’s firewall. You have reviewed the implementation plan and steps, verified that the configuration has been set up as instructed by the firewall vendor and have conducted port scanning. Your organization is particularly concerned about denial of service (DOS) attacks, particularly since they had one when the old firewall was in place. " << endl;
  cout << endl;
  cout << "What type of testing should you conduct to help detect unexpected behavior that could be exploited by a DOS attack?" << endl;
  cout << endl;

  cout << "a. Create tests that will send malformed network packets or fuzzed data and see if they are detected and rejected by the firewall " << endl;
  cout << "b. Implement automated tests to stress test the servers to test the failover capabilities" << endl;
  cout << "c. Test the encryption and decryption algorithms to determine if they are fast enough to deal with the load of a DOS attack" << endl;
  cout << "d. Conduct software component hardening to ensure the attack surface is reduced as much as possible" << endl;
  cout << endl;

}

void printAL_SECv2016Question43(){
  cout << "" << endl;
  cout << "Question #43 (1 pt) If you have acquired a tool that is used under the GNU General Public License, which of the following is an important consideration for tool maintenance? " << endl;
  cout << endl;

  cout << "a.Reliability of the vendor and ability to provide support" << endl;
  cout << "b.Frequency and availability of updates from the vendor" << endl;
  cout << "c.Technical capabilities of your team to support and customize the tool for your environment" << endl;
  cout << "d.License cost and support contract cost" << endl;
  cout << endl;

  
}

void printAL_SECv2016Question44(){
  cout << "" << endl;
  cout << "Question #44 (1 pt) Which of the following is a benefit of conforming to security testing standards? " << endl;
  cout << endl;

  cout << "a. They are consistent and easy to follow as they are separate and independent from project goals and objectives" << endl;
  cout << "b. They are the building blocks for future security testing, eliminating the need to start from scratch" << endl;
  cout << "c. They outline an effective offense to meet threats before they enter the system" << endl;
  cout << "d. They allow for latitude in security practices since threats are always changing dynamically" << endl;
  cout << endl;

  
}

void printAL_SECv2016Question45(){
  cout << "" << endl;
  cout << " Question #45 (1 pt) What are advantages to imposing security standards in contracts? " << endl;
  cout << endl;

  cout << "a. They provide each party a legal exit when an unforeseen security issue adversely affects the product" << endl;
  cout << "b. They provide a starting place for both parties to begin their negotiations" << endl;
  cout << "c. They are a convenient way to make public the agreement between parties" << endl;
  cout << "d. They can change as standards change, even when the contract is finalized" << endl;
  cout << endl;

}





int processAL_SECv2016Question1(){
  cout << endl << endl << endl << endl << endl;

  printAL_SECv2016Question1();

  cout << endl;
  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0;  
  
}
int processAL_SECv2016Question2(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question2();

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 3;
  else return 0;  
}
int processAL_SECv2016Question3(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question3();

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question4(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question4();

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 3;
  else return 0; 
}
int processAL_SECv2016Question5(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question5();

  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question6(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question6();

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question7(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question7();

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 2;
  else return 0; 
}
int processAL_SECv2016Question8(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question8();

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 2;
  else return 0; 
}
int processAL_SECv2016Question9(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question9();

  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 3;
  else return 0; 
}
int processAL_SECv2016Question10(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question10();

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 2;
  else return 0; 
}

int processAL_SECv2016Question11(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question11();

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 2;
  else return 0;  
}

int processAL_SECv2016Question12(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question12();

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 3;
  else return 0;  
}
int processAL_SECv2016Question13(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question13();

  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 2;
  else return 0; 
}
int processAL_SECv2016Question14(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question14();


  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question15(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question15();


  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question16(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question16();

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 3;
  else return 0; 
}
int processAL_SECv2016Question17(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question17();


  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question18(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question18();


  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 2;
  else return 0; 
}
int processAL_SECv2016Question19(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question19();


  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 3;
  else return 0; 
}
int processAL_SECv2016Question20(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question20();


  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0; 
}


int processAL_SECv2016Question21(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question21();


  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 2;
  else return 0;  
}

int processAL_SECv2016Question22(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question22();


  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 3;
  else return 0;  
}
int processAL_SECv2016Question23(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question23();

  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 2;
  else return 0; 
}
int processAL_SECv2016Question24(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question24();

  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 2;
  else return 0; 
}
int processAL_SECv2016Question25(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question25();

  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 2;
  else return 0; 
}
int processAL_SECv2016Question26(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question26();

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question27(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question27();

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 2;
  else return 0; 
}
int processAL_SECv2016Question28(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question28();

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question29(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question29();

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 2;
  else return 0; 
}
int processAL_SECv2016Question30(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question30();

  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0; 
}


int processAL_SECv2016Question31(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question31();


  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 2;
  else return 0;  
}

int processAL_SECv2016Question32(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question32();


  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0;  
}
int processAL_SECv2016Question33(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question33();


  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question34(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question34();


  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 2;
  else return 0; 
}
int processAL_SECv2016Question35(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question35();


  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question36(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question36();


  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 3;
  else return 0; 
}
int processAL_SECv2016Question37(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question37();


  char Answer = getAnswer();
  if ((Answer == 'D') || (Answer == 'd'))   
    return 2;
  else return 0; 
}
int processAL_SECv2016Question38(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question38();


  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question39(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question39();


  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question40(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question40();

  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 3;
  else return 0; 
}
int processAL_SECv2016Question41(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question41();


  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question42(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question42();


  char Answer = getAnswer();
  if ((Answer == 'A') || (Answer == 'a'))   
    return 3;
  else return 0; 
}
int processAL_SECv2016Question43(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question43();


  char Answer = getAnswer();
  if ((Answer == 'C') || (Answer == 'c'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question44(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question44();


  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0; 
}
int processAL_SECv2016Question45(){
  cout << endl<< endl<< endl<< endl<< endl;

  printAL_SECv2016Question45();


  char Answer = getAnswer();
  if ((Answer == 'B') || (Answer == 'b'))   
    return 1;
  else return 0; 
}


void processAL_SECv2016Question1Incorrect(){
  cout << "Question #1 (1 pt) Which of the following is a purpose of a security audit?" << endl;
  cout << endl;

  cout << "a.To prevent users from using simple passwords" << endl;
  cout << "b.To reveal insufficient patch updates provided by the vendor" << endl;
  cout << "c.To halt unauthorized intruders from accessing the system" << endl;
  cout << "d.To require users to change their password after a predetermined set of days" << endl;
  cout << endl;

  cout << "B is correct as keeping the patch updates current on the system is one of the purposes of a security audit. The others are good practices, but not the purpose of the security audit. " << endl;
  cout << endl;
  







 
}
void processAL_SECv2016Question2Incorrect(){
  cout << "" << endl;
  cout << "Question #2 (3 pts) You are responsible for ensuring that new vendors brought on externally for the project are fully compliant with government mandated guidelines as part of your risk assessment. On which stakeholders should you primarily focus to ensure these outside vendors continue to comply? " << endl;
  cout << endl;

  cout << "a.Customers, users, and vendors to ensure there is good communication between them" << endl;
  cout << "b.Public users and vendors who will follow the law as it applies to the source of information" << endl;
  cout << "c.Federal and local agencies that communicate guidelines to follow" << endl;
  cout << "d.Both internal and external sources that will use the information for further analyzing the risk" << endl;
  cout << endl;

  cout << " C is correct as this is the source of the guidelines. The guidelines may change so it’s important to keep the communications channels open with these folks. A, B and D all need to be informed, but the information needs to come from the federal and local agencies. " << endl;
  







}
void processAL_SECv2016Question3Incorrect(){
  cout << "" << endl;
  cout << "Question #3 (1 pt) Which of the following is a consequence of a policy that minimizes access to a system or device to acceptable levels? " << endl;
  cout << endl;

  cout << "a.More devices are added to mitigate the impact" << endl;
  cout << "b.Proper controls of self-provisioning devices such as routers are prohibited" << endl;
  cout << "c.Devices that do not conform are removed from the wireless network" << endl;
  cout << "d.Access to the VPN is severely restricted" << endl;
  cout << endl;

  cout << "C is correct. When this policy is implemented, non-conforming devices will be removed until they conform. A is not correct as this would not be an expected results. B is not correct because these controls will be encouraged. D is not correct because access will be controlled, not severely limited.  " << endl;
  
}
void processAL_SECv2016Question4Incorrect(){
  cout << "" << endl;
  cout << "Question #4 (3 pts) Your role as the Security Administrator is to help your organization understand the effectiveness of security policies and procedures across the enterprise. You will report your effectiveness findings to Senior Management after your analysis has been completed. Which of the following is the optimum strategy to accomplish this? " << endl;
  cout << endl;

  cout << "a.Implement a static analysis evaluation independently for both policies and procedures" << endl;
  cout << "b.Analyze the results from a security test to validate effectiveness" << endl;
  cout << "c.Evaluate security test results that focus on current threats and attacks" << endl;
  cout << "d.Evaluate the static test results for new and emerging software threats" << endl;
  cout << endl;

  cout << " B is correct. You should analyze the results of a security test to see if the policies and procedures have been followed and are effective. A is not correct because the static analysis should be over the code, if anything. C is not correct because the focus shouldn’t just be on current threats and attacks, but also on configurations, etc. D is not correct because the focus is not just on the emerging threats. " << endl;
  









}
void processAL_SECv2016Question5Incorrect(){
  cout << "" << endl;
  cout << "Question #5 (1 pt) If an organization experiences a security breach and legal action results, how does it help the organization to have done security testing?" << endl;
  cout << endl;

  cout << "a. It can show that the organization has done due diligence to try to prevent such an incident" << endl;
  cout << "b. The documentation from the security testing can be used to track down the perpetrator" << endl;
  cout << "c. Since any important information would have been backed up before security testing, this backup can be used to restore any compromised information" << endl;
  cout << "d. By tracing through the documented tests, the security testing team can discover how the breach was possible" << endl;
  cout << endl;

  cout << " A is correct per the syllabus. B is not correct because this information would probably not be helpful. C is not correct because the backup would likely be out of date and the information was not necessarily corrupted, but rather stolen or viewed. D is not correct because, although this may help point to areas where testing was not sufficient, it will not support the organization’s defense of legal actions. " << endl;
  









}
void processAL_SECv2016Question6Incorrect(){
  cout << "" << endl;
  cout << "Question #6 (1 pt) Which of the following is a correct statement? " << endl;
  cout << endl;

  cout << "a.Information assurance is a part of security testing" << endl;
  cout << "b.Information assurance and security testing are two terms for the same thing" << endl;
  cout << "c.Security testing is a part of information assurance" << endl;
  cout << "d.The two terms refer to different areas of security" << endl;
  cout << endl;

  cout << "  C is correct, security testing is a part of the larger area of information assurance." << endl;
  
  







}
void processAL_SECv2016Question7Incorrect(){
  cout << "" << endl;
  cout << "Question #7 (2 pts) You are working at a bank as part of the security testing team. During a recent security audit it was noted that the user’s passwords were not strong enough. Since that time, a new set of requirements has been issued to ensure password strength. Given this information, what would be a reasonable set of security objectives for general password rule testing? " << endl;
  cout << endl;
  cout << "1. Verify that passwords meet the requirements for length"<< endl;
  cout << "2. Verify that passwords meet the requirements for usage of characters, numbers, letters and capitalization"<< endl;
  cout << "3. Verify that passwords can be retried three times"<< endl;
  cout << "4. Verify that passwords cannot be re-used within a one year timeframe"<< endl;
  cout << "5. Verify that passwords must be reset every three months"<< endl;
  cout << "6. Verify that the user can request to have their password emailed to them"<< endl;
  cout << "7. Verify that the system administrator can reset a locked password"<< endl;
  cout << endl;

  cout << "a.1, 2, 3, 4" << endl;
  cout << "b.1, 2, 4, 5" << endl;
  cout << "c.3, 4, 6, 7" << endl;
  cout << "d.4, 5, 6, 7" << endl;
  cout << endl;

  cout << " B is correct because all of these are valid security objectives. A is not correct because 3 is functional rather than security related (unless it locks them out, but we don’t know that from this description). C is not correct because 6 and 7 are both functional rather than specific security requirements. D is not correct for the same reason as C. " << endl;
  


}
void processAL_SECv2016Question8Incorrect(){
  cout << "" << endl;
  cout << "Question #8 (2 pts) Your company recently made headlines after a security breach resulted in confidential customer information being stolen. Management has reacted with an edict that the scope of the security testing objectives needs to be expanded immediately. While you agree that something needs to be done, you are worried that this approach may be too reactive and may not result in the testing that is needed. According to the syllabus, what is a reasonable concern if these initiatives are implemented?  " << endl;
  cout << endl;

  cout << "a.The testing will still miss issues because it will not be well-focused" << endl;
  cout << "b.The testing will be outsourced so that it can be done more efficiently" << endl;
  cout << "c.The testing scope may be too large and there may not be adequate resources to complete it" << endl;
  cout << "d.The testing objectives are not clearly defined and may miss the same issues as previously escaped to production" << endl;
  cout << endl;

  cout << " C is correct per the syllabus as this is a common problem when the objectives are broadly defined. A and D are reasonable concerns, but we don’t know when or how the test objectives will be defined, so this may be controllable. B is always a possibility and may be the right thing to do in this case, but there has been no indication that outsourcing will occur at this time. " << endl;
  
}
void processAL_SECv2016Question9Incorrect(){
  cout << "" << endl;
  cout << "  Question #9 (3 pts) You have just accepted a job to create a security testing team for a company than handles sensitive medical information that is shared between doctors and hospitals. You have noticed that the security around this information is not sufficient to protect it from hackers or even accidental exposure. The person who had your job previously brought in a number of consultants to do testing, but the findings were not documented and no changes were implemented. In fact, you don’t even know what the coverage was from the testing. You have presented your findings to the executive management team. " << endl;
  cout << endl;
  cout << "While they have agreed in principle that they need security testing, they have not allocated the necessary budget or time to the project. It appears that while they think security is a good idea, they really have no understanding of what should be done or how it should be done. What should be your first step toward getting the executives aligned with the work that needs to be done?" << endl;
  cout << endl;

  cout << "a. Create a detailed list of all the possible security holes and present these to the executives" << endl;
  cout << "b. Provide a summary of the testing approach that you propose and give examples of how the testing will be conducted" << endl;
  cout << "c. Bring in the legal team to explain what a security breach could cost the organization" << endl;
  cout << "d. Create a security policy and security testing policy and demonstrate how that aligns with your proposed testing approach" << endl;
  cout << endl;

  cout << " D is correct. At this point, the organization needs a high level policy and plan to move forward. Without this policy, the testing may continue to be sporadic and high level support and funding will be difficult. A and C are not correct at this point although they might be useful if you have trouble getting funding when you work to implement the policy. B is not right because you need an overall policy before you define the approach. " << endl;
  









}
void processAL_SECv2016Question10Incorrect(){
  cout << "" << endl;
  cout << "Question #10 (2 pts) You have just come from a meeting where there was much discussion regarding the security approach of the organization. One of the points of emphasis was the importance of testing to ensure that data is protected from fraudulent access, particularly credit card information. You have been asked to prepare a set of testing objectives that will help address this risk area. One of your tasks is to ensure that you are covering all the concerns of the stakeholders. Which stakeholder group is most likely to see the benefits from your efforts?" << endl;
  cout << endl;

  cout << "a.Executive management" << endl;
  cout << "b.Compliancy officers" << endl;
  cout << "c.Business customers" << endl;
  cout << "d.Regulatory officers" << endl;
  cout << endl;

  cout << "C is correct. The business customers will be most concerned with protection from fraudulent access as it is their data which is vulnerable. We would hope that A, B and D would also be involved, but this is not usually their primary benefit." << endl;
  








}
void processAL_SECv2016Question11Incorrect(){
  cout << "" << endl;
  cout << "Question #11 (2 pts) As a Security Administrator you are responsible for all aspects of the security process, including testing. For this particular process you are to use conceptual tests as a basis for manual tests and execute these from an external vendor’s perspective. Which security testing process does this most parallel? " << endl;
  cout << endl;

  cout << "a.Security test creation of conditions and objectives" << endl;
  cout << "b.Security test implementation" << endl;
  cout << "c.Overall evaluating and reporting of security testing" << endl;
  cout << "d.Security test analysis and design" << endl;
  cout << endl;

  cout << "B is correct. The use of the conceptual tests to create the manual tests and perform the execution is part of the security test implementation. A and D are not correct because this has already been done with the creation of the conceptual tests. C will occur after the tests have been executed.  " << endl;
  









}
void processAL_SECv2016Question12Incorrect(){
  cout << "" << endl;
  cout << " Question #12 (3 pts) You have been developing a security test plan for a system that will store medical information for patients and will transfer that data to specialist doctors. You have covered the following areas in your plan: " << endl;
  cout << endl;
  cout << "* Scope (what’s in scope and out of scope)"  << endl;
  cout << "* Roles and assignments"  << endl;
  cout << "* Responsibilities (vendors vs. internal)"  << endl;
  cout << "* High level schedule"  << endl;
  cout << "* Environment requirements and setup"  << endl;
  cout << "* List of necessary authorizations and approvals"  << endl;
  cout << endl;
  cout << "What information do you still need to supply in this test plan to meet the minimum requirements as noted in the syllabus?" << endl;
  cout << endl;

  cout << "a. A list of the necessary credentials and training for the personnel who will be conducting the testing" << endl;
  cout << "b. A schedule showing the time that will be required to design, run and evaluate the security tests" << endl;
  cout << "c. A copy of the regulatory standards that must be met by this system " << endl;
  cout << "d. A list of the individuals who will be doing the testing and their contact information in the event of a security breach" << endl;
  cout << endl;

  cout << " B is correct per the syllabus. A might be needed but that is not one of the minimum requirements and may already be understood in the roles and responsibilities section. C is not correct because the standards might be referenced but not included in the plan. D is not correct because this level of detail does not belong in the plan and the individual testers should not be contacted during a breach. " << endl;
 }
void processAL_SECv2016Question13Incorrect(){
  cout << "" << endl;
  cout << "Question #13 (2 pts) Which of the following test cases would best test a system’s security procedure? " << endl;
  cout << endl;

  cout << "a. Three unsuccessful login attempts will generate a lock-out message. Contact your manager or the System Administrator so they can give you a temporary password over the phone. You must then change the temporary password upon logging in. You log out then log back in using your newly created password." << endl;
  cout << "b. You receive a lock-out message after several attempts to log in. You call IT support to obtain a new password. You log in with the temporary password, log back out, then log in again and enter a new password." << endl;
  cout << "c. After several attempts you are locked out of the system. You use a password that worked previously. However, it no longer works. You attempt to create a new password but you are now locked out. A complete reboot of the machine is the next step to take you to the prompt to re-enter the password." << endl;
  cout << "d. After the first attempt to use an invalid password you immediately pull up a list of passwords on your notepad on your PC to ensure you are using the correct one. You try another password from the list and it works." << endl;
  cout << endl;

  cout << "A is correct. B and C are not correct because of the word “several”. D is not correct because this would definitely not be a good security practice.  " << endl;
 
}
void processAL_SECv2016Question14Incorrect(){
  cout << "" << endl;
  cout << "  Question #14 (1 pt) Which of the following are main characteristics of an effective security test environment? " << endl;
  cout << endl;

  cout << "a.Closely tied to production systems to enhance security at all points" << endl;
  cout << "b.Isolates different old versions of the operating systems for use in the environment" << endl;
  cout << "c.Mimics the production environment in terms of access rights" << endl;
  cout << "d.Includes all production environment plug-ins as well as other plug-ins not in the production environment in order to ensure the most comprehensive setup" << endl;
  cout << endl;

  cout << "C is correct because the closer the test environment mimics production, the more valid the testing will be. This is particularly true when it comes to access rights and delegation settings. A is not correct  " << endl;
  
}

void processAL_SECv2016Question15Incorrect(){
  cout << "" << endl;
  cout << "Question #15 (1 pt) What is a significant concern when seeking approval for the security testing tools? " << endl;
  cout << endl;

  cout << "a. Some countries prohibit the use of certain security testing tools" << endl;
  cout << "b. Ensure the approval process for security testing tools can be bypassed on an exception basis in cases where a malicious event is in progress" << endl;
  cout << "c. The risks of the tool are rarely known before it is procured and are better discovered when the tools is in use" << endl;
  cout << "d. Because security testing tool risks are usually known, there is no need for a mitigating strategy" << endl;
  cout << endl;

  cout << " A is correct. While some tools are quite good and effective for testing, they may be prohibited by some countries and some organizations. B is not correct because there is always a danger of deploying a sub-optimal tool to deal with a crisis. A fast-track approval process makes sense, but a complete bypass is risky. C and D are not correct because there may be unknown risks from tools and it’s better to do the due diligence in tool selection rather than deal with the consequences of a poorly selected tool. " << endl;

}
void processAL_SECv2016Question16Incorrect(){
  cout << "" << endl;
  cout << "Question #16 (3 pts) You are reviewing a set of security test results run on a product that is going through final testing before release to production. This is an update of a version that is currently in production. The application just tested was your e-commerce site, and it has a defect that allows cross-site scripting. Which of the following is the proper set of steps you should take? " << endl;
  cout << endl;

  cout << "a. Report the problem to the developer, add it to the stakeholder report, and continue testing for other types of defects" << endl;
  cout << "b. Test if the problem exists in the current production version, document the defect in a secure system, notify the developer, continue testing for other XSS defects" << endl;
  cout << "c. Investigate the extent of the problem by conducting further tests on the planned release with particular concentration on other XSS isses, conduct static analysis on the code" << endl;
  cout << "d. Inform management, document the defect and include it in your weekly status report to stakeholders, continue testing for other security defects to determine the extent of the security issues" << endl;
  cout << endl;

  cout << " B is correct. The first priority is to see if the problem exists in the production version. The defect should be documented only in a secure defect tracking system since the problem may exist in production. Since one XSS issue was found, there may be others so continued testing is warranted. A is not correct because the defect should not be publicized in the stakeholder report. C is not correct because while further testing is needed, notification is critical. D is not correct because of the stakeholder reporting. " << endl;
}

void processAL_SECv2016Question17Incorrect(){
  cout << "" << endl;
  cout << "  Question #17 (1 pt) At what point in the SDLC should there be checking to ensure that proper secure coding practices have been followed? " << endl;
  cout << endl;

  cout << "a.Component testing" << endl;
  cout << "b.Integration testing" << endl;
  cout << "c.System testing" << endl;
  cout << "d.Security acceptance testing" << endl;
  cout << endl;

  cout << "A is correct. The checking should be done as soon as the code is written. " << endl;
  










}
void processAL_SECv2016Question18Incorrect(){
  cout << "" << endl;
  cout << "  Question #18 (2 pts) You have been asked by the business analyst to help with defining the requirements for the security aspects of a system. This is a safety-critical system that stores medical information for patients and supplies this information to health professionals at hospitals, doctors’ offices and ambulances. At what point in the lifecycle should the security requirements be documented and at what level of detail?" << endl;
  cout << endl;

  cout << "a. They should not be documented formally because of the need to protect the security implementation within the code from outsiders" << endl;
  cout << "b. They should be documented in a detailed and unambiguous way in the requirements documents during the requirements phase" << endl;
  cout << "c. They should be documented during the design phase when the code approach is known rather than at the requirements phase when the approach is not known" << endl;
  cout << "d. They should be restricted to the functional access and availability requirements from the user’s perspective and should be documented during the requirements phase" << endl;
  cout << endl;

  cout << "B is correct. A is not correct, although it is important that the documented requirements be protected from those who do not need to know. C is not correct because although they may be refined at the design level, they should be initially captured during the requirements definition phase. D is not correct because security requirements also need to include secure coding practices, etc. " << endl;
  








}
void processAL_SECv2016Question19Incorrect(){
  cout << "" << endl;
  cout << "  Question #19 (3 pts) A deficiency has been discovered in production. If an unauthorized user copies a URL from a session of an authorized user, the unauthorized user can paste the URL into their session and continue to process with the authorized user’s rights. In the case that was reported, the unauthorized user was able to use the authorized user’s URL to change the system administration password. In order to close this gap, the developers will check the session ID and the user ID anytime a URL is used. " << endl;
  cout << endl;
  cout << "  What is a realistic concern for this fix?" << endl;
  cout << endl;

  

  cout << "a.It will not fix the problem and session hijacking will still be possible" << endl;
  cout << "b.It will fix the problem, but the usability may be adversely affected" << endl;
  cout << "c.It will fix the problem, but performance may be adversely affected" << endl;
  cout << "d.It will not fix the problem and will expose a new vulnerability with session IDs" << endl;
  cout << endl;

  cout << "C is correct. It is likely that this level of checking will slow down the system because it will have to check on each screen change. A and D are not correct because the fix should fix the problem. B is not correct because there should be no impact to usability (unless you are the hacker!).  " << endl;
  
}
void processAL_SECv2016Question20Incorrect(){
  cout << "" << endl;
  cout << " Question #20 (1 pt) During component level testing, why should the security tester review compiler warnings? " << endl;
  cout << endl;

  cout << "a. Because these indicate security problems that must be fixed" << endl;
  cout << "b. Because these indicate potential issues that should be investigated" << endl;
  cout << "c. Because these indicate coding issues that will cause functional defects" << endl;
  cout << "d. Because these indicate poor programming practices that will increase maintainability" << endl;
  cout << endl;

  cout << " B is correct. From a security testing standpoint, compiler warnings indicate potential issues that could lead to security gaps. A is not correct because warnings do not necessarily require a fix. C and D may be true, but are not related to security testing. " << endl;
  }
void processAL_SECv2016Question21Incorrect(){
  cout << "" << endl;
  cout << "Question #21 (2 pts) You have been testing a system that has 20 defined components. You have done extensive security testing on each of the components. The system is now ready to move into component integration security testing. How should you approach this testing? " << endl;
  cout << endl;

  cout << "a. Since component integration testing is concerned with the summation of the vulnerabilities of the individual components, conducting the same tests on the integrated components is the best approach." << endl;
  cout << "b. The main risk is now in the integration of the components themselves, so testing should cover each interface and verify that there are no vulnerabilities in the interfaces and the components should also be retested." << endl;
  cout << "c. It is likely that new vulnerabilities are present with the integrated components as well as with the larger system and infrastructure that is now testable, so testing should expand to include these new areas." << endl;
  cout << "d. Since the components are now integrated, the security risks will be reduced because the possible interactions are now limited so only the integration points should be tested and no component re-testing is needed." << endl;
  cout << endl;

  cout << "C is correct. New vulnerabilities may be present with the integrated components and new testing areas are likely to be available. A is not correct because component integration testing is not the sum of the individual components. B is not correct because the testing should not be limited to just the interfaces and the original components. D is not correct because security risks are likely to be increased, not decreased.  " << endl;

}

void processAL_SECv2016Question22Incorrect(){
  cout << "" << endl;
  cout << "Question #22 (3 pts) You are creating security test cases to check for SQL injection on an input field that allows up to 5 alphanumeric characters. You are planning to apply equivalence partitioning to reduce the number of test cases you will need to execute. Given this information, which of the following is the minimum set of inputs you would need to use to test this field?" << endl;
  cout << endl;

  cout << "a.bbbbb, 12345, ‘" << endl;
  cout << "b.%, ‘, @, ab123" << endl;
  cout << "c.‘, ab123" << endl;
  cout << "d.‘" << endl;
  cout << endl;

  cout << "C is correct as this has one test for SQL injection and one for a valid input. This is the minimum number of tests. A and B have more than the minimum number and D doesn’t have enough tests because it doesn’t test the valid input. It would be advisable to do more testing on the various characters that can support SQL injection, but this question is asking to apply EP and get the minimum number of test cases." << endl;


}
void processAL_SECv2016Question23Incorrect(){
  cout << "" << endl;
  cout << "Question #23 (2 pts) You have been given the following requirement for security testing. A user will be allowed to request their password. If they make this request, they must answer two of their three security questions correctly. If they answer correctly, a link will be sent to their email. The link will take them to a page where they can reset their password. Once reset, they can login with the new password. The link must be disabled 1 hour after it is sent. The user is allowed only two password requests without a reset, after which they will have to call the help desk. For any other errors, the user ID is locked and must be unlocked by the help desk. " << endl;
  cout << endl;
  cout << "Which of the following is the minimum list of test conditions to adequately test the functional security covered by this requirement?" << endl;
  cout << endl;

  cout << "a. Invalid user; valid user; 2 correct answers; 2 incorrect answers; good email; bad email; reset with good password; reset with bad password; link good; link expired; two requests without reset; three requests without reset" << endl;
  cout << "b. Valid user; 2 correct answers; good email; reset with good password; link good; two requests without reset" << endl;
  cout << "c.Invalid user; 2 incorrect answers; bad email; reset with bad password; link expired; three requests without reset" << endl;
  cout << "d. Buffer overflow on each input field; SQL injection on each input field; XXS on the login page and reset password page, invalid user; valid user; 2 correct answers; 2 incorrect answers; good email; bad email; reset with good password; reset with bad password; link good; link expired; two requests without reset; three requests without reset" << endl;
  cout << endl;

  cout << " A is correct as it covers the main scenarios for the functional security specified in the requirement. B tests only on the valid tests. C tests only the error conditions. D expands into attack testing as well as functional testing. " << endl;
  
}
void processAL_SECv2016Question24Incorrect(){
  cout << "" << endl;
  cout << " Question #24 (2 pts) A user will be allowed to request their password. If they make this request, they must answer two of their three security questions correctly. If they answer correctly, a link will be sent to their email address. The link will take them to a page where they can reset their password. Once reset, they can login with the new password. The link must be disabled one hour after it is sent. The user is allowed only two password requests without a reset, after which he will have to call the helpdesk. For any other errors, the user ID is locked and must be unlocked by the help desk " << endl;
  cout << endl;
  cout << "Which of the following is a valid set of acceptance criteria for this requirement?" << endl;
  cout << endl;
  cout << "1. User can reset password if less than three requests have been made since last reset, and two security questions are answered correctly, and the link is used to reset and a valid password is entered at the reset prompt." << endl;
  cout << "2. More than two requests results in user ID locked." << endl;
  cout << "3. More than two requests without a reset results in user ID locked." << endl;
  cout << "4. More than two security questions missed results in error." << endl;
  cout << "5. More than two security questions missed, user ID is locked." << endl;
  cout << "6. If email error is received by the system, user ID is locked." << endl;
  cout << "7. If invalid password is entered on reset, the user is prompted with the proper rules." << endl;
  cout << "8. Reset password can be used to log into the system." << endl;
  cout <<  endl;

  cout << "a.1, 2, 4, 6, 7, 8 " << endl;
  cout << "b.1, 2, 3, 4, 5, 6, 7, 8" << endl;
  cout << "c.3, 5, 6, 7, 8" << endl;
  cout << "d.1, 3, 5, 6, 8" << endl;
  cout << endl;

  cout << " D is correct because it provides the acceptance criteria based on the requirement. 7 is tempting and would be logical, but it is not specified in the requirement. The others are not correct because they do not contain the proper criteria. 2 is incorrect where 3 is correct. 4 is incorrect where 5 is correct. " << endl;
  
}
void processAL_SECv2016Question25Incorrect(){
  cout << "" << endl;
  cout << "Question #25 (2 pts) You are implementing procedures for evaluating system hardening in an effort to test the system’s security effectiveness. What procedure might you follow to ensure the hardening mechanisms put in place are working as expected? " << endl;
  cout << endl;

  cout << "a. Closely monitor various security performance reports and metrics to determine if the correct level of access and authentication is achieved" << endl;
  cout << "b. Frequently audit strong authentication to ensure a high level of intrusion protection is maintained at all times" << endl;
  cout << "c. Evaluate the hardware components that have been hardened and compare these to other hardened software components to ensure equilibrium is being achieved" << endl;
  cout << "d. Enlist a known hacker to conduct an independent assessment of the hardening effectiveness" << endl;
  cout << endl;

  cout << " A is correct. There are security performance reports and metrics available that can be used to determine if you have achieved the right level of hardening. B is not correct because strong authentication is just one aspect of hardening. C is not correct because equilibrium is not needed. The more critical areas may warrant better hardening. D is not correct because there is the danger of the hacker not telling you what is found. " << endl;
  
}
void processAL_SECv2016Question26Incorrect(){
  cout << "" << endl;
  cout << "Question #26 (1 pt) What are key attributes of security authentication of a medium complexity IT system?" << endl;
  cout << endl;

  cout << "a. It verifies that the user has the correct profile and corresponding rights to access limited parts of the system" << endl;
  cout << "b. It is key in identifying the amount of system resources the user can utilize" << endl;
  cout << "c. It verifies that user entering the system is legitimate" << endl;
  cout << "d. It uses common credentials among users to gain entry into the system" << endl;
  cout << endl;

  cout << "C is correct. It verifies that the user is legitimate and authorized. A is not correct because it is not looking at access rights. B is not correct because system resource utilization is not a consideration. D is not correct because common credential verification should not be used – each individual should have unique credentials.  " << endl;
 
}
void processAL_SECv2016Question27Incorrect(){
  cout << "" << endl;
  cout << "Question #27 (2 pts) Typical encryption mechanisms are vulnerable to threats which makes it important to understand their effectiveness at any given time. Identify which of the following you should implement to gain confidence in your encryption mechanisms? " << endl;
  cout << endl;

  cout << "a.Evaluate cryptographic keys to ensure they are at least 256 bits in size" << endl;
  cout << "b.Ensure you are applying random algorithms to generate random numbers where possible" << endl;
  cout << "c.Develop tests that ensure symmetric encryption is used in the right modes" << endl;
  cout << "d.Remove all WEP protocols to see how the system performs" << endl;
  cout << endl;

  cout << "C is correct per the syllabus. A is not correct because a minimum of 768 bits should be used. B is not correct because the random algorithm is easy to crack. D is not correct because WEP protocols should be left in place, not removed.  " << endl;


}
void processAL_SECv2016Question28Incorrect(){
  cout << "" << endl;
  cout << "Question #28 (1 pt) Which is true of the relationship between a firewall and a network zone?" << endl;
  cout << endl;

  cout << "a. Both a network zone and firewall focus on the size of data that is being passed through" << endl;
  cout << "b. A network zone communicates through safe protocol options while a firewall ensures those protocols are safe" << endl;
  cout << "c. A sub-network can be considered a network zone and a firewall can be traffic monitoring software" << endl;
  cout << "d. A network zone blocks malicious traffic from an untrusted zone which the firewall does not filter" << endl;
  cout << endl;

  cout << " C is correct per the syllabus. A is incorrect because network zones do not focus on size of data. B is not correct. Network zones are parts of the configuration of the firewall and define the authorized flow of data between networks. D is not correct because the firewall blocks the traffic, not the network zone. " << endl;
  
  







}
void processAL_SECv2016Question29Incorrect(){
  cout << "" << endl;
  cout << "Question #29 (2 pts) You are working at an organization which has an intrusion detection tool deployed. You are concerned that traffic is getting through that should be considered unauthorized. Which of the following should you apply to most effectively test the abilities of the intrusion detection tool and provide input to update the intrusion specifications?" << endl;
  cout << endl;

  cout << "a.Develop a series of scenarios based on past experience" << endl;
  cout << "b.Use tests that generate malicious traffic to add new intrusion specifications" << endl;
  cout << "c.Apply it to situations of known malicious traffic" << endl;
  cout << "d.Use it in conjunction with other IDS products when possible" << endl;
  cout << endl;

  cout << "B is correct because these tests can be used to add new intrusion specifications which were formerly considered to be authorized traffic. A and C might be useful, but will not be as effective as B in making sure the tool will work for the future as well as the present. D is true for the usage, but not for the testing.  " << endl;
  
  
}
void processAL_SECv2016Question30Incorrect(){
  cout << "" << endl;
  cout << "Question #30 (1 pt) Which of the following is a main disadvantage to malware scanning tools?" << endl;
  cout << endl;

  cout << "a.They only detect certain levels of malware" << endl;
  cout << "b.They can only detect malware that is known to the tool" << endl;
  cout << "c.They tend to be overly complex to run" << endl;
  cout << "d.They do not provide updating and reporting capabilities" << endl;
  cout << endl;

  cout << "B is correct. The malware tool can only detect malware that it already knows about. B may be correct depending on the particular focus of the tool, but is not a main disadvantage. C is generally not true – the tools are normally easy to run. D is not correct because the tools provide the ability to update themselves with new findings and to produce reports.  " << endl;
  
  
}
void processAL_SECv2016Question31Incorrect(){
  cout << "" << endl;
  cout << "Question #31 (2 pts) You need to remove personal identification numbers from a legacy system in order to reduce risk during testing. Part of your data obfuscation plan includes verifying how effectively the data is masked. Which of the following is the most effective approach to use? " << endl;
  cout << endl;

  cout << "a. Manually verify in the database that the data targeted for obfuscation is no longer understandable for logical human interpretation" << endl;
  cout << "b. Design a brute force attack on the obfuscated data" << endl;
  cout << "c. Substitute the sensitive data with random data of varying string lengths" << endl;
  cout << "d. Enlist the development teams to generate a program to stress the database for vulnerabilities" << endl;
  cout << endl;

  cout << " B is correct per the syllabus. A brute force or dictionary attack can be used to see if personal information is still accessible. A is not correct because it is generally not feasible because of the amount of data and time it would take. C is not correct because this is more of an anonymizing exercise. Also, the field length might be limited so this may corrupt the data. D is not correct because we are not trying to stress test the database itself." << endl;
  

}
void processAL_SECv2016Question32Incorrect(){
  cout << "" << endl;
  cout << "Question #32 (1 pt) What is often considered the weakest link in software security? " << endl;
  cout << endl;

  cout << "a. The lack of a consistent and comprehensive security training plan" << endl;
  cout << "b. The effort necessary to maintain document and procedure updates in order to keep up with continuing security threats" << endl;
  cout << "c. The behavior of humans" << endl;
  cout << "d. The constant advancement in malicious techniques" << endl;
  cout << endl;

  cout << "C is correct. It’s the humans and their behavior that is the weakest link. A, B and D are concerns, but C is the weakest link in the security chain. " << endl;
 
}
void processAL_SECv2016Question33Incorrect(){
  cout << "" << endl;
  cout << "Question #33 (1 pt) Which of the following is a potential security risk? " << endl;
  cout << endl;

  cout << "a.Publishing an accounting department’s organization chart on the company’s web site" << endl;
  cout << "b.Posting birthday wishes for a co-worker on Facebook" << endl;
  cout << "c.Posting the company phone directory on the company Intranet" << endl;
  cout << "d.Posting professional experience in a Linked In profile" << endl;
  cout << endl;

  cout << "A is correct. This information could be used to determine approval chains for invoice approvals which could then be used to create and approve fake invoices if the accounting system can be hacked. B is incorrect because the birth date should not be used in any employee information such as a password (we hope!). C is incorrect because the company intranet should be behind the firewall with other protected information. D is not correct because this information is unlikely to be useful to a hacker.  " << endl;
  
  





}
void processAL_SECv2016Question34Incorrect(){
  cout << "" << endl;
  cout << "Question #34 (2 pts) You are responsible for security testing your company’s financial application. You have recently received email from a person who claims to have hacked into the system using Shodan and has discovered that you are running an out-of-date and vulnerable OS on one of your servers. You have checked and the hacker is correct. You have made sure the server has been updated. Your preliminary check has shown no trace of how the hacker got into your system. Should you be concerned? " << endl;
  cout << endl;

  cout << "a. No, this is a “white hat” hacker and means no harm to your company" << endl;
  cout << "b. No, you have fixed the vulnerability so the system is now safe" << endl;
  cout << "c. Yes, your security testing is not sufficient and you need to re-run your tests to see what was missed" << endl;
  cout << "d. Yes, since the hacker didn’t admit how he got in the system, he can still access it and may decide to exploit the vulnerability next time" << endl;
  cout << endl;

  cout << " D is correct and that is your biggest point of concern. A is not correct and could be a dangerous assumption. B is not correct because the hacker still has access to the system. C may be true, but re- running the same tests is not going to help with this issue. " << endl;
  


}
void processAL_SECv2016Question35Incorrect(){
  cout << "" << endl;
  cout << "Question #35 (1 pt) Why is an attack from inside the organization particularly worrisome? " << endl;
  cout << endl;

  cout << "a. The attacker is likely driven by curiosity and will be unrelenting" << endl;
  cout << "b. The attacker is likely bored at work and will continue hacking the system for entertainment" << endl;
  cout << "c. The attacker is already inside the firewall and is an authorized system user" << endl;
  cout << "d. The attacker is likely to launch a DOS attack which will cripple the servers" << endl;
  cout << endl;

  cout << " C is correct. The biggest threat here is that the external protections are useless because the attacker is already inside the sytem. A and B are more likely to occur with an external attacker. D is not the most likely attack – generally internal users are after information they can sell or can use to embarass the company. " << endl;
  

}
void processAL_SECv2016Question36Incorrect(){
  cout << "" << endl;
  cout << "Question #36 (3 pts) You are working in an organization where system administration access to the servers is highly restricted. Only three long-term and trusted employees know the root passwords. Recently though, there have been several odd occurrences. An unknown program, called “IKnowYourBirthday” was found to be running and was emailing birthday greetings to staff members. The birth dates were correct and the greetings were all signed “From your favorite server”. This program was killed and no one could figure out where it came from. A second problem occurred when the corporate phone list was hacked and all the phone numbers were changed to 867-5309 (apparently taken from the song by the same name). The correct list was restored and again no one could figure out how it had been done, although the new file had been created by “root”. You’ve just received a phone call from the lead system administrator telling you that the root password has been changed. It has been determined that the password was set to the lead system administrator’s dog’s name. Further investigation has discovered that the problems started shortly after a series of virus–infected emails were detected. When the first one was found, safeguards were immediately put in place to stop any further spread of the virus, but now you are wondering if someone managed to get into the system via code that was introduced into the system by the virus. " << endl;
  cout << endl;
  cout << "What should you do now as your next step of investigation?" << endl;
  cout << endl;

  cout << "a. Look to see if the HR birthdate information was accessed from outside the system, and if so, trace the IP address" << endl;
  cout << "b. Verify if the lead system administrator’s dog’s name is posted somewhere in social media" << endl;
  cout << "c. Check the suspicious email that was sent and try to trace the IP address" << endl;
  cout << "d. Check the personnel files of the other two system administrators to see if there is an indication that they are unhappy" << endl;
  cout << endl;

  cout << "C is correct. It’s the best place to start because it appears that this might have been where the problem originated. If C doesn’t find anything, then A and D would be the next likely paths to pursue since it’s possible this is an internal attack (D) or that the attacks are separate and the birthdate information might provide some information as to who has been near it. B might be pursued, but it would be easier to just ask the sys admin who would know the dog’s name.  " << endl;
  
}

void processAL_SECv2016Question37Incorrect(){
  cout << "" << endl;
  cout << "Question #37 (2 pts) During testing of an upgrade, you have discovered that it is possible to create a man-in-the-middle attack that can change the amount charged to customers on your e-commerce web site. Your tester successfully changed the amount so that customers were all getting a 10% discount. What should you do first? " << endl;
  cout << endl;

  cout << "a. The tester should be discouraged from creating these types of attacks as they are not realistic in the production environment" << endl;
  cout << "b. Immediately inform management that the attack was created by the test team as part of testing, in case it is detected" << endl;
  cout << "c. Work with the developers to implement checks such as SSL-trip to ensure certificates are valid and not self-signed" << endl;
  cout << "d. Check production to see if the vulnerability is also in the production code" << endl;
  cout << endl;

  cout << " D is correct. The first priority is to see if the vulnerability is in the production code and get the problem fixed immediately. C should be the next step to ensure the developers are coding correctly and using all available tools to check for this type of issue. A is incorrect because this is exactly what security testers should be doing. B is incorrect because management permission should always be obtained prior to testing, not afterward. " << endl;
  

}
void processAL_SECv2016Question38Incorrect(){
  cout << "" << endl;
  cout << "  Question #38 (1 pt) Why is it important to reassess security risk expectations on a frequent basis? " << endl;
  cout << endl;

  cout << "a.Stakeholders have to be educated on all security risks at all times" << endl;
  cout << "b.Stakeholders will make business decisions based on associated security risk levels" << endl;
  cout << "c.Users must develop a manual-based risk mitigation plan" << endl;
  cout << "d.Both user and stakeholder expectations regarding security should be kept from changing" << endl;
  cout << endl;

  cout << "B is correct. Stakeholders often have to make business decisions regarding the security risk level that is acceptable and any necessary mitigation plans. A is not correct because everyone doesn’t need to know everything. C is not correct because a manual-based risk mitigation plan is not feasible and the users probably wouldn’t be implementing this anyway. D is not correct because expectations should change.  " << endl;
  

}
void processAL_SECv2016Question39Incorrect(){
  cout << "" << endl;
  cout << "Question #39 (1 pt) Which of the following is an important aspect of security test results? " << endl;
  cout << endl;

  cout << "a. They are published for users and stakeholders to access in order to help them better understand risk" << endl;
  cout << "b. They should be shared with developers across the enterprise in order to mitigate risk for future development projects" << endl;
  cout << "c. The fewer people that know the better" << endl;
  cout << "d. Results should always be classified by criticality" << endl;
  cout << endl;

  cout << " C is correct. The results from security tests should be kept confidential and access to the results should be tightly controlled. This is because the outcome of the tests often identify weaknesses in the current system under test and often the same issues with the production system. A is not correct because of the need to tightly control access to the results. B is not correct because only limited parts of the report should be made available to the developers to improve their coding. Likewise, limited parts should be made available to infrastructure people to fix any infrastructure issues that may have been found. D is true, but is not the most important aspect.  " << endl;
  
 

}
void processAL_SECv2016Question40Incorrect(){
  cout << "" << endl;
  cout << "  Question #40 (3 pts) You are finalizing your security test status report for a project that is ready for deployment into production. There is a high degree of risk for this project due to the nature of the system. As a result, you want to place particular emphasis on risk. Based on this, what is the best way to articulate risk on your report?" << endl;
  cout << endl;

  cout << "a.A descriptive risk assessment included in the summary" << endl;
  cout << "b.Overall risk included in the last section of the report" << endl;
  cout << "c.Risk impact described in the summary and later detailed in terms of specific vulnerabilities" << endl;
  cout << "d.Risk impact is not part of the summary of the report" << endl;
  cout << endl;

  cout << "C is correct. The risk impact should be described in the summary and detailed later in the report by discussing specific vulnerabilities. A is not correct because the details should not be in the summary. B is not correct because the information should not be recorded only at the end of the report. D is not correct because this is an important part of the report.  " << endl;
  
}

void processAL_SECv2016Question41Incorrect(){
  cout << "" << endl;
  cout << "Question #41 (1 pt) In what way are dynamic security analysis tools different from general dynamic analysis tools? " << endl;
  cout << endl;

  cout << "a.The security tools probe the system rather than just the application under test" << endl;
  cout << "b.The security tools work the same in dynamic or static mode" << endl;
  cout << "c.The security tools are better suited to detect problems such as memory leaks" << endl;
  cout << "d.The security tools need to be tailored to the language in which the application is implemented" << endl;
  cout << endl;

  cout << " A is correct. B is incorrect because there are both dynamic and static analysis security tools. C is incorrect because memory leaks are detected by the general dynamic analysis tools, not the security specific ones. D is incorrect because this is true of all static analysis tools. " << endl;
  
}

void processAL_SECv2016Question42Incorrect(){
  cout << "" << endl;
  cout << "Question #42 (3 pts) You have been given the job of testing the organization’s firewall. You have reviewed the implementation plan and steps, verified that the configuration has been set up as instructed by the firewall vendor and have conducted port scanning. Your organization is particularly concerned about denial of service (DOS) attacks, particularly since they had one when the old firewall was in place. " << endl;
  cout << endl;
  cout << "What type of testing should you conduct to help detect unexpected behavior that could be exploited by a DOS attack?" << endl;
  cout << endl;

  cout << "a. Create tests that will send malformed network packets or fuzzed data and see if they are detected and rejected by the firewall " << endl;
  cout << "b. Implement automated tests to stress test the servers to test the failover capabilities" << endl;
  cout << "c. Test the encryption and decryption algorithms to determine if they are fast enough to deal with the load of a DOS attack" << endl;
  cout << "d. Conduct software component hardening to ensure the attack surface is reduced as much as possible" << endl;
  cout << endl;

  cout << " A is correct as both of these techniques are used to test firewalls. B and C are incorrect because the goal is to prevent the attack rather than let it get through the firewall. D is incorrect because software component hardening will help the individual software components, but not the firewall and its implementation. " << endl;
  
}

void processAL_SECv2016Question43Incorrect(){
  cout << "" << endl;
  cout << "Question #43 (1 pt) If you have acquired a tool that is used under the GNU General Public License, which of the following is an important consideration for tool maintenance? " << endl;
  cout << endl;

  cout << "a.Reliability of the vendor and ability to provide support" << endl;
  cout << "b.Frequency and availability of updates from the vendor" << endl;
  cout << "c.Technical capabilities of your team to support and customize the tool for your environment" << endl;
  cout << "d.License cost and support contract cost" << endl;
  cout << endl;

  cout << " C is correct. The GNU license is free and it is an open source community so there is no vendor. A and B are incorrect because there is no vendor. D is incorrect because the tool is free although you may have development costs in customizing the tool for your needs. " << endl;
  
}

void processAL_SECv2016Question44Incorrect(){
  cout << "" << endl;
  cout << "Question #44 (1 pt) Which of the following is a benefit of conforming to security testing standards? " << endl;
  cout << endl;

  cout << "a. They are consistent and easy to follow as they are separate and independent from project goals and objectives" << endl;
  cout << "b. They are the building blocks for future security testing, eliminating the need to start from scratch" << endl;
  cout << "c. They outline an effective offense to meet threats before they enter the system" << endl;
  cout << "d. They allow for latitude in security practices since threats are always changing dynamically" << endl;
  cout << endl;

  cout << " B is correct. A is not correct because security standards may be mentioned in the project goals and objectives. C is not correct because they are defensive in nature. D is not correct because they define certain standards that help define practices – the standards should be responsive to changes in the threats. " << endl;
  
}

void processAL_SECv2016Question45Incorrect(){
  cout << "" << endl;
  cout << " Question #45 (1 pt) What are advantages to imposing security standards in contracts? " << endl;
  cout << endl;

  cout << "a. They provide each party a legal exit when an unforeseen security issue adversely affects the product" << endl;
  cout << "b. They provide a starting place for both parties to begin their negotiations" << endl;
  cout << "c. They are a convenient way to make public the agreement between parties" << endl;
  cout << "d. They can change as standards change, even when the contract is finalized" << endl;
  cout << endl;

  cout << "B is correct. By defining the security standards, each party can then determine what is required and further specify those requirements. A is not correct because it’s too late then! C is not correct because the security agreements are likely to be kept private. D is not correct because contracts don’t usually change in this way.   " << endl;
  
}



int  processAL_SECv2016Exam(){
    int pointsScoredForQuestion =0;
    int scoreTotal = 0;
    int scoreByQuestion[45];
    for (int i =0; i< 45; i++)
      scoreByQuestion[i] = 0;
      
    pointsScoredForQuestion = processAL_SECv2016Question1();
    scoreByQuestion[0] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;
    
    pointsScoredForQuestion = processAL_SECv2016Question2();
    scoreByQuestion[1] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question3();
    scoreByQuestion[2] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question4();
    scoreByQuestion[3] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question5();
    scoreByQuestion[4] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processAL_SECv2016Question6();
    scoreByQuestion[5] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question7();
    scoreByQuestion[6] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question8();
    scoreByQuestion[7] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question9();
    scoreByQuestion[8] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question10();
    scoreByQuestion[9] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;





    pointsScoredForQuestion = processAL_SECv2016Question11();
    scoreByQuestion[10] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question12();
    scoreByQuestion[11] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question13();
    scoreByQuestion[12] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question14();
    scoreByQuestion[13] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question15();
    scoreByQuestion[14] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processAL_SECv2016Question16();
    scoreByQuestion[15] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question17();
    scoreByQuestion[16] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question18();
    scoreByQuestion[17] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question19();
    scoreByQuestion[18] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question20();
    scoreByQuestion[19] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;





    pointsScoredForQuestion = processAL_SECv2016Question21();
    scoreByQuestion[20] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question22();
    scoreByQuestion[21] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question23();
    scoreByQuestion[22] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question24();
    scoreByQuestion[23] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question25();
    scoreByQuestion[24] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processAL_SECv2016Question26();
    scoreByQuestion[25] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question27();
    scoreByQuestion[26] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question28();
    scoreByQuestion[27] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question29();
    scoreByQuestion[28] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question30();
    scoreByQuestion[29] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;





    pointsScoredForQuestion = processAL_SECv2016Question31();
    scoreByQuestion[30] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question32();
    scoreByQuestion[31] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question33();
    scoreByQuestion[32] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question34();
    scoreByQuestion[33] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question35();
    scoreByQuestion[34] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    pointsScoredForQuestion = processAL_SECv2016Question36();
    scoreByQuestion[35] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question37();
    scoreByQuestion[36] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question38();
    scoreByQuestion[37] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question39();
    scoreByQuestion[38] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question40();
    scoreByQuestion[39] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;


    pointsScoredForQuestion = processAL_SECv2016Question41();
    scoreByQuestion[40] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question42();
    scoreByQuestion[41] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question43();
    scoreByQuestion[42] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question44();
    scoreByQuestion[43] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;

    pointsScoredForQuestion = processAL_SECv2016Question45();
    scoreByQuestion[44] = pointsScoredForQuestion;
    scoreTotal += pointsScoredForQuestion;



    cout <<"All Questions Complete, you scored " << scoreTotal  << " out of 80. Details of incorrectly answered questions are below" << endl;




    if (scoreByQuestion[0] == 0)  processAL_SECv2016Question1Incorrect();
    if (scoreByQuestion[1] == 0)  processAL_SECv2016Question2Incorrect();
    if (scoreByQuestion[2] == 0)  processAL_SECv2016Question3Incorrect();
    if (scoreByQuestion[3] == 0)  processAL_SECv2016Question4Incorrect();
    if (scoreByQuestion[4] == 0)  processAL_SECv2016Question5Incorrect();

    if (scoreByQuestion[5] == 0)  processAL_SECv2016Question6Incorrect();
    if (scoreByQuestion[6] == 0)  processAL_SECv2016Question7Incorrect();
    if (scoreByQuestion[7] == 0)  processAL_SECv2016Question8Incorrect();
    if (scoreByQuestion[8] == 0)  processAL_SECv2016Question9Incorrect();
    if (scoreByQuestion[9] == 0)  processAL_SECv2016Question10Incorrect();


    if (scoreByQuestion[10] == 0)  processAL_SECv2016Question11Incorrect();
    if (scoreByQuestion[11] == 0)  processAL_SECv2016Question12Incorrect();
    if (scoreByQuestion[12] == 0)  processAL_SECv2016Question13Incorrect();
    if (scoreByQuestion[13] == 0)  processAL_SECv2016Question14Incorrect();
    if (scoreByQuestion[14] == 0)  processAL_SECv2016Question15Incorrect();

    if (scoreByQuestion[15] == 0)  processAL_SECv2016Question16Incorrect();
    if (scoreByQuestion[16] == 0)  processAL_SECv2016Question17Incorrect();
    if (scoreByQuestion[17] == 0)  processAL_SECv2016Question18Incorrect();
    if (scoreByQuestion[18] == 0)  processAL_SECv2016Question19Incorrect();
    if (scoreByQuestion[19] == 0)  processAL_SECv2016Question20Incorrect();


    if (scoreByQuestion[20] == 0)  processAL_SECv2016Question21Incorrect();
    if (scoreByQuestion[21] == 0)  processAL_SECv2016Question22Incorrect();
    if (scoreByQuestion[22] == 0)  processAL_SECv2016Question23Incorrect();
    if (scoreByQuestion[23] == 0)  processAL_SECv2016Question24Incorrect();
    if (scoreByQuestion[24] == 0)  processAL_SECv2016Question25Incorrect();

    if (scoreByQuestion[25] == 0)  processAL_SECv2016Question26Incorrect();
    if (scoreByQuestion[26] == 0)  processAL_SECv2016Question27Incorrect();
    if (scoreByQuestion[27] == 0)  processAL_SECv2016Question28Incorrect();
    if (scoreByQuestion[28] == 0)  processAL_SECv2016Question29Incorrect();
    if (scoreByQuestion[29] == 0)  processAL_SECv2016Question30Incorrect();



    if (scoreByQuestion[30] == 0)  processAL_SECv2016Question31Incorrect();
    if (scoreByQuestion[31] == 0)  processAL_SECv2016Question32Incorrect();
    if (scoreByQuestion[32] == 0)  processAL_SECv2016Question33Incorrect();
    if (scoreByQuestion[33] == 0)  processAL_SECv2016Question34Incorrect();
    if (scoreByQuestion[34] == 0)  processAL_SECv2016Question35Incorrect();

    if (scoreByQuestion[35] == 0)  processAL_SECv2016Question36Incorrect();
    if (scoreByQuestion[36] == 0)  processAL_SECv2016Question37Incorrect();
    if (scoreByQuestion[37] == 0)  processAL_SECv2016Question38Incorrect();
    if (scoreByQuestion[38] == 0)  processAL_SECv2016Question39Incorrect();
    if (scoreByQuestion[39] == 0)  processAL_SECv2016Question40Incorrect();


    if (scoreByQuestion[40] == 0)  processAL_SECv2016Question41Incorrect();
    if (scoreByQuestion[41] == 0)  processAL_SECv2016Question42Incorrect();
    if (scoreByQuestion[42] == 0)  processAL_SECv2016Question43Incorrect();
    if (scoreByQuestion[43] == 0)  processAL_SECv2016Question44Incorrect();
    if (scoreByQuestion[44] == 0)  processAL_SECv2016Question45Incorrect();



    return scoreTotal;

}






