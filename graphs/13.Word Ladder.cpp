//! WORD LADDER
https://leetcode.com/problems/word-ladder/



//! Concept
beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]
"hit" -> "hot" -> "dot" -> "dog" -> "cog", which is 5 words long.


concept since u need the shortest such path so use bfs algorithm


so queue and visited array chahiye hoga
visited array me tum simply wordlist ko ek set me daldo and everytime u get some shoit u simply remove it from the set that way jo visited he unko set se gayab kar rahe ho so visited array ka kaam hojara he













int ladderLength(string beginWord, string endWord, vector<string> &wordList)
{
    queue<pair<string, int>> q;
    q.push({beginWord, 1});

    int n = beginWord.size();

    unordered_set<string> se;
    for (string s : wordList)
    {
        if (s != beginWord)
        {
            se.insert(s);
        }
    }

    while (!q.empty())
    {
        string s = q.front().first;
        int level = q.front().second;
        q.pop();
        cout << s << level;
        if (s == endWord)
        {
            return level;
        }

        string temp = s;
        for (int i = 0; i < n; i++)
        {
            for (int x = 0; x < 26; x++)
            {
                char ch = 'a' + x;
                // ab us i position par saare possible ch(a to z) try karenge
                s[i] = ch;
                if (se.find(s) != se.end())
                {
                    // mil gaya set me to set se hatana(erase karna hoga to remove one key) aur queue me dalo
                    se.erase(s);
                    q.push({s, level + 1});
                }
            }
            s = temp;
        }
    }

    return 0;
}