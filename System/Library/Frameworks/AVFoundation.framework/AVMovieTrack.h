/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrack.h>

@class AVMovieTrackInternal;

@interface AVMovieTrack : AVAssetTrack {

	AVMovieTrackInternal* _movieTrackInternal;

}

@property (nonatomic,readonly) SCD_Struct_AV8 mediaPresentationTimeRange; 
@property (nonatomic,readonly) SCD_Struct_AV8 mediaDecodeTimeRange; 
@property (nonatomic,readonly) long long alternateGroupID; 
+(BOOL)expectsPropertyRevisedNotifications;
-(id)description;
-(SCD_Struct_AV8)mediaPresentationTimeRange;
-(SCD_Struct_AV8)mediaDecodeTimeRange;
-(long long)alternateGroupID;
-(id)mediaDataStorage;
@end
