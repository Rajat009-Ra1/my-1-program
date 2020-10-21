#include<stdio.h>
#define Pi 3.14  
void main()
{
  float r;
  float area;
  printf("Enter the value of r:");
  scanf("%f",&r);
  area=Pi*r*r;
  printf("The area of circle is:%5.2f",area);
}
