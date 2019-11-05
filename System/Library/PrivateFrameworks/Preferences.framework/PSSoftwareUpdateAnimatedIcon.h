/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface PSSoftwareUpdateAnimatedIcon : UIView {

	UIImageView* _innerGearView;
	UIImageView* _outerGearShadowView;
	UIImageView* _outerGearView;
	BOOL _animating;

}

@property (nonatomic,readonly) UIImageView * innerGearView; 
@property (nonatomic,readonly) UIImageView * outerGearShadowView; 
@property (nonatomic,readonly) UIImageView * outerGearView; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(UIImageView *)innerGearView;
-(UIImageView *)outerGearShadowView;
-(UIImageView *)outerGearView;
-(void)createConstraints;
@end

