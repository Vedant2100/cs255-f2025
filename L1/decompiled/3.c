
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
    sVar1 = strlen(param_1); //length of a string 
    if (sVar1 <= local_80) break; //if length of string is less than or equal to index, break
    local_7c[local_80] = param_1[local_80] + -3;  //shift each character by -3
    local_80 = local_80 + 1;
  }
  // so local_7c is the shifted string 
  local_7c[local_80] = '\0'; //null terminate the string
  printf("%s\n",local_7c); 
  return;
}