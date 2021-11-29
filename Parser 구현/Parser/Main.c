//2017112238 이서영
#include "Parser.c"
#include "Header.h"

int main() {
	char fileName[] = "magicSquare.mc";
	if (fopen_s(&sourceFile, fileName, "r") == 0) {
		parser(fileName);
	}
	else {
		printf("%s가 존재하지 않습니다..\n", fileName);
	}
	fclose(sourceFile);

	return 0;
}