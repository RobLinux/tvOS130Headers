/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol SRStarkGatekeeperHeaderViewDelegate;
@class AFAnalyticsTurnBasedInstrumentationContext, UIFocusContainerGuide, NSString;

@interface SRStarkGatekeeperHeaderView : UIView {

	AFAnalyticsTurnBasedInstrumentationContext* _currentTurnContext;
	id<SRStarkGatekeeperHeaderViewDelegate> _delegate;
	UIFocusContainerGuide* _gatekeeperHeaderViewFocusContainerGuide;
	NSString* _appBundleIdentifier;

}

@property (nonatomic,retain) UIFocusContainerGuide * gatekeeperHeaderViewFocusContainerGuide;                                                                        //@synthesize gatekeeperHeaderViewFocusContainerGuide=_gatekeeperHeaderViewFocusContainerGuide - In the implementation block
@property (setter=_setAppBundleIdentifier:,getter=_appBundleIdentifier,nonatomic,retain) NSString * appBundleIdentifier;                                             //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (setter=_setCurrentTurnContext:,getter=_currentTurnContext,nonatomic,retain) AFAnalyticsTurnBasedInstrumentationContext * currentTurnContext;              //@synthesize currentTurnContext=_currentTurnContext - In the implementation block
@property (assign,nonatomic,__weak) id<SRStarkGatekeeperHeaderViewDelegate> delegate;                                                                                //@synthesize delegate=_delegate - In the implementation block
+(id)gatekeeperForRequestOptions:(id)arg1 currentTurnContext:(id)arg2 ;
+(id)gatekeeperForAceObject:(id)arg1 currentTurnContext:(id)arg2 ;
-(void)dealloc;
-(id<SRStarkGatekeeperHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<SRStarkGatekeeperHeaderViewDelegate>)arg1 ;
-(id)_init;
-(id)_appBundleIdentifier;
-(void)layoutSubviews;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(void)_setCurrentTurnContext:(id)arg1 ;
-(id)_currentTurnContext;
-(id)initWithRequestOptions:(id)arg1 currentTurnContext:(id)arg2 ;
-(id)initWithAceObject:(id)arg1 currentTurnContext:(id)arg2 ;
-(void)_setAppBundleIdentifier:(id)arg1 ;
-(void)_updateForAppBundleIdentifier;
-(void)_logGatekeeperDismissedManually;
-(unsigned long long)_gatekeeperTypeForBundleIdentifier:(id)arg1 ;
-(UIFocusContainerGuide *)gatekeeperHeaderViewFocusContainerGuide;
-(void)updateGatekeeperWithAceObject:(id)arg1 currentTurnContext:(id)arg2 ;
-(void)_dismissalButtonTapped:(id)arg1 ;
-(void)logGatekeeperAppeared;
-(void)setGatekeeperHeaderViewFocusContainerGuide:(UIFocusContainerGuide *)arg1 ;
@end

