#include <iostream>
#include <vector>



void splitSen(std::string strText, std::vector<std::string> * pSentences)
{
    std::string sentence;
    size_t start = 0;
    size_t end = 0;
    std::string sentenceEnding = ".";
    while ((end = strText.find(sentenceEnding, start)) != std::string::npos) 
    {
        pSentences->push_back(strText.substr(start, end - start + 1));
        start = end + 1;
    }
    if (start < strText.size())
    {
        pSentences->push_back(strText.substr(start));
    }
}

void splitWords(std::string strSentence, std::vector<std::string> * pWords)
{
    std::string word;
    size_t start = 0;
    size_t end = 0;
    std::string wordEnding = " ";
    while ((end = strSentence.find(wordEnding, start)) != std::string::npos)
    {
        pWords->push_back(strSentence.substr(start, end - start + 1));
        start = end + 1;
    }
    if (start < strSentence.size())
    {
        pWords->push_back(strSentence.substr(start));
    }
}

int main()
{
    std::string strText = "This is an example of simple text. Each text consists of words. How many words are in the text?";
    std::vector<std::string> sentences;
    std::vector<std::string> Words;
    splitSen(strText, &sentences);
    splitWords(sentences[0], &Words);
    printf("%s \n", sentences[0].data());
    printf("%s \n", Words[2].data());
}