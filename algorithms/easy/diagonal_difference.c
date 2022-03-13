int diagonalDifference(int arr_rows, int arr_columns, int** arr) {

int diff=0;
int main_diagonal=0;
int other_diagonal=0;
int i=0,j=0;
for(i=0;i<arr_rows;i++)
{
    for(int j=0;j<arr_columns;j++)
    {
        if(i==j)
        {
             main_diagonal+=arr[i][j];
        }
        
        if(i+j==arr_rows-1)
        {
            other_diagonal+=arr[i][j];
        }
    }
}
diff =abs((main_diagonal)-(other_diagonal));
return diff;
}