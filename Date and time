#include<stdio.h>
#include<stdlib.h>
int isLeapYear(int y)
{
    if(y % 4 == 0)
    {
	if(y % 100 == 0)
	{
	    if(y % 400 == 0)
	    {
		return 1;
	    }
	    else
	    {
		return 0;
	    }
	}
	else
	{
	    return 1;
	}
    }

    return 0;
}

int is_valid_date_time(int date_time_arr[], int n)
{
    int month,day;
    int days_in_each_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(n >= 2)
    {
	month = date_time_arr[0] * 10 + date_time_arr[1];
	if(!(month >= 1 && month <= 12))
	{
	    return 0;
	}
    }

    if(n >= 4)
    {

	days_in_each_month[1] += isLeapYear(2018);

	day = date_time_arr[2] * 10 + date_time_arr[3];
	if(!(day >= 1 && day <= days_in_each_month[month - 1]))
	{
	    return 0;
	}
    }

    if(n >= 6)
    {
	int hour = date_time_arr[4] * 10 + date_time_arr[5];
	if(!(hour >= 0 && hour <= 23))
	{
	    return 0;
	}
    }

    if(n >= 8)
    {
	int min = date_time_arr[6] * 10 + date_time_arr[7];
	if(!(min >= 0 && min <= 59))
	{
	    return 0;
	}
    }

    return 1;
}

int isFound = 0;
int max_time_in_2018[8] = {0};

int is_max(int inp_arr[])
{
int i;
    for(i = 0; i < 8; i ++)
    {
	if(max_time_in_2018[i] == inp_arr[i])
	{
	    continue;
	}
	else if(max_time_in_2018[i] >inp_arr[i])
	{
	    return 0;
	}
	else
	{
	    return 1;
	}
    }

    return 0;
}

void time_computing(int inp_arr[],int date_time_arr[], int sel_cnt,int used[])
{
int i;
    if(!is_valid_date_time(date_time_arr, sel_cnt))
    {
	return;
    }

    if(sel_cnt == 8)
    {
	if(is_valid_date_time(date_time_arr, sel_cnt))
	{
	    isFound = 1;
	    if(is_max(date_time_arr))
	    {
		for(i = 0; i < 8; i++)
		{
		    max_time_in_2018[i] = date_time_arr[i];
		}
	    }
	}

	return;
    }

    // Select current item
    for(i = 0; i< 12; i++)
    {
	if(used[i] == 1)
	{
	    continue;
	}

	date_time_arr[sel_cnt] = inp_arr[i];
	used[i] = 1;
	time_computing(inp_arr,date_time_arr, sel_cnt + 1, used);
	used[i] = 0;
    }
}

int main()
{
    int day,inp_arr[12], date_time_arr[8],used[8];
//    clrscr();
    scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
	  &inp_arr[0],&inp_arr[1],&inp_arr[2],&inp_arr[3],
	  &inp_arr[4],&inp_arr[5],&inp_arr[6],&inp_arr[7],
	  &inp_arr[8],&inp_arr[9],&inp_arr[10],&inp_arr[11]);

     used[12] =0;

    time_computing(inp_arr, date_time_arr, 0, used);
    if(isFound == 1)
    {
	printf("%d%d/%d%d %d%d:%d%d",
	 max_time_in_2018[0],max_time_in_2018[1],max_time_in_2018[2],max_time_in_2018[3],
	 max_time_in_2018[4],max_time_in_2018[5],max_time_in_2018[6],max_time_in_2018[7]);
    }
    else
    {
	printf("0");
    }
  //getch();
    return 0;
}
