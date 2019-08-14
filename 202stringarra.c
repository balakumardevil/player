#include <stdio.h>

int main()
{
    char s[100];
    int c=0,i;
    scanf("%s", s);
    while(s[c]!='\0')
    {
        c++;
    }
    for(i=0;i<c;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            printf("%c",s[i]);
        }
    }
    for(i=0;i<c;i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
        {
            printf("%c",s[i]);
        }
    }

    return 0;
}
