#include <stdio.h>
 void functionn(int, int [][10]);
 int main( )
{ int s;
    int a[10][10];
    printf("Enter the size of matrix u want only odd plz : ");
    scanf("%d", &s);
    if (s % 2 == 0)
    { printf("Magic square works for an odd numbered s\n");}
    else{ functionn(s, a);
    }return 0;
}
 void functionn(int s, int a[][10])
{
int i = 0, j = s / 2, k;
 for (k = 1; k <= (s*s); ++k) 
    {
        a[i][j] = k;
      i--;
        j++;
  if (k % s == 0) 
        { i += 2; 
            --j; }
        else 
        { if (j == s) 
           {
			j -= s;
            }
            else if (i < 0)
            { i += s;
        }}}
    for (i = 0; i < s; i++)
    {for (j = 0; j < s; j++)
        {printf("%d  ", a[i][j]);}
        printf("\n");
    }printf("\n");
}
