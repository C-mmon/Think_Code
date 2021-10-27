int first=0;
int second=-1;
for(int i=0;i<arr.size();i++)
{
  if(arr[i]>first)
  {
    second=first;
    first=i;
  }
  else if(arr[i]<first && arr[i]>second || second==-1)
  {
    second=i;
  }
}
return second;
