#include<stdio.h>
int main()
{
	struct date
	{
		int year;
		int month;
		int day;
	};
	struct student 
	{
		int id;
		char name[20];
		int sex;
		int age;
		struct date birth;
		float score;
	}stu1={01,"lyc",1,18},stu2;
	stu1.birth.year=2333;
	stu1.birth.month=23;
	stu1.birth.day=23;
	printf("%d\n%s\n%d\n%d\n",stu1.id,stu1.name,stu1.sex,stu1.age);
	return 0;
}