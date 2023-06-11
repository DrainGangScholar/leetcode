#include<stdio.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
	int i=m-1;

	int j=n-1;

	int k= m+n-1;
	
	while(i>=0 && j>=0) {
		if(nums1[i]>=nums2[j]) {
			nums1[k]=nums1[i];
			i--;
		} else {
			nums1[k]=nums2[j];
			j--;
		}
		k--;
	}
	while(i>=0) {
		nums1[k]=nums1[i];
		k--;
		i--;
	}

	while(j>=0) {
		nums1[k]=nums2[j];
		k--;
		j--;
	}
}

int main(){
	int nums1[]={1,7,8,0,0,0};
	int nums2[]={1,2,3};
	merge(nums1, 6, 3, nums2, 3,3);
	for(int i=0;i<6;i++) {
		printf("%d ",nums1[i]);
	}
}
