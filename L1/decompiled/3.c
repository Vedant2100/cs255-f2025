
undefined4 main(void)

{
  undefined4 local_8;
  
  printf("IOLI Crackme Level 0x03\n");
  printf("Password: ");
  scanf("%d",&local_8);
  test(local_8,0x52b24);
  return 0;
}

void test(int param_1,int param_2)

{
  if (param_1 == param_2) {
    shift("Sdvvzrug#RN$$$#=,");
  }
  else {
    shift("Lqydolg#Sdvvzrug$");
  }
  return;
}
void shift(char *param_1)

{
  size_t sVar1;
  uint local_80;
  char local_7c [120];
  
  local_80 = 0;
  while( true ) {
    sVar1 = strlen(param_1);
    if (sVar1 <= local_80) break;
    local_7c[local_80] = param_1[local_80] + -3;
    local_80 = local_80 + 1;
  }
  local_7c[local_80] = '\0';
  printf("%s\n",local_7c);
  return;
}