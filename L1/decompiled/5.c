
undefined4 main(void)

{
  undefined1 local_7c [120];
  
  printf("IOLI Crackme Level 0x05\n");
  printf("Password: ");
  scanf("%s",local_7c);
  check(local_7c);
  return 0;
}

void check(char *param_1)

{
  size_t sVar1;
  char local_11;
  uint local_10;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_10 = 0;
  while( true ) {
    sVar1 = strlen(param_1);
    if (sVar1 <= local_10) break;
    local_11 = param_1[local_10];
    sscanf(&local_11,"%d",&local_8);
    local_c = local_c + local_8;
    if (local_c == 0x10) {
      parell(param_1);
    }
    local_10 = local_10 + 1;
  }
  printf("Password Incorrect!\n");
  return;
}
