#include <stdio.h>

typedef struct {
	char name[40];
  long int spaceUsedInBytes;
  float spaceUsedInMB;
  float porcentUse;
} employee;

void registerEmployee(employee employees[], int size, long int *count){
  for(int i = 0; i < size; i++){
    printf("\nregister employee %d:", i+1);
    printf("\nname: ");
    gets(employees[i].name);
    printf("space used in bytes: ");
    scanf("%d", &employees[i].spaceUsedInBytes);
    getchar();
    employees[i].spaceUsedInMB = (float)employees[i].spaceUsedInBytes / 1000000.0;
    *count = *count + employees[i].spaceUsedInBytes;
  }
  printf("\n");
}

int main(){
  long int size, count = 0;

  printf("how many employees: ");
  scanf("%d", &size);
  getchar();

  employee employees[size];
  registerEmployee(employees, size, &count);
  
  for(int i = 0; i < size; i++){
    employees[i].porcentUse = (((float)employees[i].spaceUsedInBytes * 100.0) / count);
  }

  printf("Nb. user        space used     %% of use\n");
  for(int i = 0; i < size; i++){
    printf(" %d %s       %.2f MB      %.2f \n", i+1, employees[i].name, employees[i].spaceUsedInMB, employees[i].porcentUse);
  }

}