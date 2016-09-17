#include"sort.h"

/*
��[first,last]�е�Ԫ������

ʱ�临�Ӷȣ�O(n^2)
�ȶ��ԣ��ȶ�
*/

void Isort(vector<int> &nums, int first, int last){
	for (int i = first + 1; i <= last; ++i){
		for (int j = i - 1; j >= first; --j){
			if (nums[j + 1] < nums[j])
				swap(nums[j + 1], nums[j]);
			else
				break;
		}
	}
}