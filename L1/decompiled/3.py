def shift(s: str):
    """Shift each character in the string by -3 and print the result."""
    shifted = ''.join(chr(ord(c) - 3) for c in s)
    print(shifted)


def test(input_val: int, correct_val: int):
    """Compare input to the correct value and print the shifted message."""
    if input_val == correct_val:
        shift("Sdvvzrug#RN$$$#=,")
    else:
        shift("Lqydolg#Sdvvzrug$")


def main():
    print("IOLI Crackme Level 0x03")
    password = int(input("Password: "))
    test(password, 0x52B24)  # 0x52B24 = 338724 in decimal


if __name__ == "__main__":
    main()
