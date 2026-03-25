/*画面に次のように表示するプログラムを作成せよ。
なお、2つ目の文字の頭が揃えられていれば、空白の数は問わない。

Intel : Pentium4
AMD 　: Athlon64*/

#include <stdio.h>

int main(void)
{
    printf("Intel\t: Pentium4\n");/*\n を使って改行させる*/
    printf("AMD\t: Athlon64\n");/*頭揃えのために\tを使う*/
    return 0;
}