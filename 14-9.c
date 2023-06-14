#include <stdio.h>

void main(int argc, char* argv[]) {
	
	FILE *rfp;
	FILE *wfp;
	char str[200];

	if(argc !=3) {
		printf("\n-- copy할 파일명과 생성할 파일명을 작성하시오. --\n");
		return;
	}

	rfp = fopen(argv[1], "r");
	wfp = fopen(argv[2], "w");

	for( ; ; ) {
		fgets(str, 200, rfp);

		if(feof(rfp))
			break;

		fputs(str, wfp);
	}

	fclose(rfp);
	fclose(wfp);
}

