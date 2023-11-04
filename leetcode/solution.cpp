#include "solution.h"

//696. �����������Ӵ�
//����һ���ַ��� s��ͳ�Ʋ����ؾ�����ͬ���� 0 �� 1 �ķǿգ����������ַ�����������������Щ���ַ����е����� 0 ������ 1 ���ǳ��������ġ�
//�ظ����֣���ͬλ�ã����Ӵ�ҲҪͳ�����ǳ��ֵĴ�����

//����ʱ������
int isSimilar(string s, int i, int j);

int solution::countBinarySubstrings(string s)
{
	int count = 0;
	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i] != s[i + 1])
		{
			int j = i + 1;
			count += isSimilar(s, i, j);
		}
	}
	return count;
}

int isSimilar(string s, int i, int j)
{
	i--;
	j++;
	if (i > -1 && j < s.size())
	{
		if (s[i] == s[i + 1] && s[j] == s[j - 1])
		{
			return isSimilar(s, i, j) + 1;
		}
	}
	return 1;
}

//1089. ��д��
//����һ�����ȹ̶����������� arr �����㽫�������г��ֵ�ÿ���㶼��дһ�飬���������Ԫ������ƽ�ơ�
//ע�⣺�벻Ҫ�ڳ��������鳤�ȵ�λ��д��Ԫ�ء������������� �͵� ���������޸ģ���Ҫ�Ӻ��������κζ�����

void solution::duplicateZeros(vector<int>& arr)
{
	vector<int> temp;
	for (int i = 0; temp.size() < arr.size(); i++)
	{
		temp.push_back(arr[i]);
		if (arr[i] == 0 && temp.size() < arr.size())
		{
			temp.push_back(arr[i]);
		}
	}
	arr = temp;
}