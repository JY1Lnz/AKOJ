#include<stdio.h>
#include<math.h>

int main()
{
    int a,n,k;          //nָa�ж���λ
    int i,j,s=1;
    scanf("%d",&a);     //aΪ���������
    scanf("%d",&k);     //ɾȥk������
    n=log10(a)+1;

    int p[n];
    j=a;
    for(i=n-1;i>=0;i--){  //����p�д�0��n-1,�ֱ�Ϊ��5 6 3 1 7
        p[i]=j%10;
        j/=10;
    }

    for(i=1;i<=k;i++){  //����ɾȥ�ĸ���
        for(j=0;j<n-i;j++){
            if(p[j]<p[j+1]){  //���������ɾ�����һ����
                continue;
            }else{            //����ݼ���ɾ����һ����
                p[j]=-1;
                break;
            }
        }
        for(j=0;j<n-i;j++){   //ɾ��������λ�ñ���ֵ-1�����ڰ�-1�Ժ����
            if(p[j]==-1){     //����ǰŲ
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
