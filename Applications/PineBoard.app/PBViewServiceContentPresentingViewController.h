/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <PineBoard/PBSimpleRemoteViewControllerDelegate.h>
#import <PineBoard/PBSystemOverlayContentPresenting.h>

@protocol PBSystemOverlayContentDelegate;
@class PBSimpleRemoteViewController, NSString;

@interface PBViewServiceContentPresentingViewController : UIViewController <PBSimpleRemoteViewControllerDelegate, PBSystemOverlayContentPresenting> {

	BOOL _interruptible;
	BOOL _acceptsEventFocus;
	BOOL _allowsInteraction;
	id<PBSystemOverlayContentDelegate> _contentDelegate;
	PBSimpleRemoteViewController* _remoteViewController;

}

@property (assign,nonatomic) BOOL acceptsEventFocus;                                                 //@synthesize acceptsEventFocus=_acceptsEventFocus - In the implementation block
@property (nonatomic,readonly) BOOL allowsInteraction;                                               //@synthesize allowsInteraction=_allowsInteraction - In the implementation block
@property (nonatomic,readonly) PBSimpleRemoteViewController * remoteViewController;                  //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL expectsEventForwarding; 
@property (assign,nonatomic,__weak) id<PBSystemOverlayContentDelegate> contentDelegate;              //@synthesize contentDelegate=_contentDelegate - In the implementation block
@property (getter=isInterruptible,nonatomic,readonly) BOOL interruptible;                            //@synthesize interruptible=_interruptible - In the implementation block
-(BOOL)isInterruptible;
-(void)viewDidLoad;
-(PBSimpleRemoteViewController *)remoteViewController;
-(void)setContentDelegate:(id<PBSystemOverlayContentDelegate>)arg1 ;
-(id)initWithRemoteViewController:(id)arg1 supportsInterruption:(BOOL)arg2 ;
-(BOOL)acceptsEventFocus;
-(void)setAcceptsEventFocus:(BOOL)arg1 ;
-(BOOL)expectsEventForwarding;
-(void)presentContentAnimated:(BOOL)arg1 clientOptions:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)dismissContentAnimated:(BOOL)arg1 clientOptions:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id<PBSystemOverlayContentDelegate>)contentDelegate;
-(void)viewService:(id)arg1 willDismissWithResult:(id)arg2 ;
-(void)viewServiceDidDismiss:(id)arg1 ;
-(void)viewServiceDidTerminate;
-(BOOL)allowsInteraction;
-(id)initWithRemoteViewController:(id)arg1 supportsInterruption:(BOOL)arg2 allowsInteraction:(BOOL)arg3 ;
@end

