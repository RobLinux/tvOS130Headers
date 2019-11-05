/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UINavigationBar.h>

@class UILabel;

@interface PKPaymentAuthorizationNavigationBar : UINavigationBar {

	UILabel* _environmentLabel;

}
+(id)applePayBarButtonItem;
+(id)cardOnFileBarButtonItemForRequestor:(unsigned long long)arg1 ;
+(id)_leftBarButtonItemWithImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didUpdateInterfaceStyle;
@end

