/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentSetupFieldCell.h>

@class UIImageView;

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {

	UIImageView* _accessoryImageView;
	BOOL _hasDarkAppearance;
	long long _paymentCredentialType;

}

@property (assign,nonatomic) long long paymentCredentialType;              //@synthesize paymentCredentialType=_paymentCredentialType - In the implementation block
@property (assign,nonatomic) BOOL hasDarkAppearance;                       //@synthesize hasDarkAppearance=_hasDarkAppearance - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)pk_applyAppearance:(id)arg1 ;
-(BOOL)hasDarkAppearance;
-(void)setHasDarkAppearance:(BOOL)arg1 ;
-(void)setPaymentCredentialType:(long long)arg1 ;
-(void)setPaymentSetupField:(id)arg1 ;
-(void)_updateNetworkImage;
-(id)_networkImage;
-(long long)paymentCredentialType;
@end

