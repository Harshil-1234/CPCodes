// PDF 1 Q1.
//  #include<stdio.h>
//  #include <stdio.h>
//  #include <math.h>
//  #include <stdlib.h>
//  #define MAX(a, b) (((a) > (b)) ? (a) : (b))
//  int compare(const void *a, const void *b)
//  {
//   return (*(long long int *)a - *(long long int *)b);
//  }

// int main()
// {
//  long long int n, m, b[100001];
//  scanf("%lld%lld", &n, &m);
//  for (long long int i = 0; i < m; i++){
//     scanf("%lld", &b[i]);
//  }

// qsort(b, m, sizeof(long long int), compare);
//  for (long long int i = 0; i < n; i++){
//     printf("%lld ", MAX(abs(i - b[0]), abs(b[m - 1] - i)));
//     printf("\n");
//  }
// }

// PDF 1 Q2
//  #include <stdio.h>
//  #include <string.h>
//  void acm(char *str)
//  {
//  int i, len, temp;
//   len = strlen(str);

//  for (i = 0; i < len / 2; i++)
//  {
//  temp = str[i];
//  str[len - i - 1] = temp;
//  str[i] = str[len - i - 1];

//  }
// }
// int main()
// {
//  char str[50];
//  gets(str);
//  acm(str);
//  printf(str);
// }

// PDF Q

// #include <stdio.h>
// int main(void)
// {
//     long int t, loop, i;
//     scanf("%ld", &t);
//     while (t--)
//     {
//         long int n, m, i_f = 0, i_c = 0, x, y;
//         long long unsigned ans = 0;
//         int state = 'f';
//         scanf("%ld %ld", &n, &m);
//         long int f[n], c[m], tmp = m + n;
//         for (i = 0; i < n; i++)
//             scanf("%ld", f + i);
//         for (i = 0; i < m; i++)
//             scanf("%ld", c + i);

//         for (i = 0; i < tmp; i++)
//         {
//             if (i_f < n && i_c < m)
//             {
//                 x = f[i_f];
//                 y = c[i_c];
//                 if (x > y) //changed here
//                 {
//                     i_c += 1;
//                     if (state == 'f')
//                     {
//                         ans += 1;
//                         state = 'c';
//                     }
//                 }
//                 else
//                 {
//                     i_f += 1;
//                     if (state == 'c')
//                     {
//                         ans += 1;
//                         state = 'f';
//                     }
//                 }
//             }
//             else
//             {
//                 ans += 1;
//                 break;
//             }
//         }
//         printf("%llu\n", ans);
//     }
//     return 0;
// }

// FInal pdf


#include <stdio.h>
int main()
{
    int g = 7;
    int h, i;
    int j = 2;
    if (i == 1 || i == j)
    {
        if (h <= g / 2)

        {
            for (h = 1; h <= g; h++)

            {
                printf(" ");
            }
        }
        else
        {
            printf("* ");
        }
        
        printf("\n");
        for (i = 1; i >= g; i--){
            j--;
        }
    }
    else{
        j++;
        printf("\n");
    }
    
    int n = 7;
    int o =n;
    int p, q;
    if (q == o || q == n + p - 1)
    {
        if (q >= o || q <= n + p - 1 || p == n / 2 + 1)
        {
            for (p = 1; p <= n; p++)
            {
                printf("*");
            }

            for (q = 1; q < 2 * n; q++)
            {
                printf(" ");
            }
        }

        else
        {
            printf("*");
        }
        
        printf("\n");
        
        
    }
    else{
        o++;
    }
    int d = 7;
    int e, f;
    if (f == 1 || f == d && e == f)
    {
        for (e = 1; e <= d; e--)
        {

            for (f = 1; f <= d; f--)
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    else
    {
        printf("* ");
    }
            
    printf("\n");
    int a = 7;
    int b, c;
    if (b == 1 || b == a && c == a / 2 + 1)

    {
        
        for (b = 1; b <= a; b++)
        {
            printf("* ");
        }
        for (c = 1; c >= a; c--)

        {
            printf(" ");
        }
        printf("\n");
    }
    else{
        printf("\n");
    }
    int k = 7;
    int l, m;
    if (l == 1 || l == k && m == k / 2 + 1)
    {
        printf("\n");
        {
            for (m = 1; m >= a; m++)
            {
                printf(" ");
            }
            for (l = 1; l >= k; l--)

            {
                printf("* ");
            }
        }
        
    }
    else{
        printf("\n");
    }
    return 0;
}
