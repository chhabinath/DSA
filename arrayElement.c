/*
Write a program in C to print the array elements using recursion.
Test Data :
Input the number of elements to be stored in the array :6
Input 6 elements in the array :
element - 0 : 2
element - 1 : 4
element - 2 : 6
element - 3 : 8
element - 4 : 10
element - 5 : 12
Expected Output :

The elements in the array are : 2  4  6  8  10  12 
*/
  
  #include<stdio.h>
  
  int arrayElement(int a[],int n)
  {
      if(n>=0)
      {
          arrayElement(a,n-1);//error
          printf("%d ",a[n]);// error
      }
      
  }
  int main()
  {
      int n;
      scanf("%d",&n);
      int a[n];
      for(int i=0;i<n;i++)
      scanf("%d ",&a[i]);
      arrayElement(a,n);
  }
  