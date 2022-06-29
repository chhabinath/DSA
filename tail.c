/*
Recursion: a function call itself again and again dorectly and indirectly is called Recursion

1. Tail Recursion
2. Head Recursion
3. Tree Recursion
4. Nested Recursion
5. Indirect Recursion

*/
// 1. Tail Recursion

#include<stdio.h>
#include<stdlib.h>

void fun(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        n--;
        fun(n);
    }
}
int main()
{
    fun(3);
}