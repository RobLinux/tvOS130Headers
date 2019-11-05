/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/NSSecureCoding.h>

@class NSString, NSData;

@interface MPPlaybackArchiveDisplayProperties : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSData* _artworkImageData;

}

@property (nonatomic,copy,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSData * artworkImageData;              //@synthesize artworkImageData=_artworkImageData - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)createPlaybackArchiveDisplayPropertiesForPlayerID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_createNowPlayingItemDisplayPropertiesForMetadataObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(id)copyWithOptions:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 artworkImageData:(id)arg3 ;
-(NSData *)artworkImageData;
@end

