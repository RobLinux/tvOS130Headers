/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSVSubscriptionStatusRequest, NSObject, SSVSubscriptionStatus, NSDate, NSMutableArray;

@interface SSVSubscriptionStatusCoordinator : NSObject {

	SSVSubscriptionStatusRequest* _activeRequest;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _didReset;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSVSubscriptionStatus* _lastKnownStatus;
	NSDate* _lastStatusDate;
	int _notificationToken;
	long long _subscriptionStatusAccessPolicy;
	NSMutableArray* _statusBlocks;

}

@property (copy,readonly) SSVSubscriptionStatus * lastKnownStatus; 
+(id)sharedCoordinator;
+(id)copyStatusFromUserDefaults;
+(void)updateUserDefaultsWithStatus:(id)arg1 ;
+(id)_existingSharedCoordinator;
+(id)_changeNotificationSuspensionAccessQueue;
+(void)_sendChangeNotification;
+(void)sendChangeNotification;
+(void)beginSuspendingSubscriptionStatusChangeNotifications;
+(void)endSuspendingSubscriptionStatusChangeNotifications;
+(void)removeUserDefaultsForAccountIdentifier:(id)arg1 ;
+(void)updateWithResponseDictionary:(id)arg1 accountIdentifier:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)_externalChangeNotification;
-(void)_updateSubscriptionStatusAccessPolicyAllowingNotification:(BOOL)arg1 ;
-(void)_accountStoreChangedNotification;
-(void)_deviceStoreFrontChangedNotification;
-(id)_copyValidStatusForStatus:(id)arg1 ;
-(id)_copyStatusDateFromUserDefaults;
-(id)_copyStatusFromUserDefaults;
-(void)_handleRequestResponseWithStatus:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3 ;
-(void)_validateLastKnownStatus;
-(void)_fireStatusBlocksWithStatus:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3 ;
-(void)getStatusWithOptions:(id)arg1 statusBlock:(/*^block*/id)arg2 ;
-(SSVSubscriptionStatus *)lastKnownStatus;
-(void)modifyLastKnownStatusUsingBlock:(/*^block*/id)arg1 ;
-(void)_invalidateLastKnownStatus;
@end

