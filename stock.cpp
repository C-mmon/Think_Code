int maxcurr=0;
int max_so_far=0;
  for(int i=1;i<prices.size();i++)
  {
  maxcurr=max(0,max+=prices[i]-prices[i-1));
  max_so_far=max(max_so_far,maxcurr);
  }
return max_so_far;
