/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DaemonDatabase, NSMutableDictionary;

@interface DownloadPolicyManager : NSObject {

	DaemonDatabase* _database;
	NSMutableDictionary* _policies;
	NSMutableDictionary* _sizeLimitOverrides;

}

@property (nonatomic,__weak,readonly) DaemonDatabase * daemonDatabase;              //@synthesize database=_database - In the implementation block
-(id)init;
-(DaemonDatabase *)daemonDatabase;
-(long long)addDownloadPolicy:(id)arg1 ;
-(void)setOverrideDownloadSizeLimit:(long long)arg1 forDownloadIdentifier:(long long)arg2 ;
-(void)removeOverrideDownloadSizeLimitForDownloadIdentifier:(long long)arg1 ;
-(id)initWithDaemonDatabase:(id)arg1 ;
-(void)_initializePolicy;
-(void)_addPolicy:(id)arg1 ;
-(long long)downloadSizeLimitForPolicyWithID:(long long)arg1 networkType:(long long)arg2 ;
-(long long)_sizeLimitForPolicy:(id)arg1 networkType:(long long)arg2 ;
-(BOOL)_isPolicyRuleNetworkTypeAllowed:(id)arg1 networkType:(long long)arg2 ;
-(BOOL)_isPolicyRuleCellularDataAllowed:(id)arg1 networkType:(long long)arg2 ;
-(BOOL)_isPolicyRuleSatisfied:(id)arg1 forPolicy:(id)arg2 networkType:(long long)arg3 ;
-(id)downloadPolicyForID:(long long)arg1 ;
-(long long)downloadSizeLimitForPolicyWithID:(long long)arg1 ;
-(id)overrideDownloadSizeLimitForDownloadIdentifier:(long long)arg1 ;
@end

