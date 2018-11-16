#include<stdio.h>
#include<math.h>

int main()
{
    int a,n,k;          //n指a有多少位
    int i,j,s=1;
    scanf("%d",&a);     //a为输入的整数
    scanf("%d",&k);     //删去k个数字
    n=log10(a)+1;

    int p[n];
    j=a;
    for(i=n-1;i>=0;i--){  //数组p中从0到n-1,分别为：5 6 3 1 7
        p[i]=j%10;
        j/=10;
    }

    for(i=1;i<=k;i++){  //控制删去的个数
        for(j=0;j<n-i;j++){
            if(p[j]<p[j+1]){  //如果递增，删除最后一个数
                continue;
            }else{            //如果递减，删除第一个数
                p[j]=-1;
                break;
            }
        }
        for(j=0;j<n-i;j++){   //删掉的数的位置被赋值-1，现在把-1以后的数
            if(p[j]==-1){     //都往前挪
                p[j]=p[j+1];
                p[j+1]=-1;
            }
        }
    }

    for(i=0;i<n-k;i++){
        printf("%d",p[i]);
    }
    return 0;
}
