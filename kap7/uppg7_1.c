
void swap(char *text, int a){
    char *p, temp;
    p = text;
    int i = 0, j = a - 1;
    while(i < j){
        temp = *(text + i);
        *(text + i) = *(p + j);
        *(p + j) = temp;
        i++;
        j--;
    }
}