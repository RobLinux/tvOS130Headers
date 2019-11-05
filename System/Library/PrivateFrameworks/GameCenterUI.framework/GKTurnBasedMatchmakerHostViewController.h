/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GKExtensionRemoteViewController.h>
#import <GameCenterUI/GKTurnBasedMatchmakerHostProtocol.h>
#import <GameCenterUI/GKTurnBasedMatchmakerServiceProtocol.h>

@class GKTurnBasedMatchmakerViewController, NSString, GKGame;

@interface GKTurnBasedMatchmakerHostViewController : GKExtensionRemoteViewController <GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol> {

	GKTurnBasedMatchmakerViewController* _delegateWeak;

}

@property (assign,nonatomic) GKTurnBasedMatchmakerViewController * delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GKGame * game; 
+(id)turnBasedMatchmakerExtension;
+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
-(void)dealloc;
-(GKTurnBasedMatchmakerViewController *)delegate;
-(void)setDelegate:(GKTurnBasedMatchmakerViewController *)arg1 ;
-(void)refreshMatches;
-(void)setShowExistingMatches:(BOOL)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
-(void)setMatchRequestInternal:(id)arg1 ;
-(void)setShowPlay:(BOOL)arg1 ;
-(void)setShowQuit:(BOOL)arg1 ;
-(id)extensionObjectProxy;
-(void)extensionIsCanceling;
@end

