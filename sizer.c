#include <stdio.h>

main()
{
    char sizer[26] = { 'v','g','g','m','d','b','c','o','o','c','v','o','d','n','v','g','g','a','j','m','o','j','y','v','t' };
    for (int n = 1; n <= 26; n++)
    {
        for (int i = 0; i < 27; i++)
        {
            if (i < 26) {
                if (isalpha(sizer[i]))
                {
      
                    if (sizer[i] == 97)
                        sizer[i] = 122;
                    else
                        sizer[i]--;
                }
            }
        }
        printf("%d round : %s\n", n, sizer);
    }
    return 0;
}