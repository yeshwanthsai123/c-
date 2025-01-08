 #include<bits/stdc++.h>
 int majorityElement(vector<int> v) {
	// Write your code here
	int el,cnt1=0,cnt2=0;
	for(int i=0;i<v.size();i++){
		if(cnt1==0){
			el=v[i];
			cnt1++;
		}
		else if (el==v[i]){
			cnt1++;
		}
		else{
			cnt1--;
		}
	}
	for(int i=0;i<v.size();i++){
		if(el==v[i])
			cnt2++;
		}
		if(cnt2>(v.size()/2)){
			return el;
	}
return -1;
}
