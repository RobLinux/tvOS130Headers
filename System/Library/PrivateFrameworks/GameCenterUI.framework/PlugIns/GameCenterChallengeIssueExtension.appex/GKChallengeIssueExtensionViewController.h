/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:31:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/PlugIns/GameCenterChallengeIssueExtension.appex/GameCenterChallengeIssueExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GKExtensionViewController.h>
#import <GameCenterChallengeIssueExtension/GKChallengeIssueServiceProtocol.h>

@class GKChallenge, NSString, NSArray, GKGame;

@interface GKChallengeIssueExtensionViewController : GKExtensionViewController <GKChallengeIssueServiceProtocol> {

	BOOL _forcePicker;
	GKChallenge* _challenge;
	NSString* _defaultMessage;
	NSArray* _players;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) GKChallenge * challenge;               //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,copy) NSString * defaultMessage;               //@synthesize defaultMessage=_defaultMessage - In the implementation block
@property (nonatomic,retain) NSArray * players;                     //@synthesize players=_players - In the implementation block
@property (assign,nonatomic) BOOL forcePicker;                      //@synthesize forcePicker=_forcePicker - In the implementation block
@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GKGame * game; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(GKChallenge *)challenge;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setChallenge:(GKChallenge *)arg1 ;
-(NSArray *)players;
-(void)setPlayers:(NSArray *)arg1 ;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setDefaultMessage:(NSString *)arg1 ;
-(void)setForcePicker:(BOOL)arg1 ;
-(NSString *)defaultMessage;
-(BOOL)forcePicker;
-(BOOL)_useBackdropViewForWindowBackground;
-(void)constructContentViewController;
-(id)hostObjectProxy;
@end

