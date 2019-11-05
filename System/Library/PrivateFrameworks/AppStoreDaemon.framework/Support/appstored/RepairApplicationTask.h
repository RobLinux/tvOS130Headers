/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Task.h>

@class ASDRepairOptions, NSNumber, NSString, NSArray;

@interface RepairApplicationTask : Task {

	ASDRepairOptions* _options;
	NSNumber* _accountDSID;
	NSString* _bundleID;
	long long _claimStyle;
	BOOL _vppMigrated;
	BOOL _appWasClaimed;
	NSString* _clientIdentifierHeader;
	/*^block*/id _resultBlock;
	NSString* _userAgent;
	NSArray* _claimedBundleIdentifiers;

}

@property (nonatomic,copy) NSString * clientIdentifierHeader;              //@synthesize clientIdentifierHeader=_clientIdentifierHeader - In the implementation block
@property (copy) id resultBlock;                                           //@synthesize resultBlock=_resultBlock - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                           //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,readonly) BOOL vppMigrated;                           //@synthesize vppMigrated=_vppMigrated - In the implementation block
@property (nonatomic,readonly) BOOL appWasClaimed;                         //@synthesize appWasClaimed=_appWasClaimed - In the implementation block
@property (readonly) NSArray * claimedBundleIdentifiers;                   //@synthesize claimedBundleIdentifiers=_claimedBundleIdentifiers - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)main;
-(NSString *)userAgent;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(BOOL)_handleFairplayRecovery:(id)arg1 outError:(id*)arg2 hasSubscriptionError:(BOOL*)arg3 ;
-(BOOL)_handleKeybagSync:(id)arg1 outError:(id*)arg2 ;
-(void)_showAllOcelotApps;
-(void)_handleOcelotLogin:(id)arg1 ;
-(BOOL)_handleOcelotRecovery:(id)arg1 ;
-(void)_handleAppRemovedFromProgram:(id)arg1 ;
-(void)_showFamilyLeaveAlert:(id)arg1 ;
-(void)_relaunchApp;
-(BOOL)_handleOcelotAuthenication:(id)arg1 ;
-(void)_showOcelotUpsellForItemID:(id)arg1 ;
-(BOOL)_repairOcelotAppProxy:(id)arg1 fromUserName:(id)arg2 forAccount:(id)arg3 ;
-(BOOL)_handleFactoryClaimAppsWithError:(id*)arg1 ;
-(BOOL)_handleVPPRecovery:(id)arg1 outError:(id*)arg2 ;
-(BOOL)vppMigrated;
-(BOOL)appWasClaimed;
-(NSArray *)claimedBundleIdentifiers;
@end
