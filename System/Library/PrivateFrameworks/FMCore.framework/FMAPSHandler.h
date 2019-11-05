/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/APSConnectionDelegate.h>

@class APSConnection, NSMutableArray, NSString;

@interface FMAPSHandler : NSObject <APSConnectionDelegate> {

	BOOL _registerForDarkWake;
	BOOL _registrationsSuspended;
	APSConnection* _apsConnection;
	NSMutableArray* _registeredDelegates;
	NSMutableArray* _pendingPushes;
	NSString* _environmentName;

}

@property (nonatomic,retain) APSConnection * apsConnection;                     //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,retain) NSMutableArray * registeredDelegates;              //@synthesize registeredDelegates=_registeredDelegates - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingPushes;                    //@synthesize pendingPushes=_pendingPushes - In the implementation block
@property (nonatomic,retain) NSString * environmentName;                        //@synthesize environmentName=_environmentName - In the implementation block
@property (assign,nonatomic) BOOL registrationsSuspended;                       //@synthesize registrationsSuspended=_registrationsSuspended - In the implementation block
@property (assign,nonatomic) BOOL registerForDarkWake;                          //@synthesize registerForDarkWake=_registerForDarkWake - In the implementation block
@property (nonatomic,readonly) NSString * apsToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)constantForEnvironmentString:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(APSConnection *)apsConnection;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(NSString *)environmentName;
-(void)setEnvironmentName:(NSString *)arg1 ;
-(id)initWithEnvironmentName:(id)arg1 ;
-(void)_setEnabledTopics:(id)arg1 ;
-(id)initWithEnvironmentName:(id)arg1 launchOnDemandPort:(id)arg2 ;
-(void)setRegisteredDelegates:(NSMutableArray *)arg1 ;
-(void)setPendingPushes:(NSMutableArray *)arg1 ;
-(void)setRegistrationsSuspended:(BOOL)arg1 ;
-(void)_registrationsWereResumed;
-(NSMutableArray *)registeredDelegates;
-(BOOL)registrationsSuspended;
-(NSMutableArray *)pendingPushes;
-(void)_handleMessage:(id)arg1 onTopic:(id)arg2 ;
-(void)suspendRegistrations;
-(void)resumeRegistrations;
-(void)registerDelegate:(id)arg1 forTopic:(id)arg2 ;
-(void)deregisterDelegate:(id)arg1 ;
-(NSString *)apsToken;
-(BOOL)registerForDarkWake;
-(void)setRegisterForDarkWake:(BOOL)arg1 ;
@end

