def decimal_to_bin(number):
    return bin(number).replace("0b","")


def bin_to_decimal(number):
    return int(number,2)

print("Convert decimal to binary")
number = int(input("input decimal number = "))
print("Your number in binary system will be {0}".format(decimal_to_bin(number)))
print("Convert binary to decimal")
number = str(input("input binary number = "))git
print("Your number in decimal system will be {0}".format(bin_to_decimal(number)))




