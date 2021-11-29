void main(){
    int n;
    int magicSquare[255];
    int center, i, j, value, condition,k;
    while(1){
        read(n);
        if(n==0){
            return;
        }
        if(n%2==1 && n>=3 && n<=15){
     	center=(n+1)/2;
  	j=center;
	i=1;
   	value=0;
    	for(k=0;k<n*n; k++){
        	    magicSquare[i*n+j]=++value;
        	    if(value%n==0){
            	       i++;
        	    }
       	    else{
            	       i--;
                     j++;
        	    }
        	   if(i<1){
             	      i=n;
        	   }
        	   if(j>n){
            	      j=1;
        	   }
	}
    	for(i=1;i<=n;i++){
       	   for(j=1;j<=n;j++){
            	      write(magicSquare[i*n+j]);
        	   }
        	   lf();
    	}
	lf();     
        }
    }
}
