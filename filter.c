int main(void) {

  char passcode;
    printf("\nPlease verify yourself, give me your number[1,2,3 or 4]:");
    scanf("%c", &passcode);
    switch (passcode) {
      case '1':
        printf("\n\nHello user1!\n");
        printf("welcome to Masala Hahe bank!\n");
         break;
      case '2':
        printf("\n\nHello user2!\n");
        printf("welcome to Masala Hahe bank!\n");
          break;
      case '3':
        printf("\n\nHello user3!\n");
        printf("welcome to Masala Hahe bank!\n");
          break;
      case '4':
        printf("\n\nHello user4!\n");
        printf("welcome to Masala Hahe bank!\n");
        break;
      default:
        printf("\n\nI said (1,2,3 or 4) are you stupid?:\n");
        printf("Idiot Alert!\n");
        break;
    }
  
  return 0;
}