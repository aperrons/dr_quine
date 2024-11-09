#!/usr/bin/python3

def main():
    s = '#!/usr/bin/python3\n\ndef main():\n    s = %r\n    print(s %% s)\n    return\n\nif __name__ == "__main__":\n    main()'
    print(s % s)
    return

if __name__ == "__main__":
    main()
