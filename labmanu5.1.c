#include<stdio.h>
int main()
{
    char ch, M,A,B,C;
    printf ("Enter the character: ");
    scanf("%c", &ch);
    switch (ch)
    {
  case 'M':
    printf("\n500/KG");
    break;
  case 'A':
    printf ("\n250\KG");
    break;
  case 'B':
    printf ("\n130/KG");
    break;
    case 'C':
        printf ("\n270/KG");
        break;
        default:
        printf ("\nInvalid price");
        break;








    }






}
