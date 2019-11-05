/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKTournamentPlayerStandingsInternal;

@interface GKTournamentPlayerStandings : NSObject {

	GKTournamentPlayerStandingsInternal* _internal;

}

@property (retain) GKTournamentPlayerStandingsInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) long long score; 
@property (nonatomic,readonly) long long topScore; 
@property (nonatomic,readonly) long long friendRank; 
@property (nonatomic,readonly) long long friendCount; 
@property (nonatomic,readonly) long long globalRank; 
@property (nonatomic,readonly) long long globalPlayerCount; 
@property (nonatomic,readonly) long long replayCount; 
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(GKTournamentPlayerStandingsInternal *)internal;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKTournamentPlayerStandingsInternal *)arg1 ;
@end

