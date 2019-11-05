/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreKit/SKPaymentTransactionObserver.h>

@interface AppStoreKit.ArcadeSubscriptionManager : NSObject <SKPaymentTransactionObserver> {

	 paymentQueue;
	 observers;
	 stateLock;
	 arcadeSubscriptionFamilyId;
	 subscriptionEntitlements;
	 subscriptionState;
	 paymentCallbacks;
	 logger;

}
-(id)init;
-(void)dealloc;
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
-(void)entitlementsDidChange;
@end

