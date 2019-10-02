/**************************
Josh Kennerly
jdkenne
Lab 4
Lab Section 003
Nushrat
************************/
#include "stdio.h"
#include "stdlib.h"
#include "crypto.h"

int main(int argc, char const *argv[]) {
  FILE* image_file  = fopen(argv[1], "r");
  FILE* key_file    = fopen(argv[2], "r");
  FILE* out_image   = fopen(argv[3], "w");

  // Read image
  header_t header;
  img_t img;
  read_header(image_file, &header);
  read_image(image_file, &img, &header);

  // Read secret key
  int seed;
  read_seed(key_file, &seed);
  sp_rand(seed);

  /** NO ERROR HERE **/
  printf("Encrypt[1] or Decrypt[2]?\n");
  int choice;
  while(true) {
    scanf("%d",&choice);
    if(choice == 1 || choice == 2) {
      sym_crypt(out_image, &header, &img, choice);
      break;
    } else {
      printf("Please enter 1 or 2\n");
    }
  }
  /********************/
  for (int i = 0; i < header.h; i++) {
    free(img.data[i]);
}
  free(img.data);
  free(header.type);
  fclose(image_file);
  fclose(key_file);
  fclose(out_image);

  return 0;
}
