/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction, OS_voucher, NSObject;
#import <Foundation/Foundation-Structs.h>
@class NSString, NSObject, BKSProcessAssertion;

@interface _NSActivityAssertion : NSObject {

	unsigned long long _options;
	NSString* _reason;
	NSObject*<OS_os_transaction> _transaction;
	unsigned _systemSleepAssertionID;
	NSObject*<OS_voucher> _voucher;
	NSObject*<OS_voucher> _previousVoucher;
	id<NSObject> _xpcBoost;
	BKSProcessAssertion* _processAssertion;
	/*^block*/id _expirationHandler;
	os_unfair_lock_s _lock;
	AB _ended;
	unsigned char _adoptPreviousVoucher;

}
+(void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)_performExpiringActivityWithReason:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)_expiringAssertionManagementQueue;
+(id)_expiringActivities;
+(id)_expirationHandlerExecutionQueue;
+(void)_expireAllActivies;
+(id)_expiringTaskExecutionQueue;
+(void)_dumpExpiringActivitives;
-(id)debugDescription;
-(void)dealloc;
-(void)_reactivate;
-(id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(void)_end;
-(void)_fireExpirationHandler;
@end

