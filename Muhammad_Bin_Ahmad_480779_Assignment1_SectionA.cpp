#include<iostream>
#include<string>
#include<cctype>

using namespace std;
int main(){
//	int num;
//	cout<<"Enter a number."<<endl;
//	cin>>num;
//	for (int i=1;i<=num;i++)	{
//		if (num%i==0)	{
//			cout<<i<<" is a factor of "<<num<<endl;
//		}
//	}
	//	end of task 1
//
//	int num;
//	bool within_range;
//	cout<<"Enter a number."<<endl;
//	cin>>num;
//	if (num>10 && num<=20)	{
//		within_range= true;
//	}
//	else {
//		within_range= false;
//	}
//	cout<<within_range;
	//	end of task 3
//
//	int num,i,j;
//	bool prime;
//	cout<<"Enter a positive integer."<<endl;
//	cin>>num;
//	i=num-1;
//	
//	if (num==1)	{
//			cout<<"There is no prime number less than 1."<<endl;
//	}
//	if(num<=0)	{
//		cout<<"Invalid input."<<endl;
//	}
//	while(i>=2)	{
//		prime=true;
//		j=2;
//		while(j<i)	{
//			if(i%j==0)	{
//				prime=false;
//				break;
//			}
//			j++;
//		}
//		if(prime==true){
//			break;
//		}
//		i--;
//	}
//	if(prime==true)	{
//		cout<<"The largest prime number less then "<<num<<" is "<<i;
//	}
//	else	{
//		cout<<"There is no prime number less then "<<num;
//	}
	//	 end of task 4
//
//
//string input1,input2;
//string rotated_string="";
//cout<<"Enter two strings."<<endl;
//cin>>input1>>input2;
//if (input1==input2)	{
//	cout<<"Both strings are equal."<<endl;
//	for(int i=input1.length(); i>=0; i--)	{
//		rotated_string+=input1[i];
//	}
//	cout<<"The reversed string is"<< rotated_string <<endl;
//	}
//else	{
//	cout<<"The two strings are now not equal.";
//}
	//	end of task 5
//
//int copy,dividend, divisor, quotient=0;
//cout<<"Enter a dividend."<<endl;
//cin>>dividend;
//cout<<"Enter a divisor."<<endl;
//cin>>divisor;
//copy=dividend;
//if(dividend<divisor)	{
//	cout<<"The dividend must be greater than the divisor."<<endl;
//}
//else if (dividend>0 && divisor>0)	{
//	for (int i=dividend;i>=divisor; i--)	{
//		if (i%divisor==0)	{
//			quotient=quotient+1;
//		}
//	}
//	cout<<"The quotient is "<<quotient<<endl;
//	cout<<"The remainder is "<<copy%divisor;
//}
	// 	end of task 6
//
//	string str;
//	cout<<"Enter a string\n";
//	cin>>str;
//	for(int i=0;i<str.length();i++){
//		for(int j=0;j<str.length();j++){
//			if(i!=j){
//				if (tolower(str[i])==tolower(str[j])){
//					str[j]=str[j+1];
//					str[j+1]=' ';
//				}
//			}
//		}
//	}
//	cout<<"The new string is "<<str;
	//	 end of task 7
//
//	int numbers[5]={1,2,3,4,5};
//	int newsize;
//	cout<<"Enter the size of the new array\n";
//	cin>>newsize;
//	int numbers_updated[newsize];
//	for (int i=0;i<5;i++){
//		numbers_updated[i]=numbers[i];
//	}
//	cout<<"Previous array is :\n";
//	for (int i=0;i<5;i++){
//		cout<<numbers[i]<<endl;
//	}
//	for (int i=5;i<newsize;i++){
//		cout<<"Add an element to the array."<<endl;
//		cin>>numbers_updated[i];
//	}
//	cout<<endl;
//	for (int i=0;i<newsize;i++){
//		cout<<i<<"th element : "<<numbers_updated[i]<<endl;
//	}
	//	 end of task 8
//	
//	int n,x,sum;
//	int numbers[n];
//	cout<<"Enter the array size and it can not be less than 3.\n";
//	cin>>n;
//	for (int j=0; j<n;j++){
//		cout<<"Enter an element into the array.\n";
//		cin>>numbers[j];
//	}
//	cout<<endl;
//	cout<<"Enter the number for which the triplet need to be found\n";
//	cin>>x;
//	for(int i=0;i<n;i++){
//		for (int j=i+1;j<n;j++){
//			for (int k=j+1;k<n;k++){
//				sum=numbers[i]+numbers[j]+numbers[k];
//				if (sum==x){
//					cout<<numbers[i]<<" "<<numbers[j]<<" "<<numbers[k]<<endl;
//				}
//			}
//		}
//	}
	//	 end of task 9
//int temp;
//int numbers[6];
//for (int i=0; i<6;i++){
//	cout<<"Enter elements into the array.\n";
//	cin>>numbers[i];
//}
//for(int j=0;j<6;j++){
//	for(int k=0;k<5;k++){
//		if(numbers[k]>numbers[k+1]){
//			temp = numbers[k];
//            numbers[k] = numbers[k + 1];
//            numbers[k + 1] = temp;
//	}
//}
//cout<<endl;
//	
//
//}
//for (int k=0;k<6;k++){
//	cout<<numbers[k]<<endl;
//}
	// end of task 10
}
