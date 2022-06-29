/*
3. Write a program in C to Print Fibonacci Series using recursion. Go to the editor
Test Data :
Input number of terms for the Series (< 20) : 10
Expected Output:

 Input number of terms for the Series (< 20) : 10                                
 The Series are :                                                                
 1  1  2  3  5  8  13  21  34  55 
*/
  
  #include<stdio.h>
  
  int Fibonacci(int n,int a,int b)
  {
      int c;
      if(n>0)
      {
          c=a+b;
          a=b;
          b=c;
          printf("%d ",c);
          Fibonacci(n-1,a,b);
      }
      
  }
  int main()
  {
      int n;
      scanf("%d",&n);
      printf("0 1 ");
      Fibonacci(n,0,1);
  }
  