// 3_�Լ���ü4 -  137 page ���� ���κг���

       int Add1(int a, int b) { return a + b; }
inline int Add2(int a, int b) { return a + b; }

int main()
{
	int n1 = Add1(1, 2); // ȣ��
						 // ���� 2���� ��ӵ� ��ҿ� �ְ�
						 // Add1 �Լ��� �̵�(call Add1)

	int n2 = Add2(1, 2); // ġȯ
						 // �̺κ��� Add2�� ���� �ڵ�� ��ü
						 // mov eax, 2
						 // add eax, 1
						 // mov n2, eax
						// ���� : �����ϴ�.
						// ���� : Ŀ�ٶ� �Լ��� ������ ġȯ�ϰ� �Ǹ�
						//       �ڵ� �޸� ����,
						//		������ Add2 ������ ���������� �մϴ�.
							

	int(*f)(int, int) = &Add2;

	f(1, 2); // ȣ��ɱ�� ? ġȯ �ɱ�� ?
}

