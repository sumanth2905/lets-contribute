#input: Fizz
#output: F -> Ii -> Zzz -> Zzzz

def repeat_alphabets(input_str: str) -> str:
    output_str = ''

    for i in range(len(input_str)):
        output_str += input_str[i].upper() +  input_str[i].lower() * i + " -> "
    return output_str[:-3]

print(repeat_alphabets("Fizz"))
