#include <string>
#include <vector>
using namespace std;

// 문자열 다루기 기본

bool solution(string s) {
    bool answer = true;
    
    if(s.size() != 4 && s.size() != 6) return false;
    
    for(int i = 0; i<s.size(); i++)
        if(!(s[i] >= '0' && s[i] <= '9')) return false;
    
    return answer;
}
