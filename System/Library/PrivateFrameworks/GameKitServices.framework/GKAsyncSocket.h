/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKAsyncSocket : NSObject

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> targetQueue; 
@property (nonatomic,copy) id receiveDataHandler; 
@property (nonatomic,copy) id connectedHandler; 
@property (nonatomic,retain) id socketName; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)syncQueue;
-(void)setSyncQueue:(id)arg1 ;
-(void)setReceiveDataHandler:(id)arg1 ;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setConnectedHandler:(id)arg1 ;
-(void)setSocketName:(id)arg1 ;
-(void)tcpConnectSockAddr:(const sockaddr*)arg1 port:(unsigned short)arg2 ;
-(id)socketName;
-(void)tcpAttachSocketDescriptor:(int)arg1 ;
-(id)receiveDataHandler;
-(id)connectedHandler;
@end

