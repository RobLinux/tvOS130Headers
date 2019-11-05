/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IDSServiceDelegate.h>

@class IDSService, NSString;

@interface IMDLegactDTController : NSObject <IDSServiceDelegate> {

	IDSService* _dtService;

}

@property (nonatomic,retain) IDSService * dtService;                //@synthesize dtService=_dtService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)_senderIDFromToken:(id)arg1 ;
-(IDSService *)dtService;
-(void)setDtService:(IDSService *)arg1 ;
@end

