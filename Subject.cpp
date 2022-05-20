	#include "Student.h"
	#include "Lecturer.h"	
	Subject::Subject(){
		strcpy((SubId),"");
		strcpy((SubName),"");
	}

	Subject::Subject(char sunid[], char subname[]){
		SubId = subid;
		SubName = subname;
	}
	
	void Subject::DisplaySubjectDetails(){
		
	}

 	void Subject::UpdateSubjectDetails(){
 		
	}
	
	void Subject::DeleteSubjectDetails(){
		
	}
	
	void Subject::setSubId(char subid[]){
		
	}

	char Subject::getSubId(){
		return *SubId;
	}
	
	void Subject::setSubName(char subname[]){
		
	}
	
	char Subject::getSubName(){
		return *SubName;
	}
