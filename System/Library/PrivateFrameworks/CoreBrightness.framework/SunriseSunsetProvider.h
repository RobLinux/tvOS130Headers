/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class _CDClientContext, _CDContextualKeyPath, _CDContextualChangeRegistration, NSDictionary, NSObject, _CDContextualPredicate;

@interface SunriseSunsetProvider : NSObject {

	_CDClientContext* _duetContextStore;
	_CDContextualKeyPath* _duetKeyPath;
	_CDContextualChangeRegistration* _duetRegistration;
	NSDictionary* _duetInfo;
	NSObject*<OS_dispatch_semaphore> _duetDispatchSemaphore;
	BOOL _sunriseSunsetNotificationEnabled;
	/*^block*/id _callbackBlock;
	/*^block*/id _duetCallback;
	_CDContextualPredicate* _predicate;
	int _logLevel;

}

@property (assign) int logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
-(void)dealloc;
-(void)cancel;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(id)copySunriseSunsetInfo:(int)arg1 ;
-(void)setLogLevel:(int)arg1 ;
-(void)updateSunriseSunsetInfo;
-(void)unregisterNotification;
-(void)unregisterBlock;
-(id)copySunsetSunriseInfoFromContext;
-(void)registerBlock:(/*^block*/id)arg1 ;
-(int)logLevel;
@end

