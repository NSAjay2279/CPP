def main():
    print_column(3)

def print_column(size):
    for i in range(size):
        print_row(size)

def print_row(width):
    print("#" * width)

main()
