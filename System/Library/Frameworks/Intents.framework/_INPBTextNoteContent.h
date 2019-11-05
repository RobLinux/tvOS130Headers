/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBTextNoteContent.h>
@class NSString;


@protocol _INPBTextNoteContent <NSObject>
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) BOOL hasText; 
@required
-(NSString *)text;
-(void)setText:(id)arg1;
-(BOOL)hasText;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSString;

@interface _INPBTextNoteContent : PBCodable <_INPBTextNoteContent, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSString* _text;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * text;                                                              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)hasText;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
@end

