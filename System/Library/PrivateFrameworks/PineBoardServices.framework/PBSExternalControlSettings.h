/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PBSExternalControlSettings : NSObject {

	id _domainObserver;
	BOOL _cachedAssertActiveSourceOnWake;
	BOOL _cachedAssertActiveSourceOnAirPlay;
	BOOL _cachedAssertActiveSourceOnBoot;
	BOOL _cachedAssertActiveSourceOnAppRestart;
	BOOL _cachedAssertActiveSourceOnRemoteAppEvent;
	BOOL _cachedResignActiveSourceOnSleep;
	BOOL _cachedAssertPowerOnWake;
	BOOL _cachedAssertPowerOnAirPlay;
	BOOL _cachedAssertPowerOnBoot;
	BOOL _cachedAssertStandbyOnSleep;
	BOOL _cachedCreateCoreControl;
	BOOL _cachedRetryCoreControlActions;
	BOOL _cachedAdjustDisplayStateOnSleep;
	BOOL _cachedAdjustDisplayStateOnWake;
	BOOL _cachedWakeOnDisplayChange;
	BOOL _cachedHibernate;
	BOOL _cachedMuteOnPressHold;

}

@property (assign,nonatomic) BOOL shouldCreateCoreControl; 
@property (assign,nonatomic) BOOL shouldAssertActiveSourceOnBoot; 
@property (assign,nonatomic) BOOL shouldAssertActiveSourceOnAppRestart; 
@property (assign,nonatomic) BOOL shouldAssertActiveSourceOnWake; 
@property (assign,nonatomic) BOOL shouldAssertActiveSourceOnAirPlay; 
@property (assign,nonatomic) BOOL shouldAssertActiveSourceOnRemoteAppEvent; 
@property (assign,nonatomic) BOOL shouldResignActiveSourceOnSleep; 
@property (assign,nonatomic) BOOL shouldAssertPowerOnBoot; 
@property (assign,nonatomic) BOOL shouldAssertPowerOnWake; 
@property (assign,nonatomic) BOOL shouldAssertPowerOnAirPlay; 
@property (assign,nonatomic) BOOL shouldAssertStandbyOnSleep; 
@property (assign,nonatomic) BOOL shouldRetryCoreControlActions; 
@property (assign,nonatomic) BOOL shouldAdjustDisplayStateOnSleep; 
@property (assign,nonatomic) BOOL shouldAdjustDisplayStateOnWake; 
@property (assign,nonatomic) BOOL shouldWakeOnDisplayChange; 
@property (assign,nonatomic) BOOL shouldHibernate; 
@property (assign,nonatomic) BOOL shouldMuteOnPressHold; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)shouldAssertStandbyOnSleep;
-(BOOL)shouldAdjustDisplayStateOnWake;
-(void)_refreshPropertiesWithPreferences;
-(BOOL)shouldCreateCoreControl;
-(void)setShouldCreateCoreControl:(BOOL)arg1 ;
-(BOOL)shouldAssertActiveSourceOnBoot;
-(void)setShouldAssertActiveSourceOnBoot:(BOOL)arg1 ;
-(BOOL)shouldAssertActiveSourceOnAppRestart;
-(void)setShouldAssertActiveSourceOnAppRestart:(BOOL)arg1 ;
-(BOOL)shouldAssertActiveSourceOnWake;
-(void)setShouldAssertActiveSourceOnWake:(BOOL)arg1 ;
-(BOOL)shouldAssertActiveSourceOnAirPlay;
-(void)setShouldAssertActiveSourceOnAirPlay:(BOOL)arg1 ;
-(BOOL)shouldAssertActiveSourceOnRemoteAppEvent;
-(void)setShouldAssertActiveSourceOnRemoteAppEvent:(BOOL)arg1 ;
-(BOOL)shouldResignActiveSourceOnSleep;
-(void)setShouldResignActiveSourceOnSleep:(BOOL)arg1 ;
-(BOOL)shouldAssertPowerOnBoot;
-(void)setShouldAssertPowerOnBoot:(BOOL)arg1 ;
-(BOOL)shouldAssertPowerOnWake;
-(void)setShouldAssertPowerOnWake:(BOOL)arg1 ;
-(BOOL)shouldAssertPowerOnAirPlay;
-(void)setShouldAssertPowerOnAirPlay:(BOOL)arg1 ;
-(void)setShouldAssertStandbyOnSleep:(BOOL)arg1 ;
-(BOOL)shouldRetryCoreControlActions;
-(void)setShouldRetryCoreControlActions:(BOOL)arg1 ;
-(BOOL)shouldAdjustDisplayStateOnSleep;
-(void)setShouldAdjustDisplayStateOnSleep:(BOOL)arg1 ;
-(void)setShouldAdjustDisplayStateOnWake:(BOOL)arg1 ;
-(BOOL)shouldWakeOnDisplayChange;
-(void)setShouldWakeOnDisplayChange:(BOOL)arg1 ;
-(BOOL)shouldHibernate;
-(void)setShouldHibernate:(BOOL)arg1 ;
-(BOOL)shouldMuteOnPressHold;
-(void)setShouldMuteOnPressHold:(BOOL)arg1 ;
@end

