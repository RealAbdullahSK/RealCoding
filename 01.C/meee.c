#include <stdio.h>

int vowel(char give[]);

int main()
{
    char text[]="abdullah";

    printf("%d",vowel(text));

    return 0;
}
int vowel(char give[])
{
    int count=0;
    for (int i = 0; give[i]!='\0'; i++)
    {
        if (give[i]=='a'||give[i]=='e'||give[i]=='i'||give[i]=='o'||give[i]=='u')
        {
            count++;
        } 
        
        
    }
 return count;
    
}