def palindrome(n):
    return str(n) == str(n)[::-1] 

def is_palindrome2(n):
    s=str(n)
    for i in range((len(s)+1)//2):
        if s[i] != s[-(i+1)]:
            return False
    return True
