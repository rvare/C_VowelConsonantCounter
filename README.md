# VC Counter

A C program, called *VC Counter*, that counts the number of vowels and consonants in a given file. It also counts the combination of pairs as well.

This program was inspired by the video [The Strange Math That Predicts (Almost) Anything](https://www.youtube.com/watch?v=KZeIEiBrT_w) by [Veritasium](https://www.youtube.com/@veritasium) on YouTube. Specifically, how [Andrey Andreyevich Markov](https://en.wikipedia.org/wiki/Andrey_Markov) counted the vowels, consonants, and their pairs using the novel in verse *Eugene Onegin* by Alexander Pushkin.

# How to Use

To use the program, type the following:

```bash
./vc_count <path to file>
```

If successful, you'll see something like the following output:

```text
Total characters: 253
#vowels: 97     #consonants: 156
vv: 10  vc: 87  cv: 87  cc: 68
```

