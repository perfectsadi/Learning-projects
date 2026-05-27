name=str(input("Enter your name: ")).title()
                                    #.title() capitalizes the first letter of each word in the input string, making it look more presentable when printed later.
age=int(input("Enter your age: "))
height=float(input("Enter your height in meters: "))
is_student_input = input("Are you a student? (yes/no): ").strip().lower()
                                                        #.strip() removes any leading or trailing whitespace, and .lower() converts the input to lowercase for easier comparison.

#str,int, float, bool are data types in python. They represent different types of values that can be stored in variables. The input() function is used to take user input from the console
# And the int() function is used to convert the input string into an integer for the age variable.

print(f"Hello, {name}! You are {age} years old and {height} meters tall.")
if is_student_input == "yes":
    print("You are a student.")
else:
    print("You are not a student.")
