// 思路： 动态规划
// s[0,k] && s[k,end] k=0...end;

// carset {car, ca, set} 为例

// flag 表如下，flag[k]表示k之前的string可以和不可以
// k     0  1  2  3  4  5  6  [0,k)
//end  
// 0     T  \  \  \  \  \  \
// 1     T  F  \  \  \  \  \
// 2     T  F  T  \  \  \  \
// 3     T  F  T  T  \  \  \
// 4     T  F  T  T  F  \  \
// 5     T  F  T  T  F  F  \
// 6     T  F  T  T  F  F  T
//[0,end]


bool wordBreak(string s, unordered_set<string> &dict) {

	if (s.size() == 0) return true;

	vector<bool> flag(s.size() + 1, false);
	flag[0] = true;

	for (int end = 0; end < s.size(); end++)
	{
		for (int k = 0; k <= end; k++)
		{
			string temp = s.substr(k, end - k + 1);
			
			bool flag2 = false;
			unordered_set<string>::const_iterator got2 = dict.find(temp);
			if (got2 != dict.end())
				flag2 = true;   // string after k.
			if (flag[k] && flag2)
			{
				flag[end+1] = true;
				break;
			}
		}
	}
	return flag[s.size()];
}