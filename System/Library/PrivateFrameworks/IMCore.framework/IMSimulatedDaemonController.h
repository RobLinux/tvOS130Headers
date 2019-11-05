/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMDaemonController.h>

@class NSArray;

@interface IMSimulatedDaemonController : IMDaemonController {

	NSArray* _listeners;

}

@property (nonatomic,retain) NSArray * listeners;              //@synthesize listeners=_listeners - In the implementation block
+(id)sharedInstance;
+(id)dictionaryForChat:(id)arg1 ;
+(void)beginSimulatingDaemon;
-(NSArray *)listeners;
-(BOOL)isConnected;
-(void)setListeners:(NSArray *)arg1 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 ;
-(unsigned)capabilitiesForListenerID:(id)arg1 ;
-(void)sendBalloonPayload:(id)arg1 attachments:(id)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned)arg2 blockUntilConnected:(BOOL)arg3 ;
@end

