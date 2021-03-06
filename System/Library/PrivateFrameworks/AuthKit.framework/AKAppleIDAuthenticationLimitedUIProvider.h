/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAppleIDAuthenticationLimitedUIProvider <NSObject>
@optional
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1;
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4;

@end

