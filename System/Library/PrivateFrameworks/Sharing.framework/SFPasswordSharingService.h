/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFPasswordSharingServiceDelegate, OS_dispatch_queue;
@class SFUserAlert, NSUUID, SFPasswordSharingInfo, SFService, NSDate, NSObject, NSString;

@interface SFPasswordSharingService : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	SFUserAlert* _notification;
	NSUUID* _peer;
	SFPasswordSharingInfo* _promptedInfo;
	SFService* _service;
	int _serviceState;
	NSDate* _shareClock;
	double _shareTime;
	id<SFPasswordSharingServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _networkName;

}

@property (assign,nonatomic,__weak) id<SFPasswordSharingServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                        //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSString * networkName;                                            //@synthesize networkName=_networkName - In the implementation block
+(unsigned)passwordSharingAvailability;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<SFPasswordSharingServiceDelegate>)delegate;
-(void)setDelegate:(id<SFPasswordSharingServiceDelegate>)arg1 ;
-(void)_cleanup;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)networkName;
-(void)setNetworkName:(NSString *)arg1 ;
-(void)_run;
-(void)_receivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(void)_handleSessionStarted:(id)arg1 ;
-(BOOL)disabledViaConfig;
-(int)_runServiceStart;
-(void)_sendPasswordReceived;
-(void)_passInfoToDelegate:(id)arg1 ;
-(void)_sendPasswordDeclinedWithError:(int)arg1 ;
-(void)_handleReceivedPassword:(id)arg1 ;
-(void)_handleUserNotificationResponse:(int)arg1 ;
-(void)_promptUserWithInfo:(id)arg1 message:(id)arg2 ;
-(id)messageForDisplayName:(id)arg1 deviceName:(id)arg2 info:(id)arg3 ;
-(BOOL)__activateCalled;
-(BOOL)__invalidateCalled;
-(void)__testReceivedObject:(id)arg1 withFlags:(unsigned)arg2 ;
@end

