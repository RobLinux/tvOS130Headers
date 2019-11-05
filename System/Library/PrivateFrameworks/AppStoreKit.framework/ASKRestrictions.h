/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore;

@interface ASKRestrictions : NSObject {

	long long _maximumAppContentRating;
	BOOL _isAppInstallationAllowed;
	BOOL _isRunningInStoreDemoMode;
	BOOL _hasManagedAppleID;
	BOOL _isAccountModificationRestricted;
	NSObject*<OS_dispatch_queue> _queue;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                     //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) long long maximumAppContentRating; 
@property (nonatomic,readonly) BOOL isAppInstallationAllowed; 
@property (nonatomic,readonly) BOOL isRunningInStoreDemoMode; 
@property (nonatomic,readonly) BOOL hasManagedAppleID; 
@property (nonatomic,readonly) BOOL isAccountModificationRestricted; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(ACAccountStore *)accountStore;
-(BOOL)isAppInstallationAllowed;
-(BOOL)isRunningInStoreDemoMode;
-(id)initWithAccountStore:(id)arg1 ;
-(BOOL)isAccountModificationRestricted;
-(void)updateRestrictionsAndNotifyIfNeeded;
-(void)updateRestrictionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(long long)maximumAppContentRating;
-(BOOL)hasManagedAppleID;
@end

