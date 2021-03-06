#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 4096

int main(int argc, char *argv[]) {
  if(argc<=1) {
    fprintf(stderr,"%s {char|short|int} < input > output\n",argv[0]);
    fprintf(stderr,"Compute the NOT value\n");
    return 1;
  }
 
  if(argv[1][0]=='c') {
    char buf[BUF_SIZE];
    fprintf(stderr,"%s: data type: char\n",argv[0]);
    for(;;) {
      int r = fread(buf,sizeof(char),BUF_SIZE,stdin);
      if(r==0) break;
      {
	int i;
	for(i=0; i<r; i++) {
	  buf[i] = ~buf[i];
	}
      }
      fwrite(buf,sizeof(char),r,stdout);
    }
  }

  if(argv[1][0]=='s') {
    short buf[BUF_SIZE];
    fprintf(stderr,"%s: data type: char\n",argv[0]);
    for(;;) {
      int r = fread(buf,sizeof(char),BUF_SIZE,stdin);
      if(r==0) break;
      {
	int i;
	for(i=0; i<r; i++) {
	  buf[i] = ~buf[i];
	}
      }
      fwrite(buf,sizeof(char),r,stdout);
    }
  }

  if(argv[1][0]=='i') {
    int buf[BUF_SIZE];
    fprintf(stderr,"%s: data type: char\n",argv[0]);
    for(;;) {
      int r = fread(buf,sizeof(char),BUF_SIZE,stdin);
      if(r==0) break;
      {
	int i;
	for(i=0; i<r; i++) {
	  buf[i] = ~buf[i];
	}
      }
      fwrite(buf,sizeof(char),r,stdout);
    }
  }



  return 0;
}
