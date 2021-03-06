/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/MTLModel.h>
#import <WorkflowKit/NSSecureCoding.h>

@class NSString, NSDate;

@interface WFAccount : MTLModel <NSSecureCoding> {

	NSString* _accountID;
	NSDate* _createdAt;
	NSDate* _updatedAt;

}

@property (nonatomic,copy,readonly) NSString * accountID;                  //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * createdAt;                    //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy,readonly) NSDate * updatedAt;                    //@synthesize updatedAt=_updatedAt - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(BOOL)supportsSecureCoding;
+(id)accounts;
+(id)_accounts;
+(id)serviceID;
+(BOOL)deleteAccount:(id)arg1 ;
+(BOOL)saveAccount:(id)arg1 ;
+(unsigned long long)numberOfAccounts;
+(id)localizedServiceName;
+(void)removeAccountObserver:(id)arg1 ;
+(id)addAccountObserver:(/*^block*/id)arg1 ;
+(BOOL)allowsMultipleAccounts;
+(void)notifyAccountsChanged;
+(void)setShouldIgnoreNotificationForService:(id)arg1 ;
+(BOOL)shouldIgnoreNotificationForService:(id)arg1 ;
+(void)handleChangeForService:(id)arg1 ;
+(void)useAccountObservers:(/*^block*/id)arg1 ;
+(id)accountCache;
+(unsigned long long)_numberOfAccounts;
+(id)pendingIgnoredNotifications;
+(void)addAccountObserver:(/*^block*/id)arg1 forService:(id)arg2 ;
+(id)migrate:(id)arg1 ;
+(Class)loginViewControllerClass;
-(id)init;
-(BOOL)isValid;
-(NSString *)localizedName;
-(NSString *)accountID;
-(NSDate *)createdAt;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)invalidateWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDate *)updatedAt;
@end

