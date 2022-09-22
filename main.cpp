#include <iostream>

int main()
{
	int array[2][3];

	// int *p = array; (x)
	// 위는 p is a pointer to int이기 때문

	int(*p)[3] = &array[0];

	// 위는 p is a pointer to array of 3 int

	int array2[2][3][4]{
		{
			{
				1, 2, 3, 4
			},
			{
				5, 6, 7, 8
			},
			{
				9, 10, 11, 12
			}
		},	
		{
			{
				13, 14, 15, 16
			},
			{
				17, 18, 19, 20
			},
			{
				21, 22, 23, 24
			}
		}
	};

	int(*p2)[3][4] = array2;

	// int (*(*p2)[3])[4];
	// = p2 is a pointer to array of 3 pointer to array of 4 int
	// 각각의 포인터를 직접 표현했다 (내가..)
	// 물론, 의도와는 전혀 다르다

	std::cout << ***p2 << std::endl;
	p2++;
	// 1이 나온다
	std::cout << ***p2 << std::endl;
	//  13이 나온다

}