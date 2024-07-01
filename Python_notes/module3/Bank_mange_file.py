"""
Introduction and Explanation:
This program simulates a basic bank management system using file handling in Python. It demonstrates how to create, deposit to, and withdraw from bank accounts while storing account information in a text file.

Essential Points:
- File handling operations (`open()`, `read()`, `write()`, `close()`) are used to store and retrieve customer account information.
- Data is stored in a simple format (CSV-like) for easy manipulation and retrieval.

Summary:
Using file handling for bank management applications allows for persistent storage of customer data, enabling functionalities like account creation, balance inquiry, and transaction history recording.
"""

# Function to create a new bank account
def create_account(account_number, name, balance):
    with open('bank_accounts.txt', 'a') as file:
        file.write(f"{account_number},{name},{balance}\n")
    print(f"Account created successfully for {name} with account number {account_number} and initial balance {balance}.")

# Function to deposit money into an account
def deposit(account_number, amount):
    updated_accounts = []
    with open('bank_accounts.txt', 'r') as file:
        for line in file:
            parts = line.strip().split(',')
            if parts[0] == account_number:
                new_balance = int(parts[2]) + amount
                parts[2] = str(new_balance)
            updated_accounts.append(','.join(parts))
    
    with open('bank_accounts.txt', 'w') as file:
        file.write('\n'.join(updated_accounts) + '\n')
    print(f"Deposit of {amount} made to account {account_number}.")

# Function to withdraw money from an account
def withdraw(account_number, amount):
    updated_accounts = []
    with open('bank_accounts.txt', 'r') as file:
        for line in file:
            parts = line.strip().split(',')
            if parts[0] == account_number:
                current_balance = int(parts[2])
                if amount <= current_balance:
                    new_balance = current_balance - amount
                    parts[2] = str(new_balance)
                    updated_accounts.append(','.join(parts))
                    print(f"Withdrawal of {amount} made from account {account_number}.")
                else:
                    print(f"Insufficient funds in account {account_number}.")

    with open('bank_accounts.txt', 'w') as file:
        file.write('\n'.join(updated_accounts) + '\n')

# Example usage of bank management functions
create_account('1001', 'Alice', 5000)
deposit('1001', 1000)
withdraw('1001', 2000)
