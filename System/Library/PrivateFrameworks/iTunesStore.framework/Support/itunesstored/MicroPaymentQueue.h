/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSManagedObjectID, NSMutableArray, NSObject;

@interface MicroPaymentQueue : NSObject {

	NSManagedObjectID* _activePaymentID;
	long long _aliveState;
	long long _changeSetCount;
	NSMutableArray* _clients;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _observingNetworkChanges;
	NSObject*<OS_dispatch_queue> _purchaseActionsDBQueue;

}
+(id)paymentQueue;
-(id)init;
-(void)dealloc;
-(id)_clients;
-(void)start;
-(void)checkQueueForClientWithIdentifier:(id)arg1 URLBagContext:(id)arg2 ;
-(void)_dispatchAsync:(/*^block*/id)arg1 ;
-(void)finishDownloadsWithIdentifiers:(id)arg1 ;
-(void)observeXPCServer:(id)arg1 ;
-(void)failDownloadsWithIdentifiers:(id)arg1 ;
-(void)_refreshDidFinishNotification:(id)arg1 ;
-(void)_clientDisconnectNotification:(id)arg1 ;
-(id)_beginManagedContextSession;
-(void)_enumerateDownloadsForIdentifiers:(id)arg1 context:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_clientForObjectID:(id)arg1 ;
-(id)_clientForPayment:(id)arg1 ;
-(void)addPaymentWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)cancelDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)cancelRequestWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)checkQueueForClientWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)connectedAppEnteredForegroundWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)finishPaymentWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getTransactionsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)pauseDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)productsRequestWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)registerClientWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)restoreCompletedTransactionsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)resumeDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)startDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)updateDeferredPaymentWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)addInAppReviewRequestWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)updateInAppReviewRequestWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)resetInAppReviewRequestsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)addPurchaseIntentWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getPromotedIAPOrderWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setPromotedIAPOrderWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getPromotedIAPVisibilityWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setPromotedIAPVisibilityWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getPromotedIAPInfoInternalWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)installSheetStateUpdatedWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)forceSandboxWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_startFirstReadyPayment;
-(id)_newPaymentQueueClientWithMessage:(id)arg1 connection:(id)arg2 parameter:(const char*)arg3 ;
-(id)_clientForConnection:(id)arg1 paymentQueueClient:(id)arg2 ;
-(void)addPurchaseIntentWithProductIdentifier:(id)arg1 productName:(id)arg2 appBundleId:(id)arg3 appName:(id)arg4 ;
-(id)_copyDownloadsIDsFromMessage:(id)arg1 key:(const char*)arg2 ;
-(void)_sendPurchaseIntentsForApp:(id)arg1 storeKitClient:(id)arg2 force:(BOOL)arg3 ;
-(BOOL)_inAppReviewEnabled;
-(id)_inAppReviewRequestConstants;
-(void)_setActivePaymentID:(id)arg1 ;
-(void)_networkTypeChanged:(id)arg1 ;
-(id)_firstReadyPaymentInContext:(id)arg1 ;
-(void)_finishPaymentOperationForPaymentID:(id)arg1 result:(BOOL)arg2 error:(id)arg3 ;
-(void)notifyClientsOfExternalPropertyChanges:(id)arg1 ofDownloadID:(long long)arg2 ;
-(void)startFirstReadyPayment;
-(void)updateWithPurchaseResponse:(id)arg1 ;
@end

