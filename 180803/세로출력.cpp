// 10798

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	
	char arr[5][15];

	// 배열의 초기값 설정
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			arr[i][j] = ' ';
		}
	}
	// 배열에 값 입력.
	// i열에 15글자 입력 가능
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	for (int j = 0; j < 15; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			// isalpha()함수는 알파벳인지 아닌지 판별
			// 아스키코드 48부터 57은 숫자 0부터 9까지의 값
			if(isalpha(arr[i][j]) || (arr[i][j] >= 48 && arr[i][j] <= 57))
				cout << arr[i][j];
		}
	}		
}