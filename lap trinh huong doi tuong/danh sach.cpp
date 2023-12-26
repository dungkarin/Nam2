#include<bits/stdc++.h>
using namespace std;
struct danhsach{
	int n,sbd;
	float m1,m2,m3;
	string ten;
};
void nhap(int &n, danhsach *&a){ 
	cout<<"Nhap n:";
	cin>>n;
	a=new danhsach[n+5];
	for(int i=0;i<n;i++){
		cout<<"Thi sinh thu "<<i+1;
		cout<<"\nNhap so bao danh: ";cin>>a[i].sbd;
		cout<<"Nhap ho ten:";fflush(stdin);getline(cin,a[i].ten);
		cout<<"Nhap diem mon thu 1:";cin>>a[i].m1;
		cout<<"Nhap diem mon thu 2:";cin>>a[i].m2;
		cout<<"Nhap diem mon thu 3:";cin>>a[i].m3;
	}
}
void dstrungtuyen(danhsach *a,int n){
	int dem=0;
	float mchuan;
	cout<<"Nhap diem chuan:";cin>>mchuan;
	for(int i=0;i<n;i++){
		if((a[i].m1+a[i].m2+a[i].m3) >= mchuan){
		   cout<<"SDB:"<<a[i].sbd<<"	Hoten:"<<a[i].ten<<"	Diem cac mon:"<<a[i].m1<<"\t"<<a[i].m2<<"\t"<<a[i].m3<<"\n";
		   dem++;
	    }
	}
	if(dem==0)
	cout<<"Khong co thi sinh nao trung tuyen";
}
void diembinhquan(danhsach *a,int n){
	float sum=0;
	for(int i=0;i<n;i++){
		sum=sum + a[i].m1 + a[i].m2 + a[i].m3;
	}
	float mbq=sum/n*1.0;
	cout<<"Diem binh quan la:"<<mbq;
}
void caonhat(danhsach *a,int n){
	float max=a[0].m1+a[0].m2+a[0].m3;
	for(int i=1;i<n;i++){
		if(max < (a[i].m1+a[i].m2+a[i].m3))
		max=a[i].m1+a[i].m2+a[i].m3;
	}
	cout<<"Cac thi sinh co tong diem cao nhat la:";
	for(int i=0;i<n;i++){
		if((a[i].m1+a[i].m2+a[i].m3) == max)
		cout<<"SDB:"<<a[i].sbd<<"	Hoten:"<<a[i].ten<<"	Tong diem:"<<a[i].m1+a[i].m2+a[i].m3;
	}
}
void timthisinh(danhsach *a,int n){
	int x;
	cout<<"Nhap so bao danh can tim:";cin>>x;
	for(int i=0;i<n;i++){
		if(a[i].sbd==x)
		cout<<"SDB:"<<a[i].sbd<<"	Hoten:"<<a[i].ten<<"	Diem cac mon:"<<a[i].m1<<"\t"<<a[i].m2<<"\t"<<a[i].m3;
	}
}
void sapxep(danhsach *a,int n){
	for(int i=0;i<n-1;i++){
		float sum1=a[i].m1+a[i].m2+a[i].m3;
		float sum2=a[i+1].m1+a[i+1].m2+a[i+1].m3;
		if(sum1<sum2)
		swap(a[i],a[i+1]);
	}
}


int main()
{	
	int k;
	int n;
	danhsach *a;
	cout<<"1.Nhap n thi sinh\n";
	cout<<"2.In danh sach trung tuyen biet diem chuan\n";
	cout<<"3.Tinh diem binh quan\n";
	cout<<"4.Tim cac thi sinh co diem thi cao nhat\n";
	cout<<"5.Tim thi sinh co so bao danh x\n";
	cout<<"6.Sap xep danh sach theo thu tu giam dan cua tong diem\n";
	cout<<"7.Thoat\n";
	do{
	cout<<"\nNhap lua chon:";
	cin>>k;
	switch(k){
		case 1:
			nhap(n,a);
			break;
		case 2:
			nhap(n,a);
			dstrungtuyen(a,n);
			break;
		case 3:
			nhap(n,a);
			diembinhquan(a,n);
			break;
		case 4:
			nhap(n,a);
			caonhat(a,n);
			break;
		case 5:
			nhap(n,a);
			timthisinh(a,n);
			break;
		case 6:
			nhap(n,a);
			sapxep(a,n);
			break;
		case 7:
			cout<<"BYE!!";
			break;	
		default:
			cout<<"Ban nhap sai moi nhap lai!!!\n";
			break;
		}}while(k!=7);
		return 0;
}
