/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class OBPrivacyLinkButton, UIStackView, UILabel, NSString;

@interface OBPrivacyLinkView : UIView {

	OBPrivacyLinkButton* _linkButton;
	UIStackView* _stackView;
	UILabel* _captionView;
	NSString* _captionText;
	NSString* _buttonText;

}

@property (readonly) UIStackView * stackView;                       //@synthesize stackView=_stackView - In the implementation block
@property (readonly) UILabel * captionView;                         //@synthesize captionView=_captionView - In the implementation block
@property (readonly) NSString * captionText;                        //@synthesize captionText=_captionText - In the implementation block
@property (readonly) NSString * buttonText;                         //@synthesize buttonText=_buttonText - In the implementation block
@property (readonly) OBPrivacyLinkButton * linkButton;              //@synthesize linkButton=_linkButton - In the implementation block
-(NSString *)buttonText;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIStackView *)stackView;
-(OBPrivacyLinkButton *)linkButton;
-(NSString *)captionText;
-(id)_captionTextColor;
-(id)initWithCaption:(id)arg1 buttonText:(id)arg2 image:(id)arg3 imageSize:(CGSize)arg4 useLargeIcon:(BOOL)arg5 ;
-(UILabel *)captionView;
@end

