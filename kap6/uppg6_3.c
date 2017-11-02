
double upphoj(double x, double y){
    double z = 1;
    for (int i = 0; i < y; i++){
        z *= x;
    }
    return z;
}