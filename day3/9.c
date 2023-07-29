#include<stdio.h>
#include<stdlib.h>//exit() r jonno use kora h66e

//ekhane amra try korbo b.txt e file r content ta a.txt r modhye copy kore a.txt r content read kora
int main()
{
    FILE *fptr1, *fptr2;
    char filename[100], c;
    printf("Enter the filenam to open for reading \n");
    scanf("%s", filename);

    //readc korar jonno file ta open kora h66e
    fptr1=fopen(filename, "r");//read korbo bole r likhte holo
    if(fptr1 == NULL){//check kor6i whether j file ta theke content read korte chai6i tate ki6u a6e ki na
        printf("Cannot open file %s \n",filename);
        exit(0);
    }

    printf("Enter the filename to open for writing \n");
    scanf("%s",filename);

    //j file e likhte chai6i sei file ta open kor6i
    fptr2=fopen(filename,"w");
    if(fptr2==NULL){
        printf("Cannot open file %s \n",filename);
        exit(0);
    }

    //file theke contents read korar jnno
    c=fgetc(fptr1);
    while(c != EOF){//eof mane end of file mane ei operation confirms that there is nothing else following in the file 
        fputc(c, fptr2);
        c=fgetc(fptr1);
    }
    printf("\nCoontents copied to %s",filename);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
// fgetc() is used to obtain input from a file single character at a time
// fputc() is used to write a single character at a time to a given file