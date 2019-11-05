/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/Task.h>

@class ACAccount, NSNumber;

@interface SbsyncTask : Task {

	long long _syncType;
	long long _initialSubscriptionStatus;
	ACAccount* _account;
	long long _subscriptionStatus;
	NSNumber* _subscriptionDuration;

}

@property (nonatomic,copy) ACAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) long long subscriptionStatus;              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,copy) NSNumber * subscriptionDuration;               //@synthesize subscriptionDuration=_subscriptionDuration - In the implementation block
+(long long)subscriptionStatusForAccountID:(id)arg1 returningError:(id*)arg2 ;
+(id)_subscriptionStatusReturningError:(id*)arg1 ;
+(long long)_subscriptionStatusForAccountID:(id)arg1 dictionary:(id)arg2 returningError:(id*)arg3 ;
+(BOOL)_importSubscriptionKeyBagData:(id)arg1 accountID:(id)arg2 subscriptionStatus:(long long*)arg3 returningError:(id*)arg4 ;
+(id)_subscriptionStatusFromFPSubscriptionInfoList:(FPSubscriptionInfo_*)arg1 subscriptionInfoListLength:(unsigned)arg2 ;
+(id)sbsyncDataForAccountID:(id)arg1 sbsyncType:(long long)arg2 returningError:(id*)arg3 ;
+(BOOL)importSubscriptionKeyBagData:(id)arg1 subscriptionStatus:(long long*)arg2 returningError:(id*)arg3 ;
-(void)main;
-(long long)subscriptionStatus;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)_requestURL:(id*)arg1 ;
-(id)initWithSyncType:(long long)arg1 ;
-(void)setSubscriptionDuration:(NSNumber *)arg1 ;
-(id)_newBaseRequestBodyDictionaryWithError:(id*)arg1 ;
-(NSNumber *)subscriptionDuration;
@end

