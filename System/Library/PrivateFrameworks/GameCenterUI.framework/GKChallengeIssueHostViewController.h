/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GKExtensionRemoteViewController.h>
#import <GameCenterUI/GKChallengeIssueHostProtocol.h>

@class GKHostedChallengeIssueController, NSString, GKGame;

@interface GKChallengeIssueHostViewController : GKExtensionRemoteViewController <GKChallengeIssueHostProtocol> {

	GKHostedChallengeIssueController* _delegateWeak;

}

@property (assign,nonatomic) GKHostedChallengeIssueController * delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GKGame * game; 
+(id)challengeExtension;
-(void)dealloc;
-(GKHostedChallengeIssueController *)delegate;
-(void)setDelegate:(GKHostedChallengeIssueController *)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
-(id)extensionObjectProxy;
-(void)extensionIsCanceling;
@end

