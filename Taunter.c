int main(void) {
  int num;
  char name [20];

    printf("Give me name = ");
    scanf("%s", name);

    printf("Score? = ");
    scanf("%d", &num);
    printf("What's up! %s", name);
  if(num>49) {
    printf("\nHoly sh_t you're insane!!");
  }
  else if (num<=49) {
    printf("\nHahahahah, you failed");
  
  }
  else{
    printf("\nWe will meet again.\n");
  }

  return 0;
}