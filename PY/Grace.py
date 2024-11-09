#!/usr/bin/python3

def main():
    s = '#!/usr/bin/python3\n\ndef main():\n    s = %r\n    with open("Grace_kid.py", "w") as f:\n        print(s %% s, file=f)\n    return\n\nif __name__ == "__main__":\n    main()'
    with open("Grace_kid.py", "w") as f:
        print(s % s, file=f)
    return

if __name__ == "__main__":
    main()
