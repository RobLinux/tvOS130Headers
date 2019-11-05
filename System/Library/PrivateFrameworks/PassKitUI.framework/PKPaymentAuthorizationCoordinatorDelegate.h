/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationCoordinatorDelegate <NSObject>
@optional
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinatorWillAuthorizePayment:(id)arg1;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingAddress:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingMethod:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectShippingAddress:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 completion:(/*^block*/id)arg3;

@required
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;

@end

