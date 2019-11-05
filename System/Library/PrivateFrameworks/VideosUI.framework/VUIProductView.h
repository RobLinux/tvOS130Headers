/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface VUIProductView : UIView {

	BOOL _cardUIEnabled;
	double _cardInsets;

}

@property (assign,nonatomic) double cardInsets;               //@synthesize cardInsets=_cardInsets - In the implementation block
@property (assign,nonatomic) BOOL cardUIEnabled;              //@synthesize cardUIEnabled=_cardUIEnabled - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tv_setShowcaseFactor:(double)arg1 ;
-(void)setCardInsets:(double)arg1 ;
-(double)cardInsets;
-(BOOL)cardUIEnabled;
-(void)setCardUIEnabled:(BOOL)arg1 ;
@end

