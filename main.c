#include <stdio.h>

    struct point{
        int x;
        int y;
        };
        int main()

    {
        int index = 0;
        struct point arr[100];

        printf("huanyingjinrucheliangweizhiguanlixitong\n");
        
        while (1)
        {
            printf("1--tianjiayixiecheliangweizhixinxi\n");
            printf("2--shanchucheliangweizhixinxi\n");
            printf("3--xianshisuoyoucheliangweizhixinxi\n");
            printf("4--liwozuijindecheliangweizhixinxi\n");
            printf("5--tuichuxitong\n");

            printf("qingshuruxiangyingdegongnengbianhao\n");
            int code;
            scanf("%d", &code);

            if (code == 1)
            {
                printf("qingshurucheliangweizhixheyzuobiao：\n");
                int x;
                int y;
                scanf("%d", &x);
                scanf("%d", &y);

                arr[index].x = x;
                arr[index].y = y;

                index++;

                printf("tianjiawancheng,dianjihuichejixu\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
            if (code == 2)
            {
            }
            if (code == 3)
            {
            }
            if (code == 4)
            {
            }
            if (code == 5)
            {
            }
        }
        return 0;
    }