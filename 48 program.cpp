#include <stdio.h>
int main()
{
  int number[30];
  int i, n, split_index, j;
  printf("Enter the value of n\n"); /* enter the value */
  scanf("%d", & n);
  printf("enter the numbers\n");
  for (i = 0; i < n; ++i)
    scanf("%d", & number[i]);
  printf("Enter the position of the element to split the array \n"); /* accept the position where user wants to split */
  scanf("%d", & split_index );
  for (i = 0; i < split_index ; ++i)
  {
    number[n] = number[0];
    for (j = 0; j < n; ++j)
    {
      number[j] = number[j + 1]; /* changing the position of the elements */
    }
  }

  printf("The resultant array is\n");
  for (i = 0; i < n; ++i)
  {
    printf("%d\n", number[i]);
  }

}
