#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int building[n];
	for(int i = 0; i < n; i++)
		{
			scanf("%d", &building[i]);
		}

	int q;
	scanf("%d", &q);

	for(int i = 0; i < q; i++)
		{
			int p;
			scanf("%d", &p);
			p += building[0];

			int can = 1;

			for(int j = 1; j < n; j++)
				{
					if(p < building[j])
					{
						can = 0;
						break;
					}
				}
			if(can == 0)
			{
				printf("No way Home\n");
			}
			else
			{
				printf("Homecoming\n");
			}

		}

	return 0;
}