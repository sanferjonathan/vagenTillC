
void printb(unsigned int k, unsigned int p){
    static int tal[50], i = 0;
    if(k > 0){
        tal[i] = k % 2;
        i++;
        return printb(k/2, p);
    }
    while(i < p - 1){
        printf("0");
        --p;
    }
    for(i; i >= 0; i--){
        printf("%d", tal[i]);
    }
}