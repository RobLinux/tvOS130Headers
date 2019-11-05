/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalDeviceLockObserver;

@interface CDBDataProtectionObserver : NSObject {

	/*^block*/id _stateChangedCallback;
	CalDeviceLockObserver* _deviceLockObserver;

}

@property (nonatomic,retain) CalDeviceLockObserver * deviceLockObserver;              //@synthesize deviceLockObserver=_deviceLockObserver - In the implementation block
@property (nonatomic,copy) id stateChangedCallback;                                   //@synthesize stateChangedCallback=_stateChangedCallback - In the implementation block
@property (nonatomic,readonly) BOOL dataIsAccessible; 
+(id)stateChangedNotificationName;
-(id)init;
-(void)setStateChangedCallback:(id)arg1 ;
-(id)stateChangedCallback;
-(void)_deviceLockStateChanged;
-(void)setDeviceLockObserver:(CalDeviceLockObserver *)arg1 ;
-(BOOL)dataIsAccessible;
-(CalDeviceLockObserver *)deviceLockObserver;
@end

