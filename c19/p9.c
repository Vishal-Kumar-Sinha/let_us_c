#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct data {
	int rollno;
	char name[20];
};
void add_info(int rollno, char *name) {
	struct data e;
	FILE *fp;
	fp = fopen("Students.dat", "rb+");
	if (fp == NULL)
		fp = fopen("Students.dat", "wb");
	e.rollno = rollno;
	strcpy(e.name, name);
	fseek(fp, 0, SEEK_END);
	fwrite(&e, sizeof(e), 1, fp);
	fclose(fp);
}
void display(char *fname) {
	FILE *fp;
	struct data e;
	fp = fopen(fname, "rb");
	if (fp == NULL) {
		puts("Error\n");
		exit(3);
	}
	while (fread(&e, sizeof(e), 1, fp) == 1)
		printf("%2d\t%-10s\n", e.rollno, e.name);
}
void update_list(char *tfile) {
	FILE *tf, *mf, *uf;
	char code, name[20];
	int rollno, i;
	struct data dat_of_mf;
	tf = fopen(tfile, "r");
	if (tf == NULL) {
		puts("Error\n");
		exit(1);
	}
	mf = fopen("Students.dat", "rb");
	if (mf == NULL) {
		puts("Error\n");
		exit(2);
	}
	uf = fopen("NewList.dat", "wb+");
	while (1) {
		code = fgetc(tf);
		if (code == 'D') {
			fseek(tf, 1, SEEK_CUR);
			rollno = fgetc(tf) - 48;
			while (1) {
				fread(&dat_of_mf, sizeof(dat_of_mf), 1, mf);
				if (dat_of_mf.rollno < rollno)
					fwrite(&dat_of_mf, sizeof(dat_of_mf), 1, uf);
				else
					break;
			}
			while (fgetc(tf) == '\n')
				;
			fseek(tf, -1, SEEK_CUR);
		}
		else if (code == 'A') {
			fseek(tf, 1, SEEK_CUR);
			rollno = fgetc(tf) - 48;
			fseek(tf, 1, SEEK_CUR);
			for (i = 0; 1; i++) {
				name[i] = fgetc(tf);
				if (name[i] == '\n' || name[i] == EOF) {
					name[i] = '\0';
					break;
				}
			}
			dat_of_mf.rollno = rollno;
			strcpy(dat_of_mf.name, name);
			fwrite(&dat_of_mf, sizeof(dat_of_mf), 1, uf);
		}
		else{
			while (fread(&dat_of_mf, sizeof(dat_of_mf), 1, mf) == 1)
				fwrite(&dat_of_mf, sizeof(dat_of_mf), 1, uf);
			break;
		}
	}
	fclose(uf);
	fclose(mf);
	fclose(tf);
}
int main() {
	add_info(1, "Azad Ansari");
	add_info(2, "Deepak Mathpal");
	add_info(3, "Vishal Sinha");
	add_info(4, "Siraj");
	add_info(5, "Priya Saxena");
	add_info(6, "Rajkumari");
	add_info(7, "Varun Taneja");
	add_info(8, "Manish Kumar");
	add_info(9, "Shabnam");
	update_list("Transaction.txt");
	display("NewList.dat");
	return 0;
}