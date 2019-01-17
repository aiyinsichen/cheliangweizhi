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
                printf("sahnchucheliangxinxi\n");
                index>0;
                index--;
                printf("shanchuchenggong,dianjihuichejixu\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);

            }
            if (code == 3)
            {
                printf("suoyoucheliangweizhixinxiruxia：\n");

               for(int i = 0; i < index; i++)
            {
                printf("di%dgecheliangdeweizhiwei(%d,%d)\n",i+1,arr[i].x,arr[i].y);
            }

                printf("\ndianjihuichejixu\n");
               char xx;
               scanf("%c",&xx);
                scanf("%c",&xx);
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