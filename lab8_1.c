#include<stdio.h>
#include<string.h>

typedef struct details 
{
    int roll_number;
    char name[50];
    char minor_sub[50];
    char major_sub[50];
    char course_name[50];
}student;

int main()
{
char NAME[50];

student s1={1,"laksh","iks","computer","csbs"};
student s2={2,"arya","uhv","maths","ece"};
student s3={3,"kaneriya","computer","evs","civil"};
student s4={4,"yugank","oc","physics","mechanical"};
student s5={5,"parantap","uhv","ic","ece"};
student s6={6,"priyank","english","eee","electrical"};
student s7={7,"nem","iks","computer","ece"};
student s8={8,"kartik","evs","computer","ce"};
student s9={9,"vedant","iks","evs","civil"};
student s10={10,"ram","computer","biology","biotech"};

printf("Enter the name of a student of which you want data : \n");
gets(NAME);

if(strcmp(NAME, "laksh") == 0)
{
    printf("roll no. : %d\n",s1.roll_number);
    printf("name : %s\n",s1.name);
    printf("minor subject : %s\n",s1.minor_sub);
    printf("major subject : %s\n",s1.major_sub);
    printf("course name : %s\n",s1.course_name);

}
else if(strcmp(NAME, "arya") == 0)
{
    printf("roll no. : %d\n",s2.roll_number);
    printf("name : %s\n",s2.name);
    printf("minor subject : %s\n",s2.minor_sub);
    printf("major subject : %s\n",s2.major_sub);
    printf("course name : %s\n",s2.course_name);

}
else if(strcmp(NAME, "kaneriya") == 0)
{
    printf("roll no. : %d\n",s3.roll_number);
    printf("name : %s\n",s1.name);
    printf("minor subject : %s\n",s3.minor_sub);
    printf("major subject : %s\n",s3.major_sub);
    printf("course name : %s\n",s3.course_name);

}
else if(strcmp(NAME, "yugank") == 0)
{
    printf("roll no. : %d\n",s4.roll_number);
    printf("name : %s\n",s4.name);
    printf("minor subject : %s\n",s4.minor_sub);
    printf("major subject : %s\n",s4.major_sub);
    printf("course name : %s\n",s4.course_name);

}
else if(strcmp(NAME, "parantap") == 0)
{
    printf("roll no. : %d\n",s5.roll_number);
    printf("name : %s\n",s5.name);
    printf("minor subject : %s\n",s5.minor_sub);
    printf("major subject : %s\n",s5.major_sub);
    printf("course name : %s\n",s5.course_name);

}
else if(strcmp(NAME, "priyank") == 0)
{
    printf("roll no. : %d\n",s6.roll_number);
    printf("name : %s\n",s6.name);
    printf("minor subject : %s\n",s6.minor_sub);
    printf("major subject : %s\n",s6.major_sub);
    printf("course name : %s\n",s6.course_name);

}
else if(strcmp(NAME, "nem") == 0)
{
    printf("roll no. : %d\n",s7.roll_number);
    printf("name : %s\n",s7.name);
    printf("minor subject : %s\n",s7.minor_sub);
    printf("major subject : %s\n",s7.major_sub);
    printf("course name : %s\n",s7.course_name);

}
else if(strcmp(NAME, "kartik") == 0)
{
    printf("roll no. : %d\n",s8.roll_number);
    printf("name : %s\n",s8.name);
    printf("minor subject : %s\n",s8.minor_sub);
    printf("major subject : %s\n",s8.major_sub);
    printf("course name : %s\n",s8.course_name);

}
else if(strcmp(NAME, "vedant") == 0)
{
    printf("roll no. : %d\n",s9.roll_number);
    printf("name : %s\n",s9.name);
    printf("minor subject : %s\n",s9.minor_sub);
    printf("major subject : %s\n",s9.major_sub);
    printf("course name : %s\n",s9.course_name);

}
else if(strcmp(NAME, "ram") == 0)
{
    printf("roll no. : %d\n",s10.roll_number);
    printf("name : %s\n",s10.name);
    printf("minor subject : %s\n",s10.minor_sub);
    printf("major subject : %s\n",s10.major_sub);
    printf("course name : %s\n",s10.course_name);

}
else
{
    printf("Then name you entered is not in the list of this 10 students");
}
    return 0;
}
