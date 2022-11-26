int gameWithCells(int n, int m) {
    int x=n/2,y=m/2;
   if(n&1)
   {
    x+=1;
   }
   if(m&1)
   {
       y+=1;
   }
   return x*y;
}
