#include<stdio.h>

int main()
{
	//One dimensional array
    int a;
    printf("Enter the number of students =");
    scanf("%d",&a);
	int marks[a], sum=0;
	printf("Enter marks of %d students : \n\n",a);
	for (int i=0;i<a;i++)
	{
	printf("Marks of %d student : ", i+1);
	scanf("%d", &marks[i]);
	sum += marks[i];
	}

	int average = sum/a;
	printf("\nThe average marks of %d students are %d", a, average);
	return 0;
}