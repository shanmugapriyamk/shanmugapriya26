#include<stdio.h>
#include<stdio.h>
int main() 
{ 
char paragraph[1000]; 
int nbChar, nbSentences; 
printf("Enter your a paragraph\n\n\t: "); 
gets(paragraph); 
nbChar = strlen(paragraph);
nbSentences = 0;
for (int i=0; i<nbChar; i++)
{
if (paragraph[i]=='.')
{
nbSentences++;
}
}
printf("\n\nTotal sentences: %d", nbSentences); 
getch();
}
