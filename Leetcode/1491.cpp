sort(salary);
int sum = 0;
for (int i = 1; i < salary.size() - 1; i++)
{
    sum += salary[i];
}

cout << sum / (salary.size - 2) << endl;