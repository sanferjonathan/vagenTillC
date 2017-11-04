static unsigned long int next = 1;

int krona_klave(int tal){
     if(tal % 2 == 1){
         return 1;
     }
     else{
         return 0;
     }
}

int rand(void){
    next = next * 1103515245 + 12345;
    return (unsigned int) (next/65536) % 32768;
}

void srand(unsigned int seed){
    next = seed;
}