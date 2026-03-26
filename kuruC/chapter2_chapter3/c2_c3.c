/*書き方の慣習*/


/*3章*/
#include <stdio.h>
int sub(void)
{
    printf("Hello,world");
    return 0;
}

#include <stdio.h>

/*エスケープシーケンス1*/
int third(void)/*￥と\が同じ改行の意味を持つ。*/
{
    printf("Windows\tMicrosoft\n");/*\n を使って改行させる*/
    printf("MacOS\tApple\n");/*頭揃えのために\tを使う*/
    return 0;
}

int main(void)
{
    sub();
    printf("\n");
    third();
    return 0;
}