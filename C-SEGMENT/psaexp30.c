#include <stdio.h>

int main()
{
    int VIVAarr[] = {11, 13, 21, 3, 12, 8, 9};
    int size = sizeof(VIVAarr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        int exist = 0;

        for (int j = i + 1; j < size; j++)
        {
            if (VIVAarr[j] > VIVAarr[i])
            {
                printf("%d = %d\n", VIVAarr[i], VIVAarr[j]);
                exist = 1;
                break;
            }
        }

        if (!exist)
        {
            printf("%d -> -1\n", VIVAarr[i]);
        }
    }

    return 0;
}
