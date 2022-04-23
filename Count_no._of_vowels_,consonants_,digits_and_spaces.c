#include<stdio.h>
int main()
{
    int i,v=0,ws=0,c=0,d=0;
    char str[100];
    scanf("%[^
]s",&str[i]);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            v++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            d++;
        }
        else if(str[i]==' ')
        {
            ws++;
        }
        else
        {
            c++;
        }
      }
      printf("Vowels: %d
",v);
      printf("Consonants: %d
",c);
      printf("Digits: %d
",d);
      printf("White spaces: %d",ws);
}