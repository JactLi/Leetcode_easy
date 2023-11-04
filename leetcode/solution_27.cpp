#include "solution.h"

//27.�Ƴ�Ԫ��

//����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�
//��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣
//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//
//˵��:
//Ϊʲô������ֵ��������������Ĵ��������� ?
//��ע�⣬�����������ԡ����á���ʽ���ݵģ�����ζ���ں������޸�����������ڵ������ǿɼ��ġ�
//����������ڲ��������� :
//
//ʾ�� 1��
//���룺nums = [3, 2, 2, 3], val = 3
//�����2, nums = [2, 2]
//���ͣ�����Ӧ�÷����µĳ��� 2, ���� nums �е�ǰ����Ԫ�ؾ�Ϊ 2���㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//���磬�������ص��³���Ϊ 2 ���� nums = [2, 2, 3, 3] �� nums = [2, 2, 0, 0]��Ҳ�ᱻ������ȷ�𰸡�
//
//ʾ�� 2��
//���룺nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2
//�����5, nums = [0, 1, 4, 0, 3]
//���ͣ�����Ӧ�÷����µĳ��� 5, ���� nums �е�ǰ���Ԫ��Ϊ 0, 1, 3, 0, 4��ע�������Ԫ�ؿ�Ϊ����˳��
//�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�

//˫ָ�룬��������Ҫ����һ��
int solution_27::removeElement(vector<int>& nums, int val)
{
	int length = nums.size();
	int left = 0, right = 0;
	if (!length)
	{
		return 0;
	}
	while (right<length)
	{
		if (nums[right] != val)
		{
			nums[left] = nums[right];
			left++;
			right++;
		}
		else
			right++;
	}
	return left;
}


//˫ָ���Ż�������ָ�뿪ʼ�ֱ�ָ��������β��leftֵΪval����right����������ָ�������ֻ���������һ��
int solution_27::removeElement_a(vector<int>& nums, int val) {
	int left = 0, right = nums.size();
	while (left < right) {
		if (nums[left] == val) {
			nums[left] = nums[right - 1];
			right--;
		}
		else {
			left++;
		}
	}
	return left;
}

