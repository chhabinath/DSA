/*
Recursion: a function call itself again and again dorectly and indirectly is called Recursion.

1. Tail Recursion.
2. Head Recursion.
3. Tree Recursion.
4. Nested Recursion.
5. Indirect Recursion.

*/
// 3. Tree Recursion--- more than one function calling.

#include<stdio.h>
#include<stdlib.h>

void fun(int n)//n=3--2--1--0
{
    if(n>0) // (3>0)T--(2>0)T--(1>0)T--(0>0)F
    {
        fun(n-1);
        printf("%d ",n);//1 2 1 3 1 2 1
        fun(n-1);// end 
    }
}
int main()
{
    fun(3);
}

//O/P 1 2 1 3 1 2 1 