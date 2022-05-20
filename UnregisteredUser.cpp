#include "Course.h"

Unregistered_User::Unregistered_User(){
		strcpy((FirstName),"");
		strcpy((LastName),"");
		strcpy((Address),"");
		strcpy((DateOfBirth),"");
		strcpy((NIC),"");
		strcpy((Email),"");		
	}

	Unregistered_User::Unregistered_User(char f_name[], char l_name[], char adddress[], char DOB[], char nic[], char* email[]){
		FirstName = f_name;
		LastName = l_name;
		Address = address;
		DateOfBirth = DOB;
		NIC = nic;
		Email = email;
	} 

	void Unregistered_User::Register(){
		
	}

	void Unregistered_User::receiveUsernamePassword(){
		
	}
	
	void Unregistered_User::setFirstName(char f_name[]){
		
	}
	
	char Unregistered_User::getFirstName(){
		return *FirstName;
	}
	
	void Unregistered_User::setLastName(char l_name[]){
		
	}
	
	char Unregistered_User::getLastName(){
		return *LastName;
	}
	
	void Unregistered_User::setAddress(char address[]){
	}
	
	char Unregistered_User::getAdress(){
		return *Address;
	}
	
	void Unregistered_User::setDateOfBirth(char DOB){
		
	}
		
	char Unregistered_User::getDateOfBirth(){
		return *DateOfBirth;
	}
	
	void Unregistered_User::setNIC(char nic[]){
		
	}
	char Unregistered_User::getNIC(){
		return *NIC;
	}

	void Unregistered_User::setEmail(char email[]){
		
	}
	
	char Unregistered_User::geteEmail(){
		return *Email;
	}
