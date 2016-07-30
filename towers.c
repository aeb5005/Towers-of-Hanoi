#include<stdio.h>
 
int tower_of_hanoi(int limit, char source_tower, char temporary_tower, char destination_tower) {
  if(limit == 1) {
    printf("\nMove Disk %d From %c To %c\n", limit, source_tower, destination_tower);
      return 0;
    } 
  tower_of_hanoi(limit - 1, source_tower, destination_tower, temporary_tower);
  printf("Move Disk %d From %c To %c\n", limit, source_tower, destination_tower);
  tower_of_hanoi(limit - 1, temporary_tower, source_tower, destination_tower);
  return 0;
}
 
int main() {
  char source_tower = 'A', temporary_tower = 'B', destination_tower = 'C';
  int limit;
  printf("\nEnter The Number of Disks:\t");
  scanf("%d", &limit);
  printf("\nSequence of Disks:\n");
  tower_of_hanoi(limit, source_tower, temporary_tower, destination_tower);
	printf("\n");
  return 0;   
}

/* or, to do bitwise:
int main(int argc,char *argv[]) {
    int max = 1 << atoi(argv[1]);
    for(int x = 1; x < max; x++)
        printf("move a disc from %d to %d\n",(x&x-1)%3,((x|x-1)+1)%3);
}
*/
