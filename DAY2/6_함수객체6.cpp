// 3_�Լ���ü6
// 
// 
// 1. �Ϲ� �Լ��� �ڽŸ��� Ÿ���� �����ϴ�.
//    signature(����Ÿ�԰� �Ķ����) �� 
//    ������ ��� �Լ��� ���� Ÿ���Դϴ�.

// 2. �Լ� ��ü�� �ڽŸ��� Ÿ���� �ִ�
//    signature( operator() �Լ��� ��ȯŸ�԰� ����)�� �����ص�
//    ��� �Լ���ü�� �ٸ� Ÿ���̴�.



struct Less
{
	inline bool operator()(int a, int b) { return a < b; }
};

struct Greater
{
	inline bool operator()(int a, int b) { return a > b; }
};

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	Less    f1; f1(1, 2); 
	Greater f2; f2(1, 2); 
}



