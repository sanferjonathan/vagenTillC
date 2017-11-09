
int siff_sum(unsigned int tal){
    int sum = 0, temp = 0;
    while(tal != 0){
        temp = tal / 10;
        sum += tal % 10;
        tal = temp;
    }
    return sum;
}