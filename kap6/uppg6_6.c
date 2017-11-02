int storsta_div(int m, int n){
    if(m == n){
        return m;
    }
    else if(m > n){
        return storsta_div(m - n, n);
    }
    else{
        return storsta_div(m, n - m);
    }
}
