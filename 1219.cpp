#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
char a[100000];
while(gets(a))
{
    int n[26]={0},i;
    for(i=0;i<strlen(a);i++)
    {
    	if(a[i]>='a'&&a[i]<='z')
    n[a[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {	
   cout<<char('a'+i)<<":"<<n[i]<<endl;
}cout<<endl;
}
}

