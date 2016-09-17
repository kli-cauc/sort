#include"sort.h"

/*
��[first, last]������Ԫ������

ʱ�临�Ӷȣ�ƽ��O(n(logn)^2)
			�O(n^2)
�ȶ��ԣ����ȶ�
*/
void Shellsort(vector<int> &nums, int first, int last){
	int gap = nums.size() / 2;
	while (gap > 0){
		//��������
		for (int i = first + gap; i < last; i++){
			for (int j = i - gap; j >= first; j -= gap){
				if (nums[j + gap] < nums[j])
					swap(nums[j + gap], nums[j]);
				else
					break;
			}
		}
		gap /= 2;
	}
}