class Subject {
	private:
		Student *std;
		Lecturer *lec[SIZE];
		Course_coordinator *ccodinator;
		
	protected:
		char SubId[5];
		char SubName[40];
		
	public: 
		Subject();
		Subject(char subid[],char subname[]);
		void DisplaySubjectDetails(char subid[],char subname[]);
		void UpdateSubjectDetails();
		void DeleteSubjectDetails();
		void setSubId(char subid[]);
		char getSubId();
		void setSubName(char subname[]);
		char getSubName();	
};
