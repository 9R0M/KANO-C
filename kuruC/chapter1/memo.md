# gccの使い方

```bash
PS C:\Users\tkrly\KANO-C> code .
PS C:\Users\tkrly\KANO-C> cd .\kuruC\chapter1\
PS C:\Users\tkrly\KANO-C\kuruC\chapter1> gcc -o hello.exe .\hello.c
PS C:\Users\tkrly\KANO-C\kuruC\chapter1> ls

    Directory: C:\Users\tkrly\KANO-C\kuruC\chapter1

Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
-a---          2026/03/16    22:30             84 hello.c
-a---          2026/03/16    22:32          89088 hello.exe

PS C:\Users\tkrly\KANO-C\kuruC\chapter1> ./hello.exe
Hello,world
PS C:\Users\tkrly\KANO-C\kuruC\chapter1>
```

/*これがC言語のコメントの書き方*/

C言語のプログラムは **「関数」** の集合として作られる。  
関数の構造は、4つの機能 **「型名　関数名（引数）｛処理｝」** も組み合わせになっている。  
C言語は人間向きの言語であり、コンピュータには理解できないため、C言語をコンピュータ向きの言語に翻訳するソフト、 **「コンパイラ」** がある。  
C言語では、関数には自由な名前を付けることができるが、必ず一つはmainという名前の関数がなくてはならない。  
その理由は **「C言語の関数には順番の概念がない。** 
**Sどの順でも良いが最初に使用する関数がどれか分からなくなるため、一番最初に使用する関数はmainという名前であると決められている。」**  

？mainって重複するの？
A.「しない。」
？mainには名前通りメインテーマ！みたいなのをいれるの？
A.「プログラムのメインの流れで詰め込みたいテーマを詰め込む。
    例えばmainはベルトコンベアで他がロボットアームみたいな感じ。」

書き方の慣習 
**「インデント」**
下記のreturn文のように右にずれているC言語の特徴的な書き方。
階層を表現するために、右にずらして書く方法のこと。

```bash
int main(void)
{
    return 0;
}

```
