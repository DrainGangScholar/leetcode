#include<stdio.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
	if(nums1[nums1Size-1]<nums2[0]){
		for(int i=n,j=0;i<nums1Size;i++,j++){
			nums1[i]=nums2[j];
			return;
		}
	}
	if(nums1[0]>nums2[nums2Size-1]){
		for(int i=nums1Size-1,j=m-1;j>=0;i--,j--){
			nums1[i]=nums1[j];
		}
		for(int i=0;i<nums2Size;i++){
			nums1[i]=nums2[i];
		}
	}
}

int main(){
	int nums1[]={1,2,3,0,0,0};
	int nums2[]={5,6,7};
	merge(nums1, 6, 3, nums2, 3,3);
	for(int i=0;i<6;i++) {
		printf("%d ",nums1[i]);
	}
}
