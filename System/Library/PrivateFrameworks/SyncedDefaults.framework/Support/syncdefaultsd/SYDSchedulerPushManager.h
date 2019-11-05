/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SYDPushManager;

@interface SYDSchedulerPushManager : NSObject {

	NSString* _user;
	SYDPushManager* _pushManager;
	NSString* _environment;
	double _refreshInterval;

}

@property (nonatomic,retain) NSString * environment;                    //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSString * user;                           //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) double refreshInterval;                    //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (nonatomic,retain) SYDPushManager * pushManager;              //@synthesize pushManager=_pushManager - In the implementation block
+(id)sharedManagers;
+(void)_registerManager:(id)arg1 ;
+(void)_managerDidChange:(id)arg1 ;
+(void)_unregisterManager:(id)arg1 ;
-(void)dealloc;
-(NSString *)user;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(void)shutdown;
-(id)publicToken;
-(BOOL)needsUpdate;
-(double)refreshInterval;
-(void)setRefreshInterval:(double)arg1 ;
-(void)resetUpdates;
-(id)persistentState;
-(void)setEnvironment:(id)arg1 forUser:(id)arg2 refreshInterval:(double)arg3 ;
-(double)nextUpdateInterval;
-(void)didUpdateTokenOnServer:(id)arg1 ;
-(id)initWithPersistentState:(id)arg1 pushManager:(id)arg2 ;
-(SYDPushManager *)pushManager;
-(void)setPushManager:(SYDPushManager *)arg1 ;
-(void)_managerNeedsUpdateOnServer:(id)arg1 ;
-(void)_managerDidReceivePushNotification:(id)arg1 ;
@end

