#include<iostream>
#include<arpa/inet.h>
#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
void error( char *msg)
{
 perror(msg);
 exit(EXIT_FAILURE);
}
int main()
{
 int sockfd;
 sockfd = socket(AF_INET,SOCK_DGRAM,0);
 struct sockaddr_in serv,client;
 serv.sin_family = AF_INET;
 serv.sin_port = htons(8001);
 serv.sin_addr.s_addr = INADDR_ANY;
 char buffer[4];
 socklen_t l = sizeof(client);
 bind(sockfd,(struct sockaddr *)&serv,sizeof(serv));
 //socklen_t m = client;
 while(1){
 cout<<"\ngoing to recv\n";
 int rc= recvfrom(sockfd,buffer,sizeof(buffer),0,(struct sockaddr *)&client,&l);
 if(rc<0)
 {
 cout<<"ERROR READING FROM SOCKET";
 }
 cout<<"\n the message received is : "<<buffer<<endl;
 int rp= sendto(sockfd,"hi",2,0,(struct sockaddr *)&client,l);
 if(rp<0)
 {
 cout<<"ERROR writing to SOCKET";
 }
 }
}