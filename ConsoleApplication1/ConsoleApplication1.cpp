// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct tree {
	int leaf;
	int branch;
	int root;
	int bird_on_branch;
};
tree dub;
tree klion;
tree buk;
tree nut;
int br[4]{ dub.leaf, klion.branch, buk.root, nut.bird_on_branch};

int main()
{
	dub.leaf = 383;
	dub.branch = 31;
	dub.root = 63;
	dub.bird_on_branch = 19;
	klion.branch = 47;
	buk.root = 35;
	nut.bird_on_branch = 143;
	int *ptrdub_leaf = &dub.leaf;
	int &ref_dub_branch = dub.branch;
	cout << *ptrdub_leaf << endl << ref_dub_branch << endl;
	for (int j = 0; j < 4; j++)
	{
		cout << br[j] << endl;
	};
	cout << k << j << endl;
	system("pause");
	return 0;
}