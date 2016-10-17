#ifndef HEAP_H
#define HEAP_H

#include<iostream>
#include<random>
using namespace std;

class Heap{
public:
	Heap(int len = 0) :length{ len }{
		arr = new int[len + 1];

		//����Ԫ�����ֵ
		default_random_engine e;
		for (int i = 1; i <= len; ++i){
			arr[i] = e() % 10;
		}
	}

	virtual ~Heap(){
		delete[] arr;
	}
	void print_heap();

	void max_heapify(){
		max_heapify(arr, length, 1);
	}

	void build_max_heap(){
		build_max_heap(arr, length);
	}

	void heap_sort(){
		heap_sort(arr, length);
	}
private:
	
	void max_heapify(int* a,int s,int i);
	void build_max_heap(int * a, int s);
	void heap_sort(int*,int);

	//���ڵ�
	int parent(int i){
		return i / 2;
	}

	//���ӽڵ�
	int left(int i){
		return 2 * i;
	}

	//���ӽڵ�
	int right(int i){
		return 2 * i + 1;
	}

private:
	int * arr;	//Ԫ��

	int length;	//���鳤��
};

#endif