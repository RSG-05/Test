int gloarr[10];

int sum_int_array (int max_count)
{
  int i;
  int tot = 0;

  if (max_count > 10)
  {
    max_count = 10;
  }

  for (i=0;i<max_count;i++)
  {
    tot += gloarr[i];
  }

  return tot;
}

void set_int_array (int val,int max_count)
{
  int i;

  if (max_count > 10)
  {
    max_count = 10;
  }

  for (i=0;i<max_count;i++)
  {
    gloarr[i] = val;
  }
}

/*
 * Copyright (c) 2022 LDRA Ltd.
 */
