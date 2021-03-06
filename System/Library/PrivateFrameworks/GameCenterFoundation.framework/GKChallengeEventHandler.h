/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GKChallengeEventHandlerDelegate, GKChallengeEventHandlerUIDelegate;
@class GKChallengeInternal;

@interface GKChallengeEventHandler : NSObject {

	id<GKChallengeEventHandlerDelegate> _delegateWeak;
	id<GKChallengeEventHandlerUIDelegate> _uiDelegate;
	GKChallengeInternal* _pendingReceivedChallenge;
	GKChallengeInternal* _pendingCompletedChallenge;

}

@property (nonatomic,retain) GKChallengeInternal * pendingReceivedChallenge;                //@synthesize pendingReceivedChallenge=_pendingReceivedChallenge - In the implementation block
@property (nonatomic,retain) GKChallengeInternal * pendingCompletedChallenge;               //@synthesize pendingCompletedChallenge=_pendingCompletedChallenge - In the implementation block
@property (nonatomic,retain) id<GKChallengeEventHandlerUIDelegate> uiDelegate;              //@synthesize uiDelegate=_uiDelegate - In the implementation block
@property (assign,nonatomic) id<GKChallengeEventHandlerDelegate> delegate;                  //@synthesize delegateWeak=_delegateWeak - In the implementation block
+(id)challengeEventHandler;
-(void)dealloc;
-(id<GKChallengeEventHandlerDelegate>)delegate;
-(void)setDelegate:(id<GKChallengeEventHandlerDelegate>)arg1 ;
-(id<GKChallengeEventHandlerUIDelegate>)uiDelegate;
-(void)setUiDelegate:(id<GKChallengeEventHandlerUIDelegate>)arg1 ;
-(void)receivedChallengeSelected:(id)arg1 ;
-(void)completedChallengeSelected:(id)arg1 ;
-(void)challengeReceived:(id)arg1 ;
-(void)challengeCompleted:(id)arg1 ;
-(void)setPendingReceivedChallenge:(GKChallengeInternal *)arg1 ;
-(void)setPendingCompletedChallenge:(GKChallengeInternal *)arg1 ;
-(void)showBannerForChallenge:(id)arg1 complete:(/*^block*/id)arg2 ;
-(GKChallengeInternal *)pendingReceivedChallenge;
-(GKChallengeInternal *)pendingCompletedChallenge;
@end

