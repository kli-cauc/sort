#include"sort.h"

/*
��[first, last]��Ԫ������

ʱ�临�Ӷȣ�O(n(logn)^2)
�ȶ��ԣ��ȶ�
*/
void Merge(vector<int> &v,int first,int mid,int last){	//[first,last],(mid,last]
	vector<int> buf;

	int ptr1 = first;
	int ptr2 = mid + 1;

	while (ptr1 <= mid && ptr2 <= last){	//�������������Ԫ��
		if (v[ptr1] < v[ptr2]){
			buf.push_back(v[ptr1]);
			++ptr1;
		}
		else{
			buf.push_back(v[ptr2]);
			++ptr2;
		}
	}

	if (ptr1 > mid){	//��һ�����������
		while (ptr2 <= last){
			buf.push_back(v[ptr2]);
			++ptr2;
		}
	}

	if (ptr2 > last){	//�ڶ������������
		while (ptr1 <= mid){
			buf.push_back(v[ptr1]);
			++ptr1;
		}
	}

	unsigned i = 0;
	int j = first;

	while (i < buf.size()){
		v[j] = buf[i];
		++i;
		++j;
	}

	return;
}

void Msort(vector<int> &v,int first,int last){
	if (first >= last){
		return;
	}

	int mid = (last - first) / 2 + first;

	Msort(v, first, mid);

	Msort(v, mid + 1, last);

	Merge(v, first, mid, last);
	cout << v << endl;

	return;
}