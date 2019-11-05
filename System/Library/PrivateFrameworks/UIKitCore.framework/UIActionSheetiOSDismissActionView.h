/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIAlertControlleriOSActionSheetCancelBackgroundView.h>
#import <UIKit/UIActionSheetPresentationControllerDismissActionView.h>

@class NSString, UIButton;

@interface UIActionSheetiOSDismissActionView : _UIAlertControlleriOSActionSheetCancelBackgroundView <UIActionSheetPresentationControllerDismissActionView> {

	BOOL _usesShortCompactVerticalLayout;
	UIButton* _dismissButton;

}

@property (nonatomic,retain) UIButton * dismissButton;                         //@synthesize dismissButton=_dismissButton - In the implementation block
@property (assign,nonatomic) BOOL usesShortCompactVerticalLayout;              //@synthesize usesShortCompactVerticalLayout=_usesShortCompactVerticalLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(void)setUsesShortCompactVerticalLayout:(BOOL)arg1 ;
-(BOOL)usesShortCompactVerticalLayout;
-(id)initWithContinuousCornerRadius:(double)arg1 ;
-(void)_setupDismissButton;
-(double)_heightForTraitCollection:(id)arg1 ;
@end

