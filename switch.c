#include <stdio.h>

int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (m)
		{
		case 3:
			n++;
		case 4:
			m++;
			break;
		}
	case 4:
		n++;
	}
	printf("m=%d n=%d\n", m, n);
	return 0;
}