#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    int w=1,cons=0,vow=0,sp=0,s=0,num=0;
    char str[100];
    fgets(str,100,stdin);
    for(int j=0;j<=strlen(str);j++)
    {
        if(str[j]>=65 && str[j]<=90)
        {
            str[j]+=32;
        }
    }
    for (int i=0;i<strlen(str);i++)
    {
        if (str[i]==' ')
        {
            w++;
            s++;
        }
        else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vow++;
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            num++;
        }
        else
        {
            char consonants[]="bcdfghjklmnpqrstvwxyz";
            for(int k=0;k<=strlen(consonants);k++)
            {
                if(str[i]==consonants[k])
                {
                    cons++;
                }
            }
        }
    }
    sp=strlen(str)-s-vow-cons-num-1;
    printf("Words=%d\n",w);
    printf("vowels=%d\n",vow);
    printf("consonants=%d\n",cons);
    printf("Space=%d\n",s);
    printf("digits=%d\n",num);
    printf("Special Character=%d",sp);

    return 0;
}