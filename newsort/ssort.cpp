#include"sort.h"

/*
��[first, last]�����ڵ�Ԫ������

ʱ�临�Ӷȣ�O(n^2)
�ȶ��ԣ����ȶ�
*/
void Ssort(vector<int> &nums, int first, int last){
	for (int i = first; i <= last; ++i){
		int index = i;
		for (int j = i; j <= last; j++){
			if (nums[index] > nums[j]){
				index = j;
			}
		}
		swap(nums[i], nums[index]);
	}
}