//https://leetcode.com/problems/group-anagrams/
class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        ArrayList<List<String>> answer = new ArrayList<List<String>>();
        HashMap<String, ArrayList<String>> maps = new HashMap<String, ArrayList<String>>();

        for(int i=0; i<strs.length; i++){
            char charArray[] = strs[i].toCharArray();
            Arrays.sort(charArray);
            String str = new String(charArray);
            if(maps.get(str)==null){
                ArrayList<String> alist = new ArrayList<String>();
                alist.add(strs[i]);
                maps.put(str, alist);
            }else{
                ArrayList<String> existList =  maps.get(str);
                existList.add(strs[i]);
                maps.put(str, existList);
            }
        }
        for(String key: maps.keySet()){
            answer.add(maps.get(key));
        }
        return answer;
    }
}