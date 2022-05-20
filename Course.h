//Course class
class Course{
	protected:
		char CourseId[5];
		char CourseName[40];
		
	public:
		Course();
		Course(char cid[],char cname[]);
		void DisplayCourseDetails(char cid[],char cname[]);
		void CreateCourse();
		void DeleteCourse();
		void setCourseId(char cid[]);
		char getCourseId();
		void setCourseName(char cname[]);
		char getCourseName();	
};

