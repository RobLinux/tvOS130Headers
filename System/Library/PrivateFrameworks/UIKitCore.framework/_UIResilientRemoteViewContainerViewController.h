/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol NSCopying;
@class UIViewController, NSExtension, _UIWaitingForRemoteViewContainerViewController;

@interface _UIResilientRemoteViewContainerViewController : UIViewController {

	UIViewController* _remoteViewController;
	BOOL _delayingDisplayOfRemoteView;
	NSExtension* _extension;
	id<NSCopying> _extensionRequestIdentifier;
	UIViewController* _containedViewController;
	_UIWaitingForRemoteViewContainerViewController* _waitingController;
	UIViewController* _errorViewController;

}

@property (nonatomic,retain) NSExtension * extension;                                                         //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying> extensionRequestIdentifier;                                          //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (nonatomic,retain) UIViewController * containedViewController;                                      //@synthesize containedViewController=_containedViewController - In the implementation block
@property (nonatomic,retain) _UIWaitingForRemoteViewContainerViewController * waitingController;              //@synthesize waitingController=_waitingController - In the implementation block
@property (nonatomic,retain) UIViewController * errorViewController;                                          //@synthesize errorViewController=_errorViewController - In the implementation block
@property (assign,nonatomic) BOOL delayingDisplayOfRemoteView;                                                //@synthesize delayingDisplayOfRemoteView=_delayingDisplayOfRemoteView - In the implementation block
@property (nonatomic,readonly) id remoteViewController;                                                       //@synthesize remoteViewController=_remoteViewController - In the implementation block
+(id)instantiateWithExtension:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)remoteViewController;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)extensionRequestIdentifier;
-(UIViewController *)errorViewController;
-(void)setErrorViewController:(UIViewController *)arg1 ;
-(CGRect)_defaultInitialViewFrame;
-(id)initWithExtension:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setWaitingController:(_UIWaitingForRemoteViewContainerViewController *)arg1 ;
-(_UIWaitingForRemoteViewContainerViewController *)waitingController;
-(void)setContainedViewController:(UIViewController *)arg1 ;
-(void)_displayRemoteViewController;
-(void)_displayError:(id)arg1 ;
-(void)delayDisplayOfRemoteController;
-(void)endDelayingDisplayOfRemoteController;
-(UIViewController *)containedViewController;
-(BOOL)delayingDisplayOfRemoteView;
-(void)setDelayingDisplayOfRemoteView:(BOOL)arg1 ;
@end

