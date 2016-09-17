#include"sort.h"

/*
��[low, high]�е�Ԫ������

ʱ�临�Ӷȣ�ƽ��O(nlogn)
			�O(n^2)
�ȶ��ԣ����ȶ�
*/

void Qsort(vector<int> &nums,int low,int high){
	if (low > high){
		cout << "low > high" << endl;
		return;
	}

	//��������ָ��
	int first = low;
	int last = high;

	//�ؼ�ֵ
	int key = nums[first];	//��lowλ���ڿ�

	while (first < last){

		//�����������
		while (first < last && nums[last] >= key){
			--last;
		}
		nums[first] = nums[last];

		while (first < last && nums[first] <= key) {
			++first;
		}
		nums[last] = nums[first];
	}

	//��key�Ż�ȥ
	nums[first] = key;	//first == last

	//�ݹ�
	Qsort(nums, low, last - 1);
	Qsort(nums, first + 1, high);

	return;

}