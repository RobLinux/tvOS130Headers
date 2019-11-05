/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILongPressGestureRecognizer, UINavigationController, NSString;

@interface PXSnapBackController : NSObject <UIGestureRecognizerDelegate> {

	BOOL _enabled;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UINavigationController* _navigationController;

}

@property (nonatomic,__weak,readonly) UINavigationController * navigationController;                   //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                            //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(UINavigationController *)navigationController;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_handleLongPressGestureRecognizer:(id)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
-(void)_loadGestureRecognizer;
-(void)_unloadGestureRecognizer;
-(void)_presentHistory;
-(void)_enumerateDestinationViewControllersUsingBlock:(/*^block*/id)arg1 ;
-(id)_backButtonView;
@end

