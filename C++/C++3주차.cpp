#include <iostream>
#include<array>
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>


using namespace std;

 // 1. ������ �ڸ��� ����ϱ�
/*int countdigits(int num) {
	int a = 0;
	while (num > 0) {
		num = num / 10;
		a++;
	}
	return a;
}
int countdigits1(string num1) {

	int a = stoi(num1);

	return countdigits(a);

}

int main(void) {


	int num = 12345;
	string num1 = "12345";

	cout << "���� 12345 �� �ڸ����� ? ";
	cout << countdigits(num)<<endl;
	cout << "���ڿ� \"12345\"�� �ڸ����� ? ";
	cout << countdigits1(num1);




	return 0;

}*/
//2. Ʈ�� ��ȸ�ϱ� (�ǽ����� Ʈ���� ���� x)

/*typedef struct node* nodePointer;
typedef struct node {
	int data;
	nodePointer left, right;
}node;

//����
void preorder(nodePointer pointer) {
	if (pointer) {
		cout << pointer->data << " ";
		preorder(pointer->left);
		preorder(pointer->right);
	}
}
//����
void inorder(nodePointer pointer) {
	if (pointer) {
		inorder(pointer->left);
		cout << pointer->data << " ";
		inorder(pointer->right);
	}
}
//����
void postorder(nodePointer pointer) {
	if (pointer) {
		postorder(pointer->left);
		postorder(pointer->right);
		cout << pointer->data << " ";
	
	}
}
int main(void) {
	node nodes[10];

	for (int i = 0; i <= 9; i++) {
		nodes[i].data = i;
		nodes[i].left = NULL;
		nodes[i].right = NULL;
	}
	for (int i = 1; i <= 9; i++) {
		if (i % 2 == 0) {
			nodes[i / 2].left = &nodes[i];
		}
		else {
			nodes[i / 2].right = &nodes[i];
		}
	}
	preorder(&nodes[0]);
	cout << endl;
	inorder(&nodes[0]);
	cout << endl;
	postorder(&nodes[0]);
	cout << endl;

	return 0;
		
}*/

// 3.2���� ���� z�������� Ž���ϱ�
int main() {

	
	vector<vector<int>> vec;
	srand((unsigned int)time(NULL));
	

	for (int i = 0; i < 4; i++) {
		vector<int> row;
		
		for (int j = 0; j < 4; j++) {
			row.push_back(rand() % 6);
		}
		vec.push_back(row);
	}
	cout << "2���� ���� ���" << endl;
	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 4; j++) {
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}
	cout << "2���� ���� z���� Ž������" << endl;


	for (int i = 0; i < 4; i++) {
		
		for (int j = 0; j < 4; j++) {
			if (i % 2 == 0 && j % 2 == 0) {
				if(i==0)
				     cout<<vec[0 ][ 0]<<" ";
				else
					cout << vec[i][j + 1] << " ";
			}
			if (i % 2 == 0 && j % 2 == 1) {
				if(i==0)
					cout<< vec[0][1] << " ";		
				else
					cout << vec[i - 1][j - 1] << " ";
			}
			if (i % 2 == 1 && j % 2 == 0) {
				cout << vec[i][ j + 1]<<" ";
			}
			if (i % 2 == 1 && j % 2 == 1) {
				cout << vec[i-1][j + 1]<<" ";
				if(i==1&&j==3)
					cout<<vec[i + 1][ j -3]<<" ";
				if (i == 3 && j == 3)
					break;
			}
		}
		cout << endl;
	}
}
/*int& z(const vector<vector<int>> vec) {

}*/






