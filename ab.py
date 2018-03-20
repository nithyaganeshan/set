def main():
    countt = 0
    number = int(input(""))
    while (number > 0):
      number = number//10
      countt = countt + 1
    print (countt)

if __name__ == '__main__':
    main()
