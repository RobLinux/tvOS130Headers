/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKWrapperViewController.h>

@interface PKCompactNavigationWrapperViewController : PKWrapperViewController {

	BOOL _hasExplicitTargetNavigationHeight;
	double _targetNavigationHeight;

}

@property (nonatomic,readonly) BOOL hasExplicitTargetNavigationHeight;              //@synthesize hasExplicitTargetNavigationHeight=_hasExplicitTargetNavigationHeight - In the implementation block
@property (assign,nonatomic) double targetNavigationHeight;                         //@synthesize targetNavigationHeight=_targetNavigationHeight - In the implementation block
-(void)loadView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(id)initWithWrappedViewController:(id)arg1 ;
-(id)initWithWrappedViewController:(id)arg1 type:(long long)arg2 ;
-(CGRect)_wrappedViewControllerFrameForBounds:(CGRect)arg1 ;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)setTargetNavigationHeight:(double)arg1 ;
-(BOOL)hasExplicitTargetNavigationHeight;
-(double)targetNavigationHeight;
@end
