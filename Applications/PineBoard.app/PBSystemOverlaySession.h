/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:27 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PBSystemOverlayContentDelegate.h>

@protocol PBSystemOverlayContentPresenting, PBSystemUIPresenting, PBSystemOverlaySessionDelegate;
@class TVSStateMachine, PBSystemOverlayPreparationTransaction, PBSystemOverlayPresentationTransaction, PBSystemOverlayDismissalTransaction, NSMutableArray, UIViewController, NSString;

@interface PBSystemOverlaySession : NSObject <PBSystemOverlayContentDelegate> {

	TVSStateMachine* _stateMachine;
	PBSystemOverlayPreparationTransaction* _preparationTransaction;
	PBSystemOverlayPresentationTransaction* _presentationTransaction;
	PBSystemOverlayDismissalTransaction* _dismissalTransaction;
	NSMutableArray* _pendingPresentationRequests;
	NSMutableArray* _pendingDismissalRequests;
	UIViewController*<PBSystemOverlayContentPresenting> _viewController;
	BOOL _active;
	NSString* _identifier;
	long long _state;
	id<PBSystemUIPresenting> _presentationHandler;
	long long _layoutLevel;
	id<PBSystemOverlaySessionDelegate> _delegate;
	unsigned long long _sceneDeactivationReasons;

}

@property (nonatomic,readonly) id<PBSystemUIPresenting> presentationHandler;                    //@synthesize presentationHandler=_presentationHandler - In the implementation block
@property (nonatomic,readonly) long long layoutLevel;                                           //@synthesize layoutLevel=_layoutLevel - In the implementation block
@property (nonatomic,__weak,readonly) id<PBSystemOverlaySessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;                                     //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) unsigned long long sceneDeactivationReasons;                     //@synthesize sceneDeactivationReasons=_sceneDeactivationReasons - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PBSystemOverlaySessionDelegate>)delegate;
-(NSString *)identifier;
-(long long)state;
-(BOOL)isActive;
-(void)makeActive;
-(id<PBSystemUIPresenting>)presentationHandler;
-(void)_initializeStateMachine;
-(void)_machineAddPendingPresentationRequest:(id)arg1 ;
-(void)_machinePrepareUIWithProvider:(id)arg1 ;
-(void)_machineNotifyDidCancelWithContext:(id)arg1 ;
-(void)_machineCleanup;
-(void)_machineNotifyWillPresent;
-(void)_machinePresentUIWithRequest:(id)arg1 ;
-(void)_machineNotifyDidPresent;
-(void)_machineNotifyWillDismissWithContext:(id)arg1 ;
-(void)_machineDismissUIWithRequest:(id)arg1 ;
-(void)_machineNotifyDidDismiss;
-(void)_machineNotifyDidInvalidate;
-(void)contentPresenting:(id)arg1 willDismissContentWithResult:(id)arg2 error:(id)arg3 ;
-(void)contentPresentingDidDismissContent:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 layoutLevel:(long long)arg2 sceneDeactivationReasons:(unsigned long long)arg3 presentationHandler:(id)arg4 delegate:(id)arg5 ;
-(void)presentWithRequest:(id)arg1 ;
-(void)dismissWithRequest:(id)arg1 ;
-(long long)layoutLevel;
-(unsigned long long)sceneDeactivationReasons;
@end
