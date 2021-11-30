
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
		printf("%s가 존재하지 않습니다..\n", fileName);
	}
	fclose(sourceFile);

	return 0;
}