#include "Student.h"
#include "Course.h"


Enrolment::Enrolment(){
		strcpy((EnrolmentDate),"");
	}
	
	Enrolment::Enrolment(student *estd, course *ecourse, char edate){
		std = estd;
		cours = ecourse;
		EnrolmentDate = edate;	
	}
	
	void Enrolment::setEnrolmentDate(char enroldate[]){
		
	}
	
	char Enrolment::getEnrolmentDate(){
		return *EnrolmentDate;
	}
	
