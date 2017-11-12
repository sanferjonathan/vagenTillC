
char * las_rad(void){
  char *buffer, *pt;
  size_t bufsize = 0;
  size_t c;
  buffer = (char *) calloc(bufsize , sizeof(char));

  if( buffer == NULL){
        perror("Unable to allocate buffer");
        exit(1);
  }

  printf("SKriv en rad: ");
  c = getline(&buffer, &bufsize, stdin);
  printf("%zu charackters where read. \n", c);
  printf("You typed: %s\n", buffer);

  char array[bufsize];
  for(int i = 0; i < bufsize; i++){
    array[i] = *buffer;
    buffer++;
  }
  pt = array;
  return pt;
}
