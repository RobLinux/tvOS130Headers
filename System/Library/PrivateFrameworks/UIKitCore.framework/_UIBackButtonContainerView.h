/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class CALayer, UIImage;

@interface _UIBackButtonContainerView : UIView {

	CALayer* _edgeMask;
	CALayer* _fillMask;
	BOOL _isRTL;
	UIImage* _edgeMaskImage;
	double _backButtonLeadingMargin;

}

@property (nonatomic,retain) UIImage * edgeMaskImage;                     //@synthesize edgeMaskImage=_edgeMaskImage - In the implementation block
@property (assign,nonatomic) BOOL maskEnabled; 
@property (assign,nonatomic) double backButtonLeadingMargin;              //@synthesize backButtonLeadingMargin=_backButtonLeadingMargin - In the implementation block
@property (assign,nonatomic) BOOL isRTL;                                  //@synthesize isRTL=_isRTL - In the implementation block
-(BOOL)isRTL;
-(void)setMaskEnabled:(BOOL)arg1 ;
-(BOOL)maskEnabled;
-(UIImage *)edgeMaskImage;
-(void)setEdgeMaskImage:(UIImage *)arg1 ;
-(double)backButtonLeadingMargin;
-(void)setBackButtonLeadingMargin:(double)arg1 ;
-(void)setIsRTL:(BOOL)arg1 ;
@end

