def main():
    name = "test"
    name += ".txt"
    print(name)
    fh = open(name, "w")
    fh.write("abc")
    fh.close()

main()
