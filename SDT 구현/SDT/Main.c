
#include "sdt.c"

int main() {
	char fileName[] = "mod.mc";
	char astName[] = "astFile.txt";

	Node* root;

	if (fopen_s(&sourceFile, fileName, "r") == 0) {
		root = parser(fileName);
		fopen_s(&astFile, astName, "w");
		printTree(root, 3);
	}
	else {
		printf("%s�� �������� �ʽ��ϴ�..\n", fileName);
	}
	fclose(sourceFile);

	return 0;
}