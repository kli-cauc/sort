#include"sort.h"

/*
��[first, last]��Ԫ������

ʱ�临�Ӷȣ�O(n^2)
�ȶ��ԣ��ȶ�
*/
void Bsort(vector<int> &nums, int first, int last){
	int high = last;
	for (int i = first; i <= last; ++i){
		for (int j = 0; j < high; ++j){
			if (nums[j] > nums[j+1]){
				swap(nums[j], nums[j + 1]);
			}
		}
		high--;
	}
}