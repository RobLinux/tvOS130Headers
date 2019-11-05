/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GKPlayer;


@protocol GKCustomTournamentDelegate
@property (nonatomic,readonly) GKPlayer * creator; 
@required
-(GKPlayer *)creator;
-(void)addInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)addCreator:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)removeCreator:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)acceptInvitationWithCompletionHandler:(/*^block*/id)arg1;
-(void)declineInvitationWithCompletionHandler:(/*^block*/id)arg1;

@end

