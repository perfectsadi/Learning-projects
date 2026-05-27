name="Sadi" #String variable
age=19 # Interger variable 
is_student=False # Boolean variable
height=1.75 # Float variable
favorite_colors=["white", "orchid", "red"] # List variable
person_info={"name": "Sadi", "age": 30, "is_student": False} # Dictionary variable
# This code defines various types of variables in Python, including string, integer, boolean, float, list, and dictionary. Each variable is assigned a value that corresponds to its type.
# Let's try accessing the person_info dictionary to see the output
print("Your name is", person_info["name"])
print("Your age is", person_info["age"])
print("Are you a student?", person_info["is_student"])
print("Your favorite colors are:", ", ".join(favorite_colors)) 
                                    #.join() to separate elements by commas.