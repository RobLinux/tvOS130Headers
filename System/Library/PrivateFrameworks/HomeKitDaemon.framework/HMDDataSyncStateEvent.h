/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDDataSyncStateEvent : HMDLogEvent {

	unsigned long long _dataSyncState;

}

@property (assign,nonatomic) unsigned long long dataSyncState;              //@synthesize dataSyncState=_dataSyncState - In the implementation block
+(id)uuid;
+(id)dataSyncStateEstablished:(unsigned long long)arg1 ;
-(unsigned long long)dataSyncState;
-(void)setDataSyncState:(unsigned long long)arg1 ;
-(id)initWithDataSyncState:(unsigned long long)arg1 ;
@end

