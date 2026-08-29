import pandas as pd

def find_employees(employee: pd.DataFrame) -> pd.DataFrame:

    new= employee.merge(employee,right_on='id',left_on='managerId',suffixes=('','_manager')
)
    result=new[new['salary'] > new['salary_manager']]
    result.rename(columns={'name': 'Employee'},inplace=True)
    return result[['Employee']]
