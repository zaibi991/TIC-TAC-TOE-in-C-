# Name: Mohammad Gulzaib 
# Collaborators:
    #Mohammad Gulzaib (460917)
    #Jonathan Sharif (474228)
    #Muhammad Dawood Saeed (465231)
    #Haider Nawaz Cheema (480239)
# Time spent: 3 days

# Hangman Game
# -----------------------------------
import random
import string
from random import randrange
WORDLIST_FILENAME = r"C:\Users\gulza\OneDrive\Desktop\words.txt"


def load_words():
    """
    Returns a list of valid words. Words are strings of lowercase letters.
    
    Depending on the size of the word list, this function may
    take a while to finish.
    """
    # inFile: file
    inFile = open(WORDLIST_FILENAME, 'r')
    # line: string
    line = inFile.readline()
    # wordlist: list of strings
    wordlist = line.split()
    return wordlist



def choose_word(wordlist):
    """
    wordlist (list): list of words (strings)
    
    Returns a word from wordlist at random
    """
    return random.choice(wordlist)



v=False
words = load_words()
hidden_word = list(choose_word(words))
hid = ''.join(hidden_word)
z = 0
a=0
ax=0
letters = string.ascii_lowercase
letter = "".join(letters)+'help'
hangman = [
    '''
     _______
    |       |
    |
    |
    |
    |
  __|__
 |     |
 |_____|   
    ''',
    '''
     _______
    |       |
    |       O
    |
    |
    |
  __|__
 |     |
 |_____|   
    ''',
    '''
     _______
    |       |
    |       O
    |       |
    |
    |
  __|__
 |     |
 |_____|   
    ''',
    '''
     _______
    |       |
    |       O
    |      /|
    |
    |
  __|__
 |     |
 |_____|   
    ''',
    '''
     _______
    |       |
    |       O
    |      /|\\
    |
    |
  __|__
 |     |
 |_____|   
    ''',
    '''
     _______
    |       |
    |       O
    |      /|\\
    |      /
    |
  __|__
 |     |
 |_____|   
    ''',
    '''
     _______
    |       |
    |       O
    |      /|\\
    |      / \\
    |
  __|__
 |     |
 |_____|   
    '''
]
print("The word length is", len(hidden_word))
A = ['a', 'e', 'i', 'o', 'u']
count = 6
helpnum = 1
new = list("_" * len(hidden_word))
warn = 3
for x in range(2):
    b = randrange(len(hidden_word))
    if x == 0:
        a = b
        z += 1
    elif x == 1:
        ax = b
    print(hidden_word[b], "at", b + 1, "place")
    new[b] = hidden_word[b]
    hidden_word[b] = ' '

    

print("If you want to get help type 'HELP'")
print ("You can get help 2 times ")

condition = True
print("Character length is", len(hidden_word))

while condition:
    print ("You have ",count," lives left")
    print ("available letters are", letters)
    print 
    print (hangman[count])
    new1=' '.join(new)
    print (new1)
    if count <= 0:
        print("You ran out of lives, Hard luck ")
        print ("The word is ", hid)
        break

    print("Now you have", count, "lives left ")
    guess = input("Guess a single character ").lower()
    if guess not in letter:
        print ("Please enter a english alphabet ")
        print ("Now you have ",warn," left")
        warn-=1
        if warn ==0:
            count-=1
            warn = 3
            print ("You have lost 1 life, now you have ",count," left")

    if guess == 'help' and helpnum > 0:
        helpnum -= 1
        v = True
        hum =0
        while v:
            hint = choose_word(words)
            hum+=1
            if hum >=len(words):
                v=False
                break
            if a<len(hint) and ax <len (hint):
                if hid [a]==hint[a] and hid [ax] == hint [ax] and len(hint)==len(hid):
               
                    print (hint)
                    
                else :
                    continue
            else:
                continue
        print (hid)
           
                
           
    if v == False:
        v= True
        continue
    if guess not in hidden_word and guess in new:
        print ("This has been already guessed ")
        print ("This is a warining, after three warnings you will lose 1 life")
        warn-=1
        continue
    if warn <=0:
        count-=1
        warn = 3
        print ("You have lost 1 life, now you have ",count," left")
        continue
    
                

    for i in range(len(hidden_word)):
        if guess == hidden_word[i]:
            new[i] = guess
            hidden_word[i] = " "
            break
    else:
        print("Your guess is not correct ")
        count -= 1
        if guess in A:
            count -= 1

    if "".join(new) == hid :
        print (hid)
        print("You have won it, congratulations")
        print ("Your score is ",count * len (hidden_word) )
        break
    
