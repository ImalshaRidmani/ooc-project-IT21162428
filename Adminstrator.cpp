#include "RegisteredUser.h"
Administrator::Administrator(){
		strcpy((AdminId),"");
		strcpy((AdminName),"");
	}
	
	Administrator::Administrator(char AId[], char AName[]){
		AdminId = AId;
		AdminName = AName;
	}
	
	void Administrator::SendUsernameAndPassword(){
		
	}
	
	void Administrator::GivePermission(){
	
	}

	void Administrator::RejectPermission(){
	
	}
	
	void Administrator::setAdminId(char AID){
		
	}
	
	char Administrator::getAdminID(){
		return *AdminId;
	}
	
	void Administrator::setAdminName(char AName){
		
	} 
	
	char Administrator::getAdminName(){
		return *AdminName;
	}
