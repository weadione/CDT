
#include "sdt.c"

int main() {
	char fileName[] = "mod.mc";
	char astName[] = "astFile.txt";

	Node* root;

	if (fopen_s(&sourceFile, fileName, "r") == 0) {
		root = parser(fileName);
		printNode(root, 1);
	}
	else {
		printf("%s�� �������� �ʽ��ϴ�..\n", fileName);
	}
	fclose(sourceFile);

	return 0;
}