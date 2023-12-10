#include <stdio.h>
#include <stdbool.h>

int n, d;
int b;
char s[];


int main()
{
    scanf ("%d", &n);
    char c = getchar();
    scanf ("%s", s);
    if (n == 1)
        printf ("%s", s);
    do
    {
        b = 0;
        for (int i = 1; i < n; i++)
            if (s[i] == s[i - 1])
            {
                for (int j = i - 1; j < n - 2; j++)
                    s[j] = s[j + 2];
                n -= 2;
                b = 1;
                for (int  j = 0; j < n; j++)
                    printf ("%c", s[j]);
                printf ("\n");
                break;
            }
    } while (n > 1 && b);
    return 0;
}
