#include<iostream>
#include<cmath>
#include <math.h>

using namespace std;

int getCoordinateX(){
	float x;
	cout<<"please enter the value of x : ";
	cin>>x;
	cout<<"\n";
	return x;
}
int getCoordinateY(){
	float y;
	cout<<"please enter the value of y : ";
	cin>>y;
	cout<<"\n";
	return y;
}
int main(){
	cout<<"enter the coordinate of the first point A(x,y) : \n";
	int A[2] = {getCoordinateX(),getCoordinateY()};
	cout<<"A("<<A[0]<<","<<A[1]<<")"<<"\n \n";
	cout<<"enter the coordinate of the second point B(x,y) : \n";
	int B[2] = {getCoordinateX(),getCoordinateY()};
	cout<<"B("<<B[0]<<","<<B[1]<<")"<<"\n \n";
	float r;
	cout<<"please enter the radius of the desired circle :";
	cin>>r;
	cout<<"\n";
	float dis = sqrt(pow(((A[0])-(B[0])),2) + pow(((A[1])-(B[1])) , 2));
	float sin_alpha = ((dis/2.0)/(r));
	float alpha = 2.0*((asin(sin_alpha))/3.141592653589793238462643383279502884*180);
	if(alpha!=180){
	float length = ((alpha/360.0)*3.141592653589793238462643383279502884*2*r);
	cout<<"the shortest way to go from A("<<A[0]<<","<<A[1]<<") to B("<<B[0]<<","<<B[1]<<") by taking the circle's perimeter is approximately :"<<length;
    }
    else if(alpha==180){
    float length = (0.5*3.141592653589793238462643383279502884*2*r);
    cout<<"the shortest way to go from A("<<A[0]<<","<<A[1]<<") to B("<<B[0]<<","<<B[1]<<") by taking the circle's perimeter is approximately :"<<length;
	}
}