from collections import Counter
class Solution:
    def findSubstring(self, s: str, words: list[str]) -> list[int]:
        wlen = len(words[0])
        wslen = len(words)*len(words[0])#given words are with the same length
        res = []

        for pos in range(wlen):
            i = pos #head pointer
            d = Counter(words)#instancial the Counter instance from mapping

            for j in range(i, len(s)+1-wlen, wlen):#start from i, end up at the end, gap wlen
                word = s[j: j+wlen] #define this as a word and figure out wether it is in the counter or not
                d[word] -= 1 #counter original value is 0, so after minus 1, it turns to nagitive
                
                while d[word]<0:
                    d[s[i:i+wlen]] += 1 #turn to original situation
                    i += wlen
                if i + wslen == j + wlen:
                    res.append(i)

            return res
