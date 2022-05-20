class Course_coordinator : public Registered_user{
	protected : 
		char Cc_Id[10];
		
	public:
		Course_coordinator();
		Course_coordinator(char ccid[]);
		void DispalyCourseCoordinatorDetails(char ccid[]);
		void AddCourseCoordinatorDetails();
		void RemoveCourseCoordinatorDetails();
		void reschedules();
		void setCc_Id(char ccid[]);
		char getCc_Id();	
};
