
void my_gets(unsigned int b){
    char text[b];
    fgets(text, b, stdin);
    for(int i = 0; i < b; i++){
        if(text[i] == '\n'){
            text[i] = '\0';
        }
    }
    printf("%s", text);
}