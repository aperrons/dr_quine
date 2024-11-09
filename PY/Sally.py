#!/usr/bin/python3

import subprocess

N = 5
QUINE = "Sally"
EXT = ".py"
CMD = "python3"

def main():
    if N<1: return
    filename = QUINE + "_" + str(N-1) + EXT
    s = '#!/usr/bin/python3\n\nimport subprocess\n\nN = %d\nQUINE = "Sally"\nEXT = ".py"\nCMD = "python3"\n\ndef main():\n    if N<1: return\n    filename = QUINE + "_" + str(N-1) + EXT\n    s = %r\n    with open(filename, "w") as f:\n        print(s %% (N-1, s), file=f)\n    subprocess.run([CMD, filename])\n    return\n\nif __name__ == "__main__":\n    main()'
    with open(filename, "w") as f:
        print(s % (N-1, s), file=f)
    subprocess.run([CMD, filename])
    return

if __name__ == "__main__":
    main()
