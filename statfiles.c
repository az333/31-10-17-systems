#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <time.h>

int main() {
  struct stat statfile;
  stat ("stat.txt", &statfile);
  printf ("File Size: %lld\n", statfile.st_size);
  printf ("Mode: %d\n", statfile.st_mode);
  printf ("Time of last access: %s\n", ctime(&statfile.st_atime));

}
