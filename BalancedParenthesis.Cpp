bool Parenthesis (string s)
{
  if(s.length()%2==1)
    return false;
  stack<char>st;
  for(int i=0;i<s.size();i++)
  {
    switch(s[i])
    {
      case '}':
            if(st.empty()||st.top()!='{')
              return false;
              else st.pop();
              break;
      case ']':
            if(st.empty()||st.top()!=']')
               return false;
            else st.pop();
                break;
      case ')':
            if(st.empty() ||st.top()!=')')
                return false;
            else st.pop();
                break;
      default:
            st.push(s[i]);
            break; 
    }
  }
  return st.empty();
}
