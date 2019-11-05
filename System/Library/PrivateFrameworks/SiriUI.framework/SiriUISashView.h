/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, SiriUITextContainerView, SiriUISashItem;

@interface SiriUISashView : UIView {

	UIView* _contentView;
	UIImageView* _imageView;
	SiriUITextContainerView* _textContainerView;
	SiriUISashItem* _sashItem;

}

@property (nonatomic,readonly) SiriUISashItem * sashItem;              //@synthesize sashItem=_sashItem - In the implementation block
+(id)_font;
+(SCD_Struct_Si6)_textContainerStyleForSashItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setSashItem:(id)arg1 locale:(id)arg2 ;
-(SiriUISashItem *)sashItem;
@end

