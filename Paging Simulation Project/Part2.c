#include <stdio.h>
#include <stdlib.h>

#define PAGESIZE 128
#define FRAMESIZE 1024 
#define FRAMES 8

typedef struct {
  int valid_bit;
  int frame_number;
} PTE;

int main(int argc, char *argv[]) {

  FILE *infile, *outfile;
  unsigned long LA, PA;

  PTE PT[32];
  int freeframes[FRAMES] = {0, 1, 1, 1, 1, 1, 1, 1};
  int revmap[FRAMES];
  int LRUcount[32];

  for(int i=0; i<32; i++) {
    PT[i].valid_bit = 0;
    LRUcount[i] = 0;
  }
  
  int pagefaults = 0;

  while(fread(&LA, sizeof(LA), 1, infile)) {

    // Page table logic  
    // Update pagefaults

    fwrite(&PA, sizeof(PA), 1, outfile);
  }

  printf("Part 2 page faults: %d", pagefaults);

  return 0;
}