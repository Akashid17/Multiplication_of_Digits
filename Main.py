
def MultDigits(iNo):

    if iNo < 0:
        iNo = -iNo
    
    iMult = 1

    if iNo == 0:
        iMult = 0

    while iNo != 0:

        if(iNo%10 != 0):
            iMult *= iNo%10

        iNo = int(iNo/10)
    return iMult

def main():
    iValue = int(input("Enter Number\n"))
    iRet = MultDigits(iValue)
    print(iRet)

if __name__ == "__main__":
    main()