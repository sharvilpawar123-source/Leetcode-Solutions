import pandas as pd

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    new = customers.merge(orders,left_on='id',right_on='customerId',how='left')
    new = new[new['customerId'].isna()]
    new.rename(columns={'name': 'Customers'},inplace=True)
    return new[['Customers']]