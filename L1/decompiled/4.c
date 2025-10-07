
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
    sVar1 = strlen(param_1); // length of string input
    if (sVar1 <= local_10) {  //if len string less than 0? No , this means 
      printf("Password Incorrect!\n");
      return;
    }
    local_11 = param_1[local_10]; // get char at index local_10
    sscanf(&local_11,"%d",&local_8); 
    local_c = local_c + local_8;
    if (local_c == 0xf) break;
    local_10 = local_10 + 1;
  }
  printf("Password OK!\n");
                    /* WARNING: Subroutine does not return */
  exit(0);
}


undefined4 main(void)

{
  undefined1 local_7c [120];
  
  printf("IOLI Crackme Level 0x04\n");
  printf("Password: ");
  scanf("%s",local_7c);
  check(local_7c);
  return 0;
}
