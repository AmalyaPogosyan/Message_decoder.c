#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
  int fd = open("foo.txt", O_RDWR);
  if(fd < 0){
    perror("Open\n");
    return 0;
  }
  char ch;
  int size = lseek(fd, 0, SEEK_END);
  lseek(fd, 0, SEEK_SET);
  while(--size){
    pread(fd, &ch, 1, lseek(fd, 0, SEEK_CUR));
    if((ch >= 65 && ch <= 67) || (ch >= 97 && ch <= 99)){
      ch += 23;
    }
    else if((ch > 67 && ch < 91) || (ch > 99  && ch < 123)){
      ch -= 3;
    }
    write(fd, &ch, 1);
  }
  return 0;
}
