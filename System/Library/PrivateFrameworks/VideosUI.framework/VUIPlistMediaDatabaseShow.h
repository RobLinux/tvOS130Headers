/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIPlistMediaDatabaseEntity.h>
#import <VideosUI/NSCopying.h>

@class NSArray;

@interface VUIPlistMediaDatabaseShow : VUIPlistMediaDatabaseEntity <NSCopying> {

	NSArray* _seasons;

}

@property (nonatomic,retain) NSArray * seasons;              //@synthesize seasons=_seasons - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)isLocal;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(NSArray *)seasons;
-(void)setSeasons:(NSArray *)arg1 ;
-(id)seasonForIdentifier:(id)arg1 ;
@end

