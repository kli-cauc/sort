#include"sort.h"

//���vector
ostream& operator<<(ostream &os, const vector<int> &v){
	for (auto i : v){
		os << i << " ";
	}
	return os;
}