#ifndef SORT_H
#define SORT_H

#include<vector>
#include<iostream>

using namespace std;


//��������
void Qsort(vector<int> &nums, int low, int high);

//�鲢����
void Msort(vector<int> &nums, int first, int last);

//ð������
void Bsort(vector<int> &nums, int first, int last);

//ѡ������
void Ssort(vector<int> &nums, int first, int last);

//��������
void Isort(vector<int> &nums, int first, int last);

//ϣ������
void Shellsort(vector<int> &nums, int first, int last);

//������
//Ͱ����
//��������
ostream& operator<<(ostream &os, const vector<int> &v);
#endif