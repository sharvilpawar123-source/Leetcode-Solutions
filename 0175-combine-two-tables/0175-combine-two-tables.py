import pandas as pd

def combine_two_tables(person: pd.DataFrame, address: pd.DataFrame) -> pd.DataFrame:
    merged_data=person.merge(address,on='personId',how='left')
    merged_data=merged_data[['firstName','lastName','city','state']]
    return merged_data