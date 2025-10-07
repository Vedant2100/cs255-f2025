
undefined4 main(void)

{
  int local_8;
  
  printf("IOLI Crackme Level 0x02\n");
  printf("Password: ");
  scanf("%d",&local_8);
  if (local_8 == 0x52b24) {
    printf("Password OK :)\n");
  }
  else {
    printf("Invalid Password!\n");
  }
  return 0;
}

