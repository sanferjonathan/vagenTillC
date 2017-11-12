
void copy(char text[], int a){
    char copy[a];
    char *p;
    int i = 0;
    for(p = text; p < &text[a]; p++){
      copy[i] = *p;
      i++;
    }
    printf("%s", copy);
}
