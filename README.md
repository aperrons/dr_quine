# dr_quine

### Description
This small algo project will get you acquainted with auto-replication problems and confront the [Kleene's recursion theorem](https://en.wikipedia.org/wiki/Kleene's_recursion_theorem).

### Repository Tree
```
.
├── C
│   ├── Colleen.c
│   ├── Grace.c
│   ├── Makefile
│   └── Sally.c
├── PY
│   ├── Colleen.py
│   ├── Grace.py
│   └── Sally.py
└── README.md
```

### Info
Inside the repository you will find the C folder aimed at finalizing the mondatory part, while inside the PY folder you will find the bonus part. The aim of the project is to create simple quines, which are self-referenced programs that reproduce their own source code without using I / O functions. This is possible thanks to Kleene's second recursion theorem and [Roger's fixed point theorem](https://en.wikipedia.org/wiki/Kleene's_recursion_theorem).

Use `Make` and `python3` to compile files.

If you notice discrepancies when you run the `diff $1 $2` command on quines written in C, use `cat -A $1` to see the string terminators, the carriage return (CR) character may be present. See the [`dos2unix`](https://linux.die.net/man/1/dos2unix) command and use it on the source file before compilation.