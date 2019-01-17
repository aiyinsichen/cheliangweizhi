#include <stdio.h>
#include <math.h>
struct point
{
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
            index > 0;
            index--;
            printf("shanchuchenggong,dianjihuichejixu\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);

        }
        else{
             printf("无车辆位置信息，删除失败，点击回车继续\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
        }
        if (code == 3)
        {
            printf("suoyoucheliangweizhixinxiruxia：\n");

            for (int i = 0; i < index; i++)
            {
                printf("di%dgecheliangdeweizhiwei(%d,%d)\n", i + 1, arr[i].x, arr[i].y);
            }

            printf("\ndianjihuichejixu\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 4)
        {
            printf("qingshurudangqianweizhizuobiao:\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);

            double min = 100000;
            int carID = 0;
            for(int i=0;i<index;i++){
                int dx = x - arr[i].x;
                int dy = y - arr[i].y;
                double l =sqrt(dx*dx+dy*dy);

                if(min > 1){
                    min = 1;
                    carID = i;
                }
            }
            printf("yonghudangqiandewqeizhiyudi%dgechedejuliwei%lf,shizuixiaojuli\n",carID+1,min);


            printf("\ndianjihuichejixu\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if (code == 5)
        {
            printf("tuichuchenggong\n");
            break;
        }
    }
    return 0;
}