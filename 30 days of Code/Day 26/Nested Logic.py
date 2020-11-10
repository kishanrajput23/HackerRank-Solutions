# Enter your code here. Read input from STDIN. Print output to STDOUT
actual_date, actual_month, actual_year = map(int, input().split())
expected_date, expected_month, expected_year = map(int, input().split())

if (actual_year, actual_month, actual_date) <= (expected_year, expected_month, expected_date):
    print(0)
elif (actual_year, actual_month) == (expected_year, expected_month):
    print(15 * (actual_date - expected_date))
elif actual_year == expected_year:
    print(500 * (actual_month - expected_month))
else:
    print(10000)