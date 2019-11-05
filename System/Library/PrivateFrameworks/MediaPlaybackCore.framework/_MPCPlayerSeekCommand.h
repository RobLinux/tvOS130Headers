/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>
#import <MediaPlaybackCore/MPCPlayerSeekCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerSeekCommand : _MPCPlayerItemCommand <MPCPlayerSeekCommand> {

	BOOL _prefersNegativeBackwardSkipIntervals;
	unsigned long long _seekSupport;
	NSArray* _preferredBackwardJumpIntervals;
	NSArray* _preferredForwardJumpIntervals;

}

@property (nonatomic,readonly) unsigned long long seekSupport;                       //@synthesize seekSupport=_seekSupport - In the implementation block
@property (assign,nonatomic) BOOL prefersNegativeBackwardSkipIntervals;              //@synthesize prefersNegativeBackwardSkipIntervals=_prefersNegativeBackwardSkipIntervals - In the implementation block
@property (nonatomic,copy) NSArray * preferredBackwardJumpIntervals;                 //@synthesize preferredBackwardJumpIntervals=_preferredBackwardJumpIntervals - In the implementation block
@property (nonatomic,copy) NSArray * preferredForwardJumpIntervals;                  //@synthesize preferredForwardJumpIntervals=_preferredForwardJumpIntervals - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)endSeek;
-(id)changePositionToElapsedInterval:(double)arg1 ;
-(id)beginSeekWithDirection:(long long)arg1 ;
-(id)initWithResponse:(id)arg1 seekSupport:(unsigned long long)arg2 ;
-(unsigned long long)seekSupport;
-(void)setPreferredForwardJumpIntervals:(NSArray *)arg1 ;
-(void)setPreferredBackwardJumpIntervals:(NSArray *)arg1 ;
-(NSArray *)preferredBackwardJumpIntervals;
-(void)setPrefersNegativeBackwardSkipIntervals:(BOOL)arg1 ;
-(id)_seekCommandWithMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 ;
-(BOOL)prefersNegativeBackwardSkipIntervals;
-(id)jumpByInterval:(double)arg1 ;
-(NSArray *)preferredForwardJumpIntervals;
@end

