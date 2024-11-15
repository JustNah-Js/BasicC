int main(void) {
  int score;
  char name [20];
  printf("Give me your name = ");
    scanf("%s", name);

    printf("Score? = ");
    scanf("%d", &score);
    printf("What's up! %s", name);
  if(score>=48 && score<=50) {
    printf("\nExcellent!");
  }
  else if (score>=43 && score<=47) {
    printf("\nVery Good!");
  
  }
  else if (score>=37 && score<=42) {
    printf("\nGood!");
  
  }
  else if (score>=32 && score<=36) {
    printf("\nAverage");
  
  }
  else if (score>=25 && score<=31) {
    printf("\nBelow average");
    
  }
  else if (score<25) {
    printf("\nPoor");
  
  }
  else{
    printf("\nYoure score is invalid!");
  }
  return 0;
}