/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UITextGestureClusterViewDelegate;
@class NSMutableArray, NSMutableDictionary, UIView, NSDictionary, NSArray, NSString;

@interface UITextGestureCluster : NSObject <UIGestureRecognizerDelegate> {

	UITextGestureCluster* _parent;
	NSMutableArray* _children;
	NSMutableDictionary* _gestures;
	UIView* _view;
	BOOL _inGesture;
	id<UITextGestureClusterViewDelegate> _delegate;

}

@property (nonatomic,retain,readonly) NSDictionary * gestures;                                  //@synthesize gestures=_gestures - In the implementation block
@property (nonatomic,retain,readonly) NSArray * children;                                       //@synthesize children=_children - In the implementation block
@property (assign,nonatomic,__weak) id<UITextGestureClusterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (__weak,readonly) UITextGestureCluster * parent; 
@property (__weak,readonly) UITextGestureCluster * root; 
@property (assign,nonatomic) BOOL inGesture;                                                    //@synthesize inGesture=_inGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)addChild:(id)arg1 ;
-(UITextGestureCluster *)parent;
-(id<UITextGestureClusterViewDelegate>)delegate;
-(void)setDelegate:(id<UITextGestureClusterViewDelegate>)arg1 ;
-(NSArray *)children;
-(UITextGestureCluster *)root;
-(id)recursiveDescription;
-(void)detach;
-(void)removeChild:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithView:(id)arg1 ;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(id)textInput;
-(NSDictionary *)gestures;
-(void)addGestureRecognizer:(id)arg1 withName:(id)arg2 ;
-(id)recognizerForName:(id)arg1 ;
-(void)resetForLink;
-(BOOL)doesControlDelegate;
-(void)completeInitialisation;
-(void)_resetForLink;
-(BOOL)tapOnLinkWithGesture:(id)arg1 ;
-(void)cancelInteractionWithLink;
-(BOOL)shouldClusterAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(BOOL)inGesture;
-(id)gestureWithName:(id)arg1 ;
-(BOOL)shouldHandleFormGestureAtLocation:(CGPoint)arg1 ;
-(BOOL)cluster_gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)cluster_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)isInteractingWithLink;
-(BOOL)shouldIgnoreLinkGestures;
-(id)linkInteractionView;
-(id)defaultDoubleTapRecognizerWithAction:(SEL)arg1 ;
-(id)defaultTapRecognizerWithAction:(SEL)arg1 ;
-(void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting;
-(BOOL)containerChangesSelectionOnOneFingerTap;
-(void)disableClearsOnInsertion;
-(double)distanceBetweenPoint:(CGPoint)arg1 andRange:(id)arg2 ;
-(void)turnOffDrawsAsAtomIfPlainStyleAtom;
-(BOOL)_shouldObscureTextInput;
-(void)setInGesture:(BOOL)arg1 ;
@end

