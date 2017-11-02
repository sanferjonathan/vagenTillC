
double nfak(double n){
    if(n <= 0){
        return 1;
    }
    else{
        return n * nfak(n - 1);
    }
}

double calk(double n, double k){
    double n1 = n, k1 = k, diff, nf, kf, differens;
    diff = n1 - k1;
    nf = nfak(n);
    kf = nfak(k);
    differens = nfak(diff);
    return nf / (kf * differens);
}