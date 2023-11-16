'''
    Assignment: Python Assignment
    Written by: Slava Borysyuk
    Date: 11/16/2023
    Language: Python
    Description:
    A program that asks the user for how many number they're going to 
    enter into a list. Then it asks you to fill up the list. Then finally
    you enter a target value and it goes through the list to see if two numbers
    add up to your target value. 
'''

num_of_int = int(input("Enter the number of intergers you want to enter: "))

list_of_ints = []

for i in range(num_of_int):
    user_input = input(f"Enter the {i + 1} number: ")
    list_of_ints.append(int(user_input))

print("\n")

for element in list_of_ints:
    print(element)
    
target_value = int(input("Enter the target value: "))
found = False

for i in range(len(list_of_ints)):
    if found:
        break
    for j in range(i + 1, len(list_of_ints)):
        if (list_of_ints[i] + list_of_ints[j]) == target_value:
            print(f"The sum of {target_value} is found at position {i} and {j} in the list")
            found = True
            break
           

if not found:
    print(f"No two numbers sum up to {target_value} in the list.")