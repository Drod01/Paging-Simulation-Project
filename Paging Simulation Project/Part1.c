#include <stdio.h>
#include <stdlib.h>

#define PAGESIZE 128
#define FRAMESIZE 1024

int PT[8] = {2, 4, 1, 7, 3, 5, 6, -1};

int main(int argc, char *argv[]) {

  FILE *infile, *outfile;
  unsigned long LA, PA;

  if(argc != 3) {
    printf("Usage: %s <infile> <outfile>\n", argv[0]);
    return 1;
  }

  infile = fopen(argv[1], "rb");
  if(infile == NULL) {
    printf("Error opening input file\n");
    return 1;
  }

  outfile = fopen(argv[2], "wb");
  if(outfile == NULL) {
    printf("Error opening output file\n");
    fclose(infile);
    return 1; 
  }

  while(fread(&LA, sizeof(LA), 1, infile)) {

    int pnum = LA >> 7;
    int dnum = LA & 0x7F;  
    int fnum = PT[pnum];
    PA = (fnum << 7) | dnum;

    printf("LA %lx translated to PA %lx\n", LA, PA);

    fwrite(&PA, sizeof(PA), 1, outfile);
  }

  printf("Total pages: 8\n");

  fclose(infile);
  fclose(outfile);

  return 0;
}