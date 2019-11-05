/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationCoordinatorPrivateDelegate <NSObject>
@optional
-(void)paymentAuthorizationCoordinator:(id)arg1 willFinishWithError:(id)arg2;
-(void)paymentAuthorizationCoordinator:(id)arg1 didRequestMerchantSession:(/*^block*/id)arg2;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeDisbursementVoucher:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didUpdateAccountServicePaymentMethod:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;

@end

