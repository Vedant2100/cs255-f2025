
undefined4 main(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_7c [120];
  
  printf("IOLI Crackme Level 0x06\n");
  printf("Password: ");
  scanf("%s",local_7c);
  check(local_7c,param_3);
  return 0;
}

void check(char *param_1,undefined4 param_2)

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
      parell(param_1,param_2);
    }
    local_10 = local_10 + 1;
  }
  printf("Password Incorrect!\n");
  return;
}
undefined4 dummy(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  do {
    if (*(int *)(local_8 * 4 + param_2) == 0) {
      return 0;
    }
    iVar1 = local_8 * 4;
    local_8 = local_8 + 1;
    iVar1 = strncmp(*(char **)(iVar1 + param_2),"LOLO",3);
  } while (iVar1 != 0);
  return 1;
}