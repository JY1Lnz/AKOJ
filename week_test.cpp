#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d",&m);
	while (m--)
	{
		int x;
		int sum,cur;
		scanf("%d",&n);
		scanf("%d",&x);
		cur = x;
		sum = cur;
		while (--n)
		{
			scanf("%d",&x);
			cur = cur<0?x:cur+x;
			if (sum < cur)
			{
				sum = cur;
			}
		}
		printf("%d\n",sum);
	}
}
*/

//¾«¼òËã·¨
int main()
{
    i
}
