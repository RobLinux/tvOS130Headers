/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/NSSecureCoding.h>

@class MPModelRequest, MPIdentifierSet;

@interface MPCModelPlaybackIntentTracklistToken : NSObject <NSSecureCoding> {

	MPModelRequest* _request;
	MPIdentifierSet* _startItemIdentifiers;

}

@property (nonatomic,copy) MPModelRequest * request;                            //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) MPIdentifierSet * startItemIdentifiers;              //@synthesize startItemIdentifiers=_startItemIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requiredPropertiesForStaticMediaClips;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MPModelRequest *)request;
-(void)setRequest:(MPModelRequest *)arg1 ;
-(MPIdentifierSet *)startItemIdentifiers;
-(void)setStartItemIdentifiers:(MPIdentifierSet *)arg1 ;
@end

