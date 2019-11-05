/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController;

@interface GKNavigationControllerDeferredTransitionInfo : NSObject {

	BOOL _animated;
	int _type;
	UIViewController* _viewController;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL animated;                                  //@synthesize animated=_animated - In the implementation block
-(void)dealloc;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
@end

