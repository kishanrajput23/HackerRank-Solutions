def print_formatted(number):
    spacePad = len(str(bin(number))) 
    for i in range(1, number + 1): 
        floatVar = str(i) 
        octVar = str(oct(i)[2:]) 
        hexVar = str(hex(i)[2:]).upper() 
        binVar = str(bin(i)[2:]) 
        formatFloat = ((" " * (spacePad - len(str(floatVar)) - 2)) + floatVar) 
        formatOct = ((" " * (spacePad - len(str(octVar)) - 2)) + octVar) 
        formatHex = ((" " * (spacePad - len(str(hexVar)) - 2)) + hexVar) 
        formatBin = ((" " * (spacePad - len(str(binVar)) - 2)) + binVar) 
        print(formatFloat + " " + formatOct + " " + formatHex + " " + formatBin)

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)