int temp=0;
int max_curr=0;

for(int i=1;i<prices.size();i++)
{
  temp=prices[i]-prices[i-1];
  if(max_curr>0)
  {
    max+=temp;
  }
}
return max_curr;
