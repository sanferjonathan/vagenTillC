#include <stdio.h>
#include <math.h>

float function(float temp){
      return(1 / (1 + temp));
}

void simpsons_formel(void){

  int count = 0, value;
  float x[30], y[30], lower_boundary, upper_boundary, width, m = 0, n = 0, result;

  printf("\nEnter value for Lower Boundary:\t");
  scanf("%f", &lower_boundary);
  printf("\nEnter value for Upper Boundary:\t");
  scanf("%f", &upper_boundary);
  printf("\nEnter value for Width:\t");
  scanf("%f", &width);

  value = (upper_boundary - lower_boundary) / width;
  if(value % 2 == 1){
    value = value + 1;
  }
  width = (upper_boundary - lower_boundary) / value;

  printf("\nModified Values:\n");
  printf("\nMid Point:\t%d\n", value);
  printf("\nWidth:\t%f\n", width);
  printf("\nY values\n");

  while(count <= value){
    x[count] = lower_boundary + count * width;
    y[count] = function(x[count]);
    printf("\nY[%d] = %f", count, y[count]);
    count++;
  }
  count = 1;
  while(count < value){
    if(count % 2 == 1){
      m = m + y[count];
    }
    else{
      n = n + y[count];
    }
    count++;
  }
  result = width / 3 * (y[0] + y[value] + 4 * m + 2 * n);
  printf("\n\nSimpson's Rule Integration:\t%f\n", result);
}

void simpsons_formel_alt(void){

  int interval, count;
  float m = 0, n = 0, sum, lower_limit, upper_limit, length;

  printf("\nEnter the Intervals:\t");
  scanf("%d", &interval);
  printf("\nEnter Lower Limit:\t");
  scanf("%f", &lower_limit);
  printf("\nEnter Upper Limit:\t");
  scanf("%f", &upper_limit);

  length = (upper_limit - lower_limit) / interval;
  if(interval%2 == 0){
    for(count = 1; count <= interval - 1; count++){
      if(count%2 == 0){
        m = m + (lower_limit + count * length);
      }
      else{
        n = n + (lower_limit + count * length);
      }
    }
    sum = length / 3 * (lower_limit + upper_limit + 4 * n + 2 * m);
    printf("\nSimpson's Rule Value:\t%f\n", sum);
  }
  else{
    printf("\nThe values are Invalid\n");
    }
}
