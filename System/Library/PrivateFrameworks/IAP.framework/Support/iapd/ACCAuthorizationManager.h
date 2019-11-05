/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ACCAuthorizationManager : NSObject {

	BOOL _bypassAuthorization;
	NSMutableDictionary* _notificationDictMutable;

}

@property (assign,nonatomic) BOOL bypassAuthorization;                                   //@synthesize bypassAuthorization=_bypassAuthorization - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationDictMutable;              //@synthesize notificationDictMutable=_notificationDictMutable - In the implementation block
+(id)sharedManager;
+(void)requestAuthorizationForCertSerial:(id)arg1 withName:(id)arg2 providesPower:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(unsigned long long)authorizationStatusForCertSerial:(id)arg1 ;
+(void)forceRequestAuthorizationForCertSerial:(id)arg1 withName:(id)arg2 providesPower:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(unsigned long long)promptUserForAuthorizationOfAccessoryWithName:(id)arg1 providesPower:(BOOL)arg2 certSerial:(id)arg3 ;
-(id)init;
-(BOOL)bypassAuthorization;
-(NSMutableDictionary *)notificationDictMutable;
-(void)setBypassAuthorization:(BOOL)arg1 ;
-(void)setNotificationDictMutable:(NSMutableDictionary *)arg1 ;
@end

