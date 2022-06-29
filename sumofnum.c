/*
Write a program in C to calculate the sum of numbers from 1 to n using recursion. Go to the editor
Test Data :
Input the last number of the range starting from 1 : 5
Expected Output:

The sum of numbers from 1 to 5 : 
15
*/
  
  #include<stdio.h>
  
  int NNumbers(int n)
  {
      if(n>0)
      {
          return n+NNumbers(n-1);
      }
      
  }
  int main()
  {
      int n,m;
      scanf("%d",&n);
      m=NNumbers(n);
      printf("%d",m);
  }
  