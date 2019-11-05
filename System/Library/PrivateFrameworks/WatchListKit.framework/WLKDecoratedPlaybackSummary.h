/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/NSSecureCoding.h>

@class WLKPlaybackSummary, NSString;

@interface WLKDecoratedPlaybackSummary : NSObject <NSSecureCoding> {

	WLKPlaybackSummary* _summary;
	NSString* _canonicalID;

}

@property (nonatomic,readonly) WLKPlaybackSummary * summary;              //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;               //@synthesize canonicalID=_canonicalID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(WLKPlaybackSummary *)summary;
-(id)initWithSummary:(id)arg1 canonicalID:(id)arg2 ;
-(NSString *)canonicalID;
@end

