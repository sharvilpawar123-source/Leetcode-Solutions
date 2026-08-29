import pandas as pd

def duplicate_emails(person: pd.DataFrame) -> pd.DataFrame:
    duplicate=person[person.duplicated(subset=['email'])]
    duplicate = duplicate[['email']].drop_duplicates()

    return duplicate.rename(columns={'email': 'Email'})
