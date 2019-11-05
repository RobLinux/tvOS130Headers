/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBNoteContent.h>
@class _INPBImageNoteContent, _INPBTextNoteContent;


@protocol _INPBNoteContent <NSObject>
@property (nonatomic,retain) _INPBImageNoteContent * image; 
@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) _INPBTextNoteContent * text; 
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasType; 
@required
-(int)type;
-(void)setType:(int)arg1;
-(_INPBTextNoteContent *)text;
-(void)setText:(id)arg1;
-(void)setHasType:(BOOL)arg1;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1;
-(int)StringAsType:(id)arg1;
-(_INPBImageNoteContent *)image;
-(void)setImage:(id)arg1;
-(BOOL)hasText;
-(BOOL)hasImage;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBImageNoteContent, _INPBTextNoteContent, NSString;

@interface _INPBNoteContent : PBCodable <_INPBNoteContent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL __encodeLegacyGloryData;
	int _type;
	_INPBImageNoteContent* _image;
	_INPBTextNoteContent* _text;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBImageNoteContent * image;                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,retain) _INPBTextNoteContent * text;                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) int type;                                                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_INPBTextNoteContent *)text;
-(void)setText:(_INPBTextNoteContent *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(_INPBImageNoteContent *)image;
-(void)setImage:(_INPBImageNoteContent *)arg1 ;
-(BOOL)hasText;
-(BOOL)hasImage;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
@end

