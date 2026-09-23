class Solution:
    def uniqueMorseRepresentations(self, words: list[str]) -> int:
        codes=[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        cd=set()
        for c in words:
            temp=""
            for ch in c:
                temp+=codes[ord(ch)-ord('a')]
            cd.add(temp)
        return len(cd)
