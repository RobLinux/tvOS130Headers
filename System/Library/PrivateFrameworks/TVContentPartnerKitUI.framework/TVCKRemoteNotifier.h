/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVCKRemoteNotifierDelegate;
@class NSString, NSDistributedNotificationCenter;

@interface TVCKRemoteNotifier : NSObject {

	NSString* _remoteNotificationName;
	id<TVCKRemoteNotifierDelegate> _delegate;
	NSString* _notificationObject;
	NSDistributedNotificationCenter* _distributedNotificationCenter;

}

@property (nonatomic,copy) NSString * notificationObject;                                                  //@synthesize notificationObject=_notificationObject - In the implementation block
@property (nonatomic,retain) NSDistributedNotificationCenter * distributedNotificationCenter;              //@synthesize distributedNotificationCenter=_distributedNotificationCenter - In the implementation block
@property (nonatomic,copy,readonly) NSString * remoteNotificationName;                                     //@synthesize remoteNotificationName=_remoteNotificationName - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKRemoteNotifierDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<TVCKRemoteNotifierDelegate>)delegate;
-(void)setDelegate:(id<TVCKRemoteNotifierDelegate>)arg1 ;
-(void)postNotification;
-(void)_didReceiveDistributedNotification:(id)arg1 ;
-(NSString *)notificationObject;
-(void)postNotificationWithUserInfo:(id)arg1 ;
-(NSDistributedNotificationCenter *)distributedNotificationCenter;
-(NSString *)remoteNotificationName;
-(id)initWithNotificationName:(id)arg1 ;
-(void)setNotificationObject:(NSString *)arg1 ;
-(void)setDistributedNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
@end

