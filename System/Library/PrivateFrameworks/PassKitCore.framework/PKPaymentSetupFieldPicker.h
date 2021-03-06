/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSetupField.h>

@class NSArray, PKPaymentSetupFieldPickerItem;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField {

	NSArray* _pickerItems;

}

@property (nonatomic,copy) NSArray * pickerItems;                                     //@synthesize pickerItems=_pickerItems - In the implementation block
@property (nonatomic,copy) PKPaymentSetupFieldPickerItem * currentValue; 
-(PKPaymentSetupFieldPickerItem *)currentValue;
-(id)displayString;
-(void)setCurrentValue:(PKPaymentSetupFieldPickerItem *)arg1 ;
-(void)updateWithConfiguration:(id)arg1 ;
-(unsigned long long)fieldType;
-(id)_submissionStringForValue:(id)arg1 ;
-(BOOL)submissionStringMeetsAllRequirements;
-(void)_commonUpdate;
-(NSArray *)pickerItems;
-(void)setPickerItems:(NSArray *)arg1 ;
@end

