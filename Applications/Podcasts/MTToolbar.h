/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIToolbar.h>

@class UIView, UIColor;

@interface MTToolbar : UIToolbar {

	UIView* _separatorView;
	UIColor* _separatorColor;

}

@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden; 
@property (nonatomic,retain) UIColor * separatorColor;                                   //@synthesize separatorColor=_separatorColor - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(id)_separatorColor;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(BOOL)isSeparatorHidden;
-(void)setupView;
@end

