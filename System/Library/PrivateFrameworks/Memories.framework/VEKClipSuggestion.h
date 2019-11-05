/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/VEKRangeSuggestion.h>

@protocol VEKClipProtocol;
@interface VEKClipSuggestion : VEKRangeSuggestion {

	id<VEKClipProtocol> _clip;

}

@property (nonatomic,retain) id<VEKClipProtocol> clip;              //@synthesize clip=_clip - In the implementation block
-(id)description;
-(id<VEKClipProtocol>)clip;
-(void)setClip:(id<VEKClipProtocol>)arg1 ;
-(id)initWithClipToEmulate:(id)arg1 ;
@end

