/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBPlayMediaIntentResponse.h>
@class _INPBDictionary;


@protocol _INPBPlayMediaIntentResponse <NSObject>
@property (nonatomic,retain) _INPBDictionary * nowPlayingInfo; 
@property (nonatomic,readonly) BOOL hasNowPlayingInfo; 
@required
-(_INPBDictionary *)nowPlayingInfo;
-(void)setNowPlayingInfo:(id)arg1;
-(BOOL)hasNowPlayingInfo;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBDictionary, NSString;

@interface _INPBPlayMediaIntentResponse : PBCodable <_INPBPlayMediaIntentResponse, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	_INPBDictionary* _nowPlayingInfo;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBDictionary * nowPlayingInfo;                                           //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasNowPlayingInfo; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBDictionary *)nowPlayingInfo;
-(void)setNowPlayingInfo:(_INPBDictionary *)arg1 ;
-(BOOL)hasNowPlayingInfo;
@end

