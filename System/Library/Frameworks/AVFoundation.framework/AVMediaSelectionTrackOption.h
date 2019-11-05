/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetTrack, NSDictionary, AVWeakReference;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {

	id _groupID;
	AVAssetTrack* _track;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	BOOL _displaysNonForcedSubtitles;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(id)dictionary;
-(id)locale;
-(id)group;
-(int)trackID;
-(id)mediaType;
-(id)track;
-(id)commonMetadata;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(BOOL)isPlayable;
-(id)_track;
-(id)mediaSubTypes;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(BOOL)displaysNonForcedSubtitles;
-(id)_groupID;
-(id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 ;
@end

