//#include <stdio.h>
//
//
//int check(int num[], int max);
//void recheck(int num[], int max);
//int num[100001];
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int max = n;
//
//
//
//
//
//
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &num[i]);
//    }
//    if (max == 1)
//    {
//        printf("+\n");
//        printf("-");
//    }
//    else if (check(num, max) == 0)
//        printf("NO");
//    else
//        recheck(num, max);
//
//
//}
//
//int check(int num[], int max)
//{
//
//
//    for (int i = 0; i < max; i++)
//    {
//        if (num[i] == max)
//        {
//            if (i != max - 1)
//            {
//                for (int j = i; j < max - 1; j++)
//                {
//                    if (num[j] < num[j + 1])
//                        return 0;
//                }
//                return 1;
//            }
//            else
//                return 1;
//
//        }
//        else
//        {
//
//            if (num[i] - 1 > num[i + 1])
//                return 0;
//        }
//    }
//
//}
//
//void recheck(int num[], int max)
//{
//    int top = 0;
//
//    for (int i = 0; i < max; i++)
//    {
//        if (num[i] == max)
//        {
//            for(int j=0;j<num[i]-top;j++)
//            {
//                printf("+\n");
//            }
//
//            for (int j = i; j < max-1; j++)
//            {
//                printf("-\n");
//
//            }
//            printf("-");
//            break;
//        }
//        else if (top < num[i])
//        {
//            for (int j = 0; j < num[i] - top; j++)
//            {
//                printf("+\n");
//            }
//            printf("-\n");
//            top = num[i];
//
//        }
//        else if (top > num[i])
//            printf("-\n");
//    }
//}